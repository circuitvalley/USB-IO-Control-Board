#ifndef MAIN_C
#define MAIN_C

// Global includes
#include <htc.h>

// Local includes
#include "usb.h"
#include "HardwareProfile.h"
#include "usb_function_hid.h"
#include "genericHID.h"
void delayMs();
// PIC 18F4550 fuse configuration:
// Config word 1 (Oscillator configuration)
// 20Mhz crystal input scaled to 48Mhz and configured for USB operation
__CONFIG(1, USBPLL & IESODIS & FCMDIS & HSPLL & CPUDIV1 & PLLDIV5);
// Config word 2
__CONFIG(2, VREGEN & PWRTDIS & BOREN & BORV20 & WDTDIS & WDTPS32K);
// Config word 3
__CONFIG(3, PBDIGITAL & LPT1DIS & MCLREN);
// Config word 4
__CONFIG(4, XINSTDIS & STVREN & LVPDIS & ICPORTDIS & DEBUGDIS);
// Config word 5, 6 and 7 (protection configuration)
__CONFIG(5, UNPROTECT);
__CONFIG(6, UNPROTECT);
__CONFIG(7, UNPROTECT);

// local prototypes
static void InitialiseSystem(void);
void ProcessIO(void);

// Main function
void main(void)
{
    InitialiseSystem();

    while(1)
    {
		// Check bus status and service USB interrupts.
        USBDeviceTasks();

		// Application-specific tasks.
        ProcessIO();        
    }
}

// Initialise system
static void InitialiseSystem(void)
{
    ADCON1 = 0x0F; // Default all pins to digital

	// Configure ports as inputs (1) or outputs(0)
	TRISA = 0xFF;
	TRISB = 0b00000000;
	TRISC = 0b00000000;
	TRISD = 0b00000000;
	TRISE = 0b00000001;

	// Clear all ports
	PORTB = 0b00000000;
	PORTC = 0b00000000;
	PORTD = 0b00000000;
	PORTE = 0b00000000;
 	ADCON0 = 0x01; 
	ADCON1 = 0x09;
	ADCON2 = 0x90;
    PORTC =PORTC | 0x1;
    #if defined(USE_SELF_POWER_SENSE_IO)
    tris_self_power = INPUT_PIN;
    #endif
    
    // Initialize the variable holding the handle for the last
    // transmission
    USBOutHandle = 0;
    USBInHandle = 0;

    blinkStatusValid = TRUE;
    
    USBDeviceInit();


}

