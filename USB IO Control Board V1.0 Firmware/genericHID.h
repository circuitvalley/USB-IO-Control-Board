// genericHID.h

#ifndef GENERICHID_H
#define GENERICHID_H

unsigned char ReceivedDataBuffer[64] @ 0x480;
unsigned char ToSendDataBuffer[64]	@ 0x4C0;

USB_HANDLE USBOutHandle = 0;
USB_HANDLE USBInHandle = 0;
BOOL blinkStatusValid = TRUE;

#endif