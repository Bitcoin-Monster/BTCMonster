/********************************************************************************
** Form generated from reading UI file 'darksendconfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DARKSENDCONFIG_H
#define UI_DARKSENDCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DarksendConfig
{
public:
    QPushButton *buttonBasic;
    QPushButton *buttonHigh;
    QPushButton *buttonMax;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *DarksendConfig)
    {
        if (DarksendConfig->objectName().isEmpty())
            DarksendConfig->setObjectName(QString::fromUtf8("DarksendConfig"));
        DarksendConfig->resize(630, 307);
        buttonBasic = new QPushButton(DarksendConfig);
        buttonBasic->setObjectName(QString::fromUtf8("buttonBasic"));
        buttonBasic->setGeometry(QRect(20, 70, 151, 27));
        buttonHigh = new QPushButton(DarksendConfig);
        buttonHigh->setObjectName(QString::fromUtf8("buttonHigh"));
        buttonHigh->setGeometry(QRect(20, 140, 151, 27));
        buttonMax = new QPushButton(DarksendConfig);
        buttonMax->setObjectName(QString::fromUtf8("buttonMax"));
        buttonMax->setGeometry(QRect(20, 210, 151, 27));
        label = new QLabel(DarksendConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 571, 31));
        label_2 = new QLabel(DarksendConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 70, 421, 21));
        label_3 = new QLabel(DarksendConfig);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 140, 411, 21));
        label_4 = new QLabel(DarksendConfig);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 210, 421, 21));
        label_6 = new QLabel(DarksendConfig);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 100, 561, 21));
        label_7 = new QLabel(DarksendConfig);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 170, 561, 21));
        label_8 = new QLabel(DarksendConfig);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 240, 561, 21));
        label_9 = new QLabel(DarksendConfig);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 260, 561, 21));
        line = new QFrame(DarksendConfig);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 120, 601, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(DarksendConfig);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 190, 601, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(DarksendConfig);

        QMetaObject::connectSlotsByName(DarksendConfig);
    } // setupUi

    void retranslateUi(QDialog *DarksendConfig)
    {
        DarksendConfig->setWindowTitle(QApplication::translate("DarksendConfig", "Configure PrivateSend", 0, QApplication::UnicodeUTF8));
        buttonBasic->setText(QApplication::translate("DarksendConfig", "Basic Privacy", 0, QApplication::UnicodeUTF8));
        buttonHigh->setText(QApplication::translate("DarksendConfig", "High Privacy", 0, QApplication::UnicodeUTF8));
        buttonMax->setText(QApplication::translate("DarksendConfig", "Maximum Privacy", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DarksendConfig", "Please select a privacy level.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DarksendConfig", "Use 2 separate masternodes to mix funds up to 1000 MON", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DarksendConfig", "Use 8 separate masternodes to mix funds up to 1000 MON", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DarksendConfig", "Use 16 separate masternodes", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DarksendConfig", "This option is the quickest and will cost about ~0.025 MON to anonymize 1000 MON", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DarksendConfig", "This option is moderately fast and will cost about 0.05 MON to anonymize 1000 MON", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DarksendConfig", "This is the slowest and most secure option. Using maximum anonymity will cost", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DarksendConfig", "0.1 MON per 1000 MON you anonymize.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DarksendConfig: public Ui_DarksendConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DARKSENDCONFIG_H
