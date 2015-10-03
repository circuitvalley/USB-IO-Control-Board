/********************************************************************
 FileName:     main.c
 Dependencies:   See INCLUDES section
 Processor:		PIC18, PIC24, and PIC32 USB Microcontrollers
 Hardware:		www.circuitvalley.com USB IO board V2
 Complier:  	Microchip C18 (for PIC18)
 Company:		www.circuitvalley.com

 Software License Agreement:
 THIS SOFTWARE IS PROVIDED IN AN “AS IS” CONDITION. NO WARRANTIES,
 WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED
 TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT,
 IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
*/

#ifndef _HW_PROFILE_H_
#define _HW_PROFILE_H_

    /*******************************************************************/
    /******** USB stack hardware selection options *********************/
    /*******************************************************************/
    //This section is the set of definitions required by the MCHPFSUSB
    //  framework.  These definitions tell the firmware what mode it is
    //  running in, and where it can find the results to some information
    //  that the stack needs.
    //These definitions are required by every application developed with
    //  this revision of the MCHPFSUSB framework.  Please review each
    //  option carefully and determine which options are desired/required
    //  for your application.

    //#define USE_SELF_POWER_SENSE_IO	
    #define tris_self_power     TRISAbits.TRISA2    // Input
    #if defined(USE_SELF_POWER_SENSE_IO)
    #define self_power          PORTAbits.RA2
    #else
    #define self_power          1
    #endif

    //#define USE_USB_BUS_SENSE_IO
    #define tris_usb_bus_sense  TRISAbits.TRISA1    // Input
    #if defined(USE_USB_BUS_SENSE_IO)
    #define USB_BUS_SENSE       PORTAbits.RA1
    #else
    #define USB_BUS_SENSE       1
    #endif


    //Uncomment the following line to make the output HEX of this 
    //  project work with the HID Bootloader
    #define PROGRAMMABLE_WITH_USB_HID_BOOTLOADER	

    /** Board definition ***********************************************/
    //These defintions will tell the main() function which board is
    //  currently selected.  This will allow the application to add
    //  the correct configuration bits as wells use the correct
    //  initialization functions for the board.  These defitions are only
    //  required in the stack provided demos.  They are not required in
    //  final application design.
    
    #define CLOCK_FREQ 48000000
    
    /** LED ************************************************************/
    #define mInitAllIO()      LATC = 0x00; TRISC = 0xDF; LATB &=0x00; TRISB = 0xFF;	//TRISC5 for PWM
    
  

	#define DIO0	PORTCbits.RC4
	#define DIO1	PORTBbits.RB7
	#define DIO2	PORTBbits.RB6
	#define DIO3	PORTBbits.RB5
	#define DIO4	PORTBbits.RB4
	#define DIO5	PORTCbits.RC2
	#define DIO6	PORTCbits.RC1
	#define DIO7	PORTCbits.RC0

	#define DIO0_LAT	LATCbits.LATC4
	#define DIO1_LAT	LATBbits.LATB7
	#define DIO2_LAT	LATBbits.LATB6
	#define DIO3_LAT	LATBbits.LATB5
	#define DIO4_LAT	LATBbits.LATB4
	#define DIO5_LAT	LATCbits.LATC2
	#define DIO6_LAT	LATCbits.LATC1
	#define DIO7_LAT	LATCbits.LATC0


	#define DIO0_TRIS	TRISCbits.TRISC4
	#define DIO1_TRIS	TRISBbits.TRISB7
	#define DIO2_TRIS	TRISBbits.TRISB6
	#define DIO3_TRIS	TRISBbits.TRISB5
	#define DIO4_TRIS	TRISBbits.TRISB4
	#define DIO5_TRIS	TRISCbits.TRISC2
	#define DIO6_TRIS	TRISCbits.TRISC1
	#define DIO7_TRIS	TRISCbits.TRISC0
    #define ANALOG1_TRIS TRISCbits.TRISC3
    #define ANALOG2_TRIS TRISCbits.TRISC6
    #define ANALOG3_TRIS TRISCbits.TRISC7

    /** I/O pin definitions ********************************************/
    #define INPUT_PIN 1
    #define OUTPUT_PIN 0

#endif  //HARDWARE_PROFILE_LOW_PIN_COUNT_USB_DEVELOPMENT_KIT_H
