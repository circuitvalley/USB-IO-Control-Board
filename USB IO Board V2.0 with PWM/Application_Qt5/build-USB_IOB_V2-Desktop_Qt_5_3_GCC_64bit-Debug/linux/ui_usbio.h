/********************************************************************************
** Form generated from reading UI file 'usbio.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USBIO_H
#define UI_USBIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_USBIOBoard
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label_13;
    QLabel *label_11;
    QCheckBox *checkBox_tris_6;
    QCheckBox *checkBox_state_3;
    QCheckBox *checkBox_tris_3;
    QCheckBox *checkBox_tris_7;
    QLabel *label_12;
    QCheckBox *checkBox_state_0;
    QCheckBox *checkBox_state_2;
    QLabel *label_9;
    QCheckBox *checkBox_tris_1;
    QCheckBox *checkBox_tris_2;
    QLabel *label_4;
    QCheckBox *checkBox_state_7;
    QCheckBox *checkBox_tris_4;
    QLabel *label_10;
    QCheckBox *checkBox_state_1;
    QLabel *label_7;
    QCheckBox *checkBox_tris_0;
    QCheckBox *checkBox_state_6;
    QCheckBox *checkBox_state_5;
    QLabel *label_5;
    QCheckBox *checkBox_state_4;
    QCheckBox *checkBox_tris_5;
    QLabel *label_6;
    QLabel *label_8;
    QGroupBox *groupBox_2;
    QLabel *label_16;
    QProgressBar *analogprogressBar_1;
    QLabel *label_15;
    QProgressBar *analogprogressBar_2;
    QProgressBar *analogprogressBar_3;
    QLabel *label_14;
    QLabel *label_analogv_1;
    QLabel *label_analogv_2;
    QLabel *label_analogv_3;
    QLineEdit *lineedit_analogref;
    QLabel *label_analogref;
    QLabel *label_19;
    QGroupBox *groupBox_3;
    QSpinBox *spinBox_pwm_freq;
    QSpinBox *spinBox_pwm_duty;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *USBIOBoard)
    {
        if (USBIOBoard->objectName().isEmpty())
            USBIOBoard->setObjectName(QStringLiteral("USBIOBoard"));
        USBIOBoard->resize(550, 315);
        USBIOBoard->setMinimumSize(QSize(550, 315));
        USBIOBoard->setMaximumSize(QSize(550, 315));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/board.ico"), QSize(), QIcon::Normal, QIcon::Off);
        USBIOBoard->setWindowIcon(icon);
        centralWidget = new QWidget(USBIOBoard);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 531, 91));
        QFont font;
        font.setFamily(QStringLiteral("Georgia"));
        groupBox->setFont(font);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(true);
        label_13->setGeometry(QRect(0, 40, 41, 16));
        QFont font1;
        font1.setPointSize(10);
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setEnabled(true);
        label_11->setGeometry(QRect(490, 20, 16, 21));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox_tris_6 = new QCheckBox(groupBox);
        checkBox_tris_6->setObjectName(QStringLiteral("checkBox_tris_6"));
        checkBox_tris_6->setGeometry(QRect(110, 40, 51, 17));
        checkBox_state_3 = new QCheckBox(groupBox);
        checkBox_state_3->setObjectName(QStringLiteral("checkBox_state_3"));
        checkBox_state_3->setGeometry(QRect(290, 60, 61, 20));
        checkBox_state_3->setFont(font1);
        checkBox_tris_3 = new QCheckBox(groupBox);
        checkBox_tris_3->setObjectName(QStringLiteral("checkBox_tris_3"));
        checkBox_tris_3->setGeometry(QRect(290, 40, 51, 17));
        checkBox_tris_7 = new QCheckBox(groupBox);
        checkBox_tris_7->setObjectName(QStringLiteral("checkBox_tris_7"));
        checkBox_tris_7->setGeometry(QRect(50, 40, 51, 17));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(10);
        checkBox_tris_7->setFont(font2);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(true);
        label_12->setGeometry(QRect(0, 60, 41, 16));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox_state_0 = new QCheckBox(groupBox);
        checkBox_state_0->setObjectName(QStringLiteral("checkBox_state_0"));
        checkBox_state_0->setGeometry(QRect(470, 60, 61, 20));
        checkBox_state_0->setFont(font1);
        checkBox_state_2 = new QCheckBox(groupBox);
        checkBox_state_2->setObjectName(QStringLiteral("checkBox_state_2"));
        checkBox_state_2->setGeometry(QRect(350, 60, 61, 20));
        checkBox_state_2->setFont(font1);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setEnabled(true);
        label_9->setGeometry(QRect(370, 20, 16, 21));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox_tris_1 = new QCheckBox(groupBox);
        checkBox_tris_1->setObjectName(QStringLiteral("checkBox_tris_1"));
        checkBox_tris_1->setGeometry(QRect(410, 40, 51, 17));
        checkBox_tris_2 = new QCheckBox(groupBox);
        checkBox_tris_2->setObjectName(QStringLiteral("checkBox_tris_2"));
        checkBox_tris_2->setGeometry(QRect(350, 40, 51, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(70, 20, 16, 21));
        label_4->setFont(font1);
        label_4->setMouseTracking(false);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox_state_7 = new QCheckBox(groupBox);
        checkBox_state_7->setObjectName(QStringLiteral("checkBox_state_7"));
        checkBox_state_7->setGeometry(QRect(50, 60, 61, 20));
        checkBox_state_7->setFont(font1);
        checkBox_tris_4 = new QCheckBox(groupBox);
        checkBox_tris_4->setObjectName(QStringLiteral("checkBox_tris_4"));
        checkBox_tris_4->setGeometry(QRect(230, 40, 51, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(true);
        label_10->setGeometry(QRect(430, 20, 16, 21));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox_state_1 = new QCheckBox(groupBox);
        checkBox_state_1->setObjectName(QStringLiteral("checkBox_state_1"));
        checkBox_state_1->setGeometry(QRect(410, 60, 61, 20));
        checkBox_state_1->setFont(font1);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(250, 20, 16, 21));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox_tris_0 = new QCheckBox(groupBox);
        checkBox_tris_0->setObjectName(QStringLiteral("checkBox_tris_0"));
        checkBox_tris_0->setGeometry(QRect(470, 40, 51, 17));
        checkBox_state_6 = new QCheckBox(groupBox);
        checkBox_state_6->setObjectName(QStringLiteral("checkBox_state_6"));
        checkBox_state_6->setGeometry(QRect(110, 60, 61, 20));
        checkBox_state_6->setFont(font1);
        checkBox_state_5 = new QCheckBox(groupBox);
        checkBox_state_5->setObjectName(QStringLiteral("checkBox_state_5"));
        checkBox_state_5->setGeometry(QRect(170, 60, 61, 20));
        checkBox_state_5->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(130, 20, 16, 21));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox_state_4 = new QCheckBox(groupBox);
        checkBox_state_4->setObjectName(QStringLiteral("checkBox_state_4"));
        checkBox_state_4->setGeometry(QRect(230, 60, 61, 20));
        checkBox_state_4->setFont(font1);
        checkBox_tris_5 = new QCheckBox(groupBox);
        checkBox_tris_5->setObjectName(QStringLiteral("checkBox_tris_5"));
        checkBox_tris_5->setGeometry(QRect(170, 40, 51, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(true);
        label_6->setGeometry(QRect(190, 20, 16, 21));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(true);
        label_8->setGeometry(QRect(310, 20, 16, 21));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 110, 331, 171));
        groupBox_2->setFont(font);
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setEnabled(true);
        label_16->setGeometry(QRect(10, 110, 71, 21));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        analogprogressBar_1 = new QProgressBar(groupBox_2);
        analogprogressBar_1->setObjectName(QStringLiteral("analogprogressBar_1"));
        analogprogressBar_1->setEnabled(false);
        analogprogressBar_1->setGeometry(QRect(90, 30, 181, 21));
        analogprogressBar_1->setMaximum(1024);
        analogprogressBar_1->setValue(0);
        analogprogressBar_1->setTextVisible(false);
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setEnabled(true);
        label_15->setGeometry(QRect(10, 70, 71, 21));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        analogprogressBar_2 = new QProgressBar(groupBox_2);
        analogprogressBar_2->setObjectName(QStringLiteral("analogprogressBar_2"));
        analogprogressBar_2->setEnabled(false);
        analogprogressBar_2->setGeometry(QRect(90, 70, 181, 21));
        analogprogressBar_2->setMaximum(1024);
        analogprogressBar_2->setValue(0);
        analogprogressBar_2->setTextVisible(false);
        analogprogressBar_3 = new QProgressBar(groupBox_2);
        analogprogressBar_3->setObjectName(QStringLiteral("analogprogressBar_3"));
        analogprogressBar_3->setEnabled(false);
        analogprogressBar_3->setGeometry(QRect(90, 110, 181, 21));
        analogprogressBar_3->setMaximum(1024);
        analogprogressBar_3->setValue(0);
        analogprogressBar_3->setTextVisible(false);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setEnabled(true);
        label_14->setGeometry(QRect(10, 30, 71, 21));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_analogv_1 = new QLabel(groupBox_2);
        label_analogv_1->setObjectName(QStringLiteral("label_analogv_1"));
        label_analogv_1->setGeometry(QRect(280, 30, 46, 13));
        QFont font3;
        font3.setPointSize(11);
        label_analogv_1->setFont(font3);
        label_analogv_2 = new QLabel(groupBox_2);
        label_analogv_2->setObjectName(QStringLiteral("label_analogv_2"));
        label_analogv_2->setGeometry(QRect(280, 70, 46, 13));
        label_analogv_2->setFont(font3);
        label_analogv_3 = new QLabel(groupBox_2);
        label_analogv_3->setObjectName(QStringLiteral("label_analogv_3"));
        label_analogv_3->setGeometry(QRect(280, 110, 46, 13));
        label_analogv_3->setFont(font3);
        lineedit_analogref = new QLineEdit(groupBox_2);
        lineedit_analogref->setObjectName(QStringLiteral("lineedit_analogref"));
        lineedit_analogref->setGeometry(QRect(280, 140, 41, 20));
        lineedit_analogref->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);
        lineedit_analogref->setMaxLength(4);
        label_analogref = new QLabel(groupBox_2);
        label_analogref->setObjectName(QStringLiteral("label_analogref"));
        label_analogref->setEnabled(true);
        label_analogref->setGeometry(QRect(210, 140, 61, 21));
        label_analogref->setFont(font1);
        label_analogref->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setEnabled(true);
        label_19->setGeometry(QRect(10, 140, 141, 21));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(410, 110, 131, 171));
        QFont font4;
        font4.setFamily(QStringLiteral("Georgia"));
        font4.setPointSize(10);
        groupBox_3->setFont(font4);
        spinBox_pwm_freq = new QSpinBox(groupBox_3);
        spinBox_pwm_freq->setObjectName(QStringLiteral("spinBox_pwm_freq"));
        spinBox_pwm_freq->setGeometry(QRect(10, 50, 71, 22));
        spinBox_pwm_freq->setMinimum(3000);
        spinBox_pwm_freq->setMaximum(200000);
        spinBox_pwm_freq->setValue(3000);
        spinBox_pwm_duty = new QSpinBox(groupBox_3);
        spinBox_pwm_duty->setObjectName(QStringLiteral("spinBox_pwm_duty"));
        spinBox_pwm_duty->setGeometry(QRect(10, 110, 51, 22));
        spinBox_pwm_duty->setMaximum(100);
        spinBox_pwm_duty->setValue(50);
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setEnabled(true);
        label_17->setGeometry(QRect(10, 20, 61, 21));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setEnabled(true);
        label_18->setGeometry(QRect(10, 80, 91, 21));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 20, 20));
        label->setFont(font1);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 21, 16));
        label_2->setFont(font1);
        USBIOBoard->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(USBIOBoard);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 550, 25));
        USBIOBoard->setMenuBar(menuBar);
        statusBar = new QStatusBar(USBIOBoard);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        USBIOBoard->setStatusBar(statusBar);

        retranslateUi(USBIOBoard);

        QMetaObject::connectSlotsByName(USBIOBoard);
    } // setupUi

    void retranslateUi(QMainWindow *USBIOBoard)
    {
        USBIOBoard->setWindowTitle(QApplication::translate("USBIOBoard", "USB I/O Board V2 : Device Not Found", 0));
        groupBox->setTitle(QApplication::translate("USBIOBoard", "Digital Input/Output", 0));
        label_13->setText(QApplication::translate("USBIOBoard", "Mode", 0));
        label_11->setText(QApplication::translate("USBIOBoard", "D0", 0));
        checkBox_tris_6->setText(QApplication::translate("USBIOBoard", "Out", 0));
        checkBox_state_3->setText(QApplication::translate("USBIOBoard", "High", 0));
        checkBox_tris_3->setText(QApplication::translate("USBIOBoard", "In", 0));
        checkBox_tris_7->setText(QApplication::translate("USBIOBoard", "Out", 0));
        label_12->setText(QApplication::translate("USBIOBoard", "State", 0));
        checkBox_state_0->setText(QApplication::translate("USBIOBoard", "High", 0));
        checkBox_state_2->setText(QApplication::translate("USBIOBoard", "High", 0));
        label_9->setText(QApplication::translate("USBIOBoard", "D2", 0));
        checkBox_tris_1->setText(QApplication::translate("USBIOBoard", "In", 0));
        checkBox_tris_2->setText(QApplication::translate("USBIOBoard", "In", 0));
        label_4->setText(QApplication::translate("USBIOBoard", "D7", 0));
        checkBox_state_7->setText(QApplication::translate("USBIOBoard", "High", 0));
        checkBox_tris_4->setText(QApplication::translate("USBIOBoard", "Out", 0));
        label_10->setText(QApplication::translate("USBIOBoard", "D1", 0));
        checkBox_state_1->setText(QApplication::translate("USBIOBoard", "High", 0));
        label_7->setText(QApplication::translate("USBIOBoard", "D4", 0));
        checkBox_tris_0->setText(QApplication::translate("USBIOBoard", "In", 0));
        checkBox_state_6->setText(QApplication::translate("USBIOBoard", "High", 0));
        checkBox_state_5->setText(QApplication::translate("USBIOBoard", "High", 0));
        label_5->setText(QApplication::translate("USBIOBoard", "D6", 0));
        checkBox_state_4->setText(QApplication::translate("USBIOBoard", "High", 0));
        checkBox_tris_5->setText(QApplication::translate("USBIOBoard", "Out", 0));
        label_6->setText(QApplication::translate("USBIOBoard", "D5", 0));
        label_8->setText(QApplication::translate("USBIOBoard", "D3", 0));
        groupBox_2->setTitle(QApplication::translate("USBIOBoard", "Analog Inputs", 0));
        label_16->setText(QApplication::translate("USBIOBoard", "Analog In 3", 0));
        label_15->setText(QApplication::translate("USBIOBoard", "Analog In 2", 0));
        label_14->setText(QApplication::translate("USBIOBoard", "Analog In 1", 0));
#ifndef QT_NO_TOOLTIP
        label_analogv_1->setToolTip(QApplication::translate("USBIOBoard", "<html><head/><body><p>Analog Input value.</p><p>Readout = (Vref/1023)*(10bit adc result).</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_analogv_1->setText(QApplication::translate("USBIOBoard", "0.00V", 0));
#ifndef QT_NO_TOOLTIP
        label_analogv_2->setToolTip(QApplication::translate("USBIOBoard", "<html><head/><body><p>Analog Input value.</p><p>Readout = (Vref/1023)*(10bit adc result).</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_analogv_2->setText(QApplication::translate("USBIOBoard", "0.00V", 0));
#ifndef QT_NO_TOOLTIP
        label_analogv_3->setToolTip(QApplication::translate("USBIOBoard", "<html><head/><body><p>Analog Input value.</p><p>Readout = (Vref/1023)*(10bit adc result).</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_analogv_3->setText(QApplication::translate("USBIOBoard", "0.00V", 0));
#ifndef QT_NO_TOOLTIP
        lineedit_analogref->setToolTip(QApplication::translate("USBIOBoard", "<html><head/><body><p>Input adc reference voltage here.</p><p>Reference voltage is by default set to 5000mV (USB bus voltage) but as USB bus voltage may change. you may need to adjust this for better accuracy.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        lineedit_analogref->setInputMask(QApplication::translate("USBIOBoard", "9999", 0));
        lineedit_analogref->setText(QApplication::translate("USBIOBoard", "5000", 0));
        label_analogref->setText(QApplication::translate("USBIOBoard", "VRef(mV)", 0));
        label_19->setText(QApplication::translate("USBIOBoard", "www.CircuitValley.com", 0));
        groupBox_3->setTitle(QApplication::translate("USBIOBoard", "PWM Output", 0));
#ifndef QT_NO_TOOLTIP
        spinBox_pwm_freq->setToolTip(QApplication::translate("USBIOBoard", "<html><head/><body><p>Input PWM output Frequency here.</p><p>3000 Hz is the minimum and 200,000 Hz is the maximum supported.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spinBox_pwm_duty->setToolTip(QApplication::translate("USBIOBoard", "<html><head/><body><p>Input PWM Duty Cycle Value Here.</p><p>0 is minimum and 100 is maximum value.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_17->setText(QApplication::translate("USBIOBoard", "Frequency", 0));
        label_18->setText(QApplication::translate("USBIOBoard", "Duty Cycle       ", 0));
        label->setText(QApplication::translate("USBIOBoard", "Hz", 0));
        label_2->setText(QApplication::translate("USBIOBoard", "%", 0));
    } // retranslateUi

};

namespace Ui {
    class USBIOBoard: public Ui_USBIOBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USBIO_H
