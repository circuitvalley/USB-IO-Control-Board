#include "usbioboard.h"
#include "ui_usbio.h"

USBIOBoard::USBIOBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::USBIOBoard)
{
    ui->setupUi(this);

    plugNPlay = new HID_PnP();
    connect(ui->checkBox_tris_0, SIGNAL(stateChanged(int)),this,SLOT(update_io( )));
    connect(ui->checkBox_tris_1, SIGNAL(stateChanged(int)),this,SLOT(update_io( )));
    connect(ui->checkBox_tris_2, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_tris_3, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_tris_4, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_tris_5, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_tris_6, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_tris_7, SIGNAL(stateChanged(int)),this,SLOT(update_io()));

    connect(ui->checkBox_state_0, SIGNAL(stateChanged(int)),this,SLOT(update_io( )));
    connect(ui->checkBox_state_1, SIGNAL(stateChanged(int)),this,SLOT(update_io( )));
    connect(ui->checkBox_state_2, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_state_3, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_state_4, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_state_5, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_state_6, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->checkBox_state_7, SIGNAL(stateChanged(int)),this,SLOT(update_io()));
    connect(ui->spinBox_pwm_duty,SIGNAL(valueChanged(int)),this,SLOT(update_pwm()));
    connect(ui->spinBox_pwm_freq,SIGNAL(valueChanged(int)),this,SLOT(update_pwm()));

    connect(this, SIGNAL(signal_update_tris(unsigned char)), plugNPlay, SLOT(toggle_tris(unsigned char)));
    connect(this, SIGNAL(signal_update_io(unsigned char)), plugNPlay, SLOT(toggle_io(unsigned char)));
    connect(this, SIGNAL(singal_update_pwm(unsigned char,long)), plugNPlay, SLOT(change_pwm(unsigned char,long)));


    connect(plugNPlay, SIGNAL(hid_comm_update(bool, UI_Data)), this, SLOT(update_gui(bool, UI_Data)));
}

USBIOBoard::~USBIOBoard()
{
 //   disconnect(this, SIGNAL(tris_box_state_changed()),plugNPlay,SLOT(toggle_io()));

    disconnect(plugNPlay, SIGNAL(hid_comm_update(bool,UI_Data)), this, SLOT(update_gui(bool, UI_Data)));
    delete ui;
    delete plugNPlay;
}


void USBIOBoard::update_pwm()
{

    emit singal_update_pwm(ui->spinBox_pwm_duty->value(),ui->spinBox_pwm_freq->value());
 }


void USBIOBoard::update_io()
{
    emit signal_update_tris((ui->checkBox_tris_7->isChecked()<<7)|(ui->checkBox_tris_6->isChecked()<<6)|(ui->checkBox_tris_5->isChecked()<<5)|(ui->checkBox_tris_4->isChecked()<<4)|(ui->checkBox_tris_3->isChecked()<<3)|(ui->checkBox_tris_2->isChecked()<<2)|(ui->checkBox_tris_1->isChecked()<<1)|(ui->checkBox_tris_0->isChecked()));

    emit signal_update_io((ui->checkBox_state_7->isChecked()<<7)|(ui->checkBox_state_6->isChecked()<<6)|(ui->checkBox_state_5->isChecked()<<5)|(ui->checkBox_state_4->isChecked()<<4)|(ui->checkBox_state_3->isChecked()<<3)|(ui->checkBox_state_2->isChecked()<<2)|(ui->checkBox_state_1->isChecked()<<1)|(ui->checkBox_state_0->isChecked()));
}

