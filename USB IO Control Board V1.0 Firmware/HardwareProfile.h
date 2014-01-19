#ifndef HARDWARE_PROFILE_H
#define HARDWARE_PROFILE_H

	// Defines required for the USB stack
    #define self_power          1
    #define USE_USB_BUS_SENSE_IO
	#define USB_BUS_SENSE       1
    #define DEMO_BOARD PICDEM_FS_USB
    #define PICDEM_FS_USB
    #define CLOCK_FREQ 48000000

	// Fosc frequency (48 Mhz)
	#define _XTAL_FREQ 48000000
	
	// Common useful definitions
	#define ON		1
	#define OFF		0
	#define	WRITE	0
	#define READ	1

	// PIC to hardware pin mapping
	

    // I/O pin definitions
    #define INPUT_PIN 1
    #define OUTPUT_PIN 0

#endif
