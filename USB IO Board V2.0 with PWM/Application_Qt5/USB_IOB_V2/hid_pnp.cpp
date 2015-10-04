#include "hid_pnp.h"

HID_PnP::HID_PnP(QObject *parent) : QObject(parent) {
    ui_data.isConnected = false;
    ui_data.ioState = 0;
    ui_data.potentiometerValue_1 = 0;
    ui_data.ioUpdatePending = 0;

    device = NULL;
    buf[0] = 0x00;
    buf[1] = 0x37;
    memset((void*)&buf[2], 0x00, sizeof(buf) - 2);
    
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(PollUSB()));

    timer->start(250);
}

HID_PnP::~HID_PnP() {
    disconnect(timer, SIGNAL(timeout()), this, SLOT(PollUSB()));
}

void HID_PnP::PollUSB()
{
    buf[0] = 0x00;
    memset((void*)&buf[2], 0x00, sizeof(buf) - 2);

    if (ui_data.isConnected == false) {
        device = hid_open(0x04d8, 0x003f, NULL);

        if (device) {
            ui_data.isConnected = true;
            hid_set_nonblocking(device, true);
            timer->start(15);
        }
    }
    else {
        if(ui_data.ioUpdatePending == true) {
            ui_data.ioUpdatePending = false;

            buf[1] = 0x80;
            buf[2]=ui_data.ioState;
            if (hid_write(device, buf, sizeof(buf)) == -1)
            {
                CloseDevice();
                return;
            }

            buf[0] = 0x00;
            buf[1] = 0x37;
            memset((void*)&buf[2], 0x00, sizeof(buf) - 2);
        }
        if(ui_data.trisUpdatePending==true){
            ui_data.trisUpdatePending = false;

            buf[1]=0x82;
            buf[2]=ui_data.trisState;
            if (hid_write(device, buf, sizeof(buf)) == -1)
            {
                CloseDevice();
                return;
            }
            buf[0] = 0x00;
            buf[1] = 0x37;
            memset((void*)&buf[2], 0x00, sizeof(buf) - 2);
        }
        if(ui_data.pwdUpdatePending==true)
        {
            ui_data.pwdUpdatePending = false;

            buf[1]=0x83;
            buf[2]=ui_data.pwmDuty;

            buf[3]=(ui_data.pwmFrequeny>>24)&0xFF;
            buf[4]=(ui_data.pwmFrequeny>>16)&0xFF;
            buf[5]=(ui_data.pwmFrequeny>>8)&0xFF;
            buf[6]=ui_data.pwmFrequeny&0xFF;

            if (hid_write(device, buf, sizeof(buf)) == -1)
            {
                CloseDevice();
                return;
            }
            buf[0] = 0x00;
            buf[1] = 0x37;
            memset((void*)&buf[2], 0x00, sizeof(buf) - 2);
        }

        if (hid_write(device, buf, sizeof(buf)) == -1)
        {
            CloseDevice();
            return;
        }
        if(hid_read(device, buf, sizeof(buf)) == -1)
        {
            CloseDevice();
            return;
        }

        if(buf[0] == 0x37) {
            ui_data.potentiometerValue_1 = (buf[2]<<8) + buf[1];
            ui_data.potentiometerValue_2 = (buf[4]<<8) + buf[3];
            ui_data.potentiometerValue_3 = (buf[6]<<8) + buf[5];
            buf[1] = 0x81;
        }else if(buf[0] == 0x81) {
            ui_data.ioState = buf[1];
            buf[1] = 0x37;
        }
    }

    hid_comm_update(ui_data.isConnected, ui_data);
}

void HID_PnP::toggle_io(unsigned char ioState) {
    ui_data.ioState= ioState;
    ui_data.ioUpdatePending = true;

}
void HID_PnP::change_pwm(unsigned char duty,long frequency) {
    ui_data.pwmDuty= duty;
    ui_data.pwmFrequeny=frequency;

    ui_data.pwdUpdatePending= true;

}
void HID_PnP::toggle_tris(unsigned char trisState) {
    ui_data.trisState = ~trisState;
    ui_data.trisUpdatePending = true;

}
void HID_PnP::CloseDevice() {
    hid_close(device);
    device = NULL;
    ui_data.isConnected = false;
    ui_data.ioState = 0;
    ui_data.potentiometerValue_1 = 0;
    ui_data.ioUpdatePending = 0;
    hid_comm_update(ui_data.isConnected, ui_data);
    timer->start(250);
}
