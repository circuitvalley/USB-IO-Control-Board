#ifndef USBIOBOARD_H
#define USBIOBOARD_H

#include <QMainWindow>
#include "hid_pnp.h"

namespace Ui {
    class USBIOBoard;
}

class USBIOBoard : public QMainWindow
{
    Q_OBJECT

public:
    explicit USBIOBoard(QWidget *parent = 0);
    ~USBIOBoard();

private:
    Ui::USBIOBoard *ui;
    HID_PnP *plugNPlay;
signals:
   void signal_update_tris(unsigned char tris);
   void signal_update_io(unsigned char tris);
   void singal_update_pwm(unsigned char duty,long frequency);

public slots:
    void update_gui(bool isConnected, UI_Data ui_data);
     void update_io();
     void update_pwm();
};

#endif // USBIOBOARD_H
