#ifndef HID_PNP_H
#define HID_PNP_H

#include <QObject>
#include <QTimer>
#include "../HIDAPI/hidapi.h"

#include <wchar.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 65
class UI_Data
{
    public:
    bool isConnected;
    unsigned char ioState;

    unsigned char trisState;
    unsigned pwdUpdatePending;
    unsigned char pwmDuty;
    long pwmFrequeny;
    bool ioUpdatePending;
    bool trisUpdatePending;
    int potentiometerValue_1;
    int potentiometerValue_2;
    int potentiometerValue_3;
};

class HID_PnP : public QObject
{
    Q_OBJECT
public:
    explicit HID_PnP(QObject *parent = 0);
    ~HID_PnP();

signals:
    void hid_comm_update(bool isConnected, UI_Data ui_data);

public slots:
    void toggle_io(unsigned char ioState);
    void PollUSB();
    void toggle_tris(unsigned char trisState);
    void change_pwm(unsigned char duty,long frequency);


private:

    UI_Data ui_data;

    hid_device *device;
    QTimer *timer;
    unsigned char buf[MAX_STR];

    void CloseDevice();
};

#endif // HID_PNP_H