void USBIOBoard::update_gui(bool isConnected, UI_Data ui_data)
{
    if(isConnected)
    {
          ui->analogprogressBar_1->setEnabled(true);
          ui->analogprogressBar_2->setEnabled(true);
          ui->analogprogressBar_3->setEnabled(true);
          ui->checkBox_state_0->setEnabled(true);
          ui->checkBox_state_1->setEnabled(true);
          ui->checkBox_state_2->setEnabled(true);
          ui->checkBox_state_3->setEnabled(true);
          ui->checkBox_state_4->setEnabled(true);
          ui->checkBox_state_5->setEnabled(true);
          ui->checkBox_state_6->setEnabled(true);
          ui->checkBox_state_7->setEnabled(true);

          ui->checkBox_tris_0->setEnabled(true);
          ui->checkBox_tris_1->setEnabled(true);
          ui->checkBox_tris_2->setEnabled(true);
          ui->checkBox_tris_3->setEnabled(true);
          ui->checkBox_tris_4->setEnabled(true);
          ui->checkBox_tris_5->setEnabled(true);
          ui->checkBox_tris_6->setEnabled(true);
          ui->checkBox_tris_7->setEnabled(true);

          ui->spinBox_pwm_duty->setEnabled(true);
          ui->spinBox_pwm_freq->setEnabled(true);
          ui->lineedit_analogref->setEnabled(true);



     this->setWindowTitle("USB I/O Board V2 : Device Found");

        if(!ui->checkBox_tris_0->isChecked())
        {
          if(ui_data.ioState&0x01)
          {  ui->checkBox_state_0->setText("High");
             ui->checkBox_state_0->setCheckState(Qt::Checked);


          }else
          {  ui->checkBox_state_0->setText("Low");
             ui->checkBox_state_0->setCheckState(Qt::Unchecked);

          }

          ui->checkBox_tris_0->setText("In");
        }else{
          if(ui_data.ioState&0x01)
          {

           ui->checkBox_state_0->setText("High");
          }else
          {
              ui->checkBox_state_0->setText("Low");
          }

          ui->checkBox_tris_0->setText("Out");
      }


        if(!ui->checkBox_tris_1->isChecked())
        {
            if(ui_data.ioState&0x02)
            {

             ui->checkBox_state_1->setCheckState(Qt::Checked);
             ui->checkBox_state_1->setText("High");
            }else
            {
                ui->checkBox_state_1->setCheckState(Qt::Unchecked);
                ui->checkBox_state_1->setText("Low");
            }

            ui->checkBox_tris_1->setText("In");
        }else{

            if(ui_data.ioState&0x02)
            {

             ui->checkBox_state_1->setText("High");
            }else
            {
                ui->checkBox_state_1->setText("Low");
            }

            ui->checkBox_tris_1->setText("Out");
        }


        if(!ui->checkBox_tris_2->isChecked())
        {
            if(ui_data.ioState&0x04)
            {

                ui->checkBox_state_2->setCheckState(Qt::Checked);
                ui->checkBox_state_2->setText("High");
            }else
            {
                ui->checkBox_state_2->setCheckState(Qt::Unchecked);
                ui->checkBox_state_2->setText("Low");
            }

            ui->checkBox_tris_2->setText("In");
        }else{

            if(ui_data.ioState&0x04)
            {

             ui->checkBox_state_2->setText("High");
            }else
            {
                ui->checkBox_state_2->setText("Low");
            }

            ui->checkBox_tris_2->setText("Out");
        }



        if(!ui->checkBox_tris_3->isChecked())
        {
            if(ui_data.ioState&0x08)
            {

                ui->checkBox_state_3->setCheckState(Qt::Checked);
                ui->checkBox_state_3->setText("High");
            }else
            {
                ui->checkBox_state_3->setCheckState(Qt::Unchecked);
                ui->checkBox_state_3->setText("Low");
            }

            ui->checkBox_tris_3->setText("In");
        }else{

            if(ui_data.ioState&0x08)
            {

             ui->checkBox_state_3->setText("High");
            }else
            {
                ui->checkBox_state_3->setText("Low");
            }

            ui->checkBox_tris_3->setText("Out");
        }


        if(!ui->checkBox_tris_4->isChecked())
        {
            if(ui_data.ioState&0x10)
            {

                ui->checkBox_state_4->setCheckState(Qt::Checked);
                ui->checkBox_state_4->setText("High");
            }else
            {
                ui->checkBox_state_4->setCheckState(Qt::Unchecked);
                ui->checkBox_state_4->setText("Low");
            }

            ui->checkBox_tris_4->setText("In");
        }else{

            if(ui_data.ioState&0x10)
            {

             ui->checkBox_state_4->setText("High");
            }else
            {
                ui->checkBox_state_4->setText("Low");
            }

            ui->checkBox_tris_4->setText("Out");
        }



        if(!ui->checkBox_tris_5->isChecked())
        {
        if(ui_data.ioState&0x20)
            {

                ui->checkBox_state_5->setCheckState(Qt::Checked);
                ui->checkBox_state_5->setText("High");
            }else
            {
                ui->checkBox_state_5->setCheckState(Qt::Unchecked);
                ui->checkBox_state_5->setText("Low");
            }

        ui->checkBox_tris_5->setText("In");
        }else{

        if(ui_data.ioState&0x20)
        {

         ui->checkBox_state_5->setText("High");
        }else
        {
            ui->checkBox_state_5->setText("Low");
        }

        ui->checkBox_tris_5->setText("Out");
    }


        if(!ui->checkBox_tris_6->isChecked())
        {
            if(ui_data.ioState&0x40)
            {
                ui->checkBox_state_6->setText("High");
                ui->checkBox_state_6->setCheckState(Qt::Checked);

            }else
            {
                ui->checkBox_state_6->setCheckState(Qt::Unchecked);
                ui->checkBox_state_6->setText("Low");
            }
                      ui->checkBox_tris_6->setText("In");
        }else{
            if(ui_data.ioState&0x40)
            {

             ui->checkBox_state_6->setText("High");
            }else
            {
                ui->checkBox_state_6->setText("Low");
            }
            ui->checkBox_tris_6->setText("Out");
        }


        if(!ui->checkBox_tris_7->isChecked())
        {
            if(ui_data.ioState&0x80)
            {

                ui->checkBox_state_7->setCheckState(Qt::Checked);
                ui->checkBox_state_7->setText("High");
            }else
            {
                ui->checkBox_state_7->setCheckState(Qt::Unchecked);
                ui->checkBox_state_7->setText("Low");
            }
            ui->checkBox_tris_7->setText("In");
        }else{

            if(ui_data.ioState&0x80)
            {ui->checkBox_state_7->setText("High");}
            else
            {ui->checkBox_state_7->setText("Low");}

             ui->checkBox_tris_7->setText("Out");
        }



        float ref=ui->lineedit_analogref->text().toFloat()/1023000;
        ui->analogprogressBar_1->setValue(ui_data.potentiometerValue_1);
        ui->label_analogv_1->setText(QString("%1").sprintf("%1.2fV",ref*ui_data.potentiometerValue_1));

        ui->analogprogressBar_2->setValue(ui_data.potentiometerValue_2);
        ui->label_analogv_2->setText(QString("%1").sprintf("%1.2fV",ref*ui_data.potentiometerValue_2));

        ui->analogprogressBar_3->setValue(ui_data.potentiometerValue_3);
        ui->label_analogv_3->setText(QString("%1").sprintf("%1.2fV",ref*ui_data.potentiometerValue_3));

    }
    else
    {

         ui->analogprogressBar_1->setEnabled(false);
        ui->analogprogressBar_2->setEnabled(false);
        ui->analogprogressBar_3->setEnabled(false);

        ui->checkBox_state_0->setEnabled(false);
        ui->checkBox_state_1->setEnabled(false);
        ui->checkBox_state_2->setEnabled(false);
        ui->checkBox_state_3->setEnabled(false);
        ui->checkBox_state_4->setEnabled(false);
        ui->checkBox_state_5->setEnabled(false);
        ui->checkBox_state_6->setEnabled(false);
        ui->checkBox_state_7->setEnabled(false);

        ui->checkBox_tris_0->setEnabled(false);
        ui->checkBox_tris_1->setEnabled(false);
        ui->checkBox_tris_2->setEnabled(false);
        ui->checkBox_tris_3->setEnabled(false);
        ui->checkBox_tris_4->setEnabled(false);
        ui->checkBox_tris_5->setEnabled(false);
        ui->checkBox_tris_6->setEnabled(false);
        ui->checkBox_tris_7->setEnabled(false);

        ui->spinBox_pwm_duty->setEnabled(false);
        ui->spinBox_pwm_freq->setEnabled(false);
        ui->lineedit_analogref->setEnabled(false);


        this->setWindowTitle("USB I/O Board V2 : Device Not Found");
    //    ui->label_device_connected->setText("Device Not Detected");
        ui->analogprogressBar_1->setValue(0);
        ui->analogprogressBar_2->setValue(0);
        ui->analogprogressBar_3->setValue(0);
    }
}