// Process input and output
void delayMs()
{
int i,j;
for(i=0;i<=300;i++)
{
for(j=0;j<=50;j++);
}
}
void ProcessIO(void)
{   
    // If we are not in the configured state just return
    if((USBDeviceState < CONFIGURED_STATE)||(USBSuspendControl==1)) return;
    
	// We support the following commands:
	//
	// 0x80 Toggle the LED
	// 0x81 Read the push-switch status
	// 0x82 Read the LED status

	//Check if data was received from the host.
    if(!HIDRxHandleBusy(USBOutHandle))
    {   
        switch(ReceivedDataBuffer[0])
		{
            case 0x80:  //Both chennel B and D as output
			TRISB = 0x00;
			TRISD = 0x00;
			  PORTB = ReceivedDataBuffer[1];
			  PORTD = ReceivedDataBuffer[2] ;

				ToSendDataBuffer[1] =ReceivedDataBuffer[1];
				ToSendDataBuffer[2] =ReceivedDataBuffer[2];
			 	ToSendDataBuffer[0] = 0x80;
				
				// Transmit the response to the host
                if(!HIDTxHandleBusy(USBInHandle))
				{
					USBInHandle = HIDTxPacket(HID_EP,(BYTE*)&ToSendDataBuffer[0],64);
				}
                break;
			
			case 0x81:  //Both chennel B and D as input
			TRISB = 0xFF;
			TRISD = 0xFF;		

			ToSendDataBuffer[1] =PORTB;
			ToSendDataBuffer[2] =PORTD;
			ToSendDataBuffer[0] = 0x81;
				
				// Transmit the response to the host
                if(!HIDTxHandleBusy(USBInHandle))
				{
					USBInHandle = HIDTxPacket(HID_EP,(BYTE*)&ToSendDataBuffer[0],64);
				}
                break;
			
			case 0x82:  // chennel B as Output and D as input
			TRISB = 0x00;
			TRISD = 0xFF;
			 
			PORTB = ReceivedDataBuffer[1];
			ToSendDataBuffer[1] =ReceivedDataBuffer[1];
			ToSendDataBuffer[2] =PORTD;
			ToSendDataBuffer[0] = 0x82;
				
				// Transmit the response to the host
                if(!HIDTxHandleBusy(USBInHandle))
				{
					USBInHandle = HIDTxPacket(HID_EP,(BYTE*)&ToSendDataBuffer[0],64);
				}
                break;
			case 0x83:  //chennel B Input and D as Output
				TRISB = 0xFF;
				TRISD = 0x00;
			
			    PORTD = ReceivedDataBuffer[2];
			 	ToSendDataBuffer[1] =PORTB;
		     	ToSendDataBuffer[2] =ReceivedDataBuffer[2];
			 	ToSendDataBuffer[0] = 0x83;
				
				// Transmit the response to the host
                if(!HIDTxHandleBusy(USBInHandle))
				{
					USBInHandle = HIDTxPacket(HID_EP,(BYTE*)&ToSendDataBuffer[0],64);
				}
                break;

            case 0x84:  // Read all adc channels status
				ADCON0= 0x01;
				ADCON1 = 0x09;
				ADCON2 = 0x8D;

				ADCON0bits.GODONE =1;	
				ToSendDataBuffer[1] =PORTB;
			 	ToSendDataBuffer[2] =PORTD;
				while((ADCON0 & 0x02)==1);
			  		delayMs();
		 			  ToSendDataBuffer[4] = ADRESL;
				ToSendDataBuffer[3] = ADRESH;
		
 				ADCON0= 0x05;
	ADCON1 = 0x09;
	ADCON2 = 0x8D;
				ADCON0bits.GODONE =1;
				while((ADCON0 & 0x02)==1);
				
		         delayMs();
			    ToSendDataBuffer[6] = ADRESL;
				ToSendDataBuffer[5] = ADRESH;
				
			
                ADCON0= 0x09;
				ADCON1 = 0x09;
				ADCON2 = 0x8D;
				ADCON0bits.GODONE =1;
				while((ADCON0 & 0x02)==1);
				
		         delayMs();
				ToSendDataBuffer[8] = ADRESL;
			    ToSendDataBuffer[7] = ADRESH;
				
			
				 ADCON0= 0x0D;
				ADCON1 = 0x09;
				ADCON2 = 0x8D;
				ADCON0bits.GODONE =1;
				while((ADCON0 & 0x02)==1);
				
		         delayMs();
				ToSendDataBuffer[10] = ADRESL;
			    ToSendDataBuffer[9] = ADRESH;
			
	 			ADCON0= 0x11;
				ADCON1 = 0x09;
				ADCON2 = 0x8D;
				ADCON0bits.GODONE =1;
				while((ADCON0 & 0x02)==1);
				
		         delayMs();
				ToSendDataBuffer[12]= ADRESL;
			    ToSendDataBuffer[11]= ADRESH;
				
				ADCON0= 0x15;
				ADCON1 = 0x09;
				ADCON2 = 0x8D;
				ADCON0bits.GODONE =1;
				while((ADCON0 & 0x02)==1);
				
		         delayMs();
				ToSendDataBuffer[14]= ADRESL;
			    ToSendDataBuffer[13]= ADRESH;
				
				ToSendDataBuffer[15]= 0xFF;
				ToSendDataBuffer[16]= 0xFF;
				ToSendDataBuffer[0] = 0x84;
			
				// Transmit the response to the host
                if(!HIDTxHandleBusy(USBInHandle))
				{
					USBInHandle = HIDTxPacket(HID_EP,(BYTE*)&ToSendDataBuffer[0],64);
				}
                break;
		
         
        }
        // Re-arm the OUT endpoint for the next packet
        USBOutHandle = HIDRxPacket(HID_EP,(BYTE*)&ReceivedDataBuffer,64);
    }  
}

#endif
