/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelWatchPending;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QFrame *lineSpendableBalance;
    QFrame *lineWatchBalance;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelSpendable;
    QFrame *framePrivateSend;
    QVBoxLayout *VerticalLayout_PS1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPrivateSendHeader;
    QLabel *labelPrivateSendSyncStatus;
    QSpacerItem *horizontalSpacer_4;
    QFormLayout *privateSendFormLayout;
    QLabel *labelPrivateSendEnabledText;
    QLabel *labelPrivateSendEnabled;
    QLabel *labelCompletitionText;
    QProgressBar *privateSendProgress;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QLabel *labelAmountAndRoundsText;
    QLabel *labelAmountRounds;
    QLabel *labelSubmittedDenomText;
    QLabel *labelSubmittedDenom;
    QVBoxLayout *VerticalLayout_PS;
    QLabel *labelPrivateSendLastMessage;
    QPushButton *togglePrivateSend;
    QHBoxLayout *horizontalLayout_debugbuttons;
    QPushButton *privateSendAuto;
    QPushButton *privateSendReset;
    QPushButton *privateSendInfo;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(960, 585);
        OverviewPage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QString::fromUtf8("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QString::fromUtf8("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QString::fromUtf8("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        lineSpendableBalance = new QFrame(frame);
        lineSpendableBalance->setObjectName(QString::fromUtf8("lineSpendableBalance"));
        lineSpendableBalance->setFrameShape(QFrame::HLine);
        lineSpendableBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpendableBalance, 4, 0, 1, 2);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QString::fromUtf8("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 4, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QString::fromUtf8("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QString::fromUtf8("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QString::fromUtf8("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QString::fromUtf8("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QString::fromUtf8("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QString::fromUtf8("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QString::fromUtf8("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_2->addWidget(frame);

        framePrivateSend = new QFrame(OverviewPage);
        framePrivateSend->setObjectName(QString::fromUtf8("framePrivateSend"));
        framePrivateSend->setLayoutDirection(Qt::LeftToRight);
        framePrivateSend->setFrameShape(QFrame::StyledPanel);
        framePrivateSend->setFrameShadow(QFrame::Raised);
        VerticalLayout_PS1 = new QVBoxLayout(framePrivateSend);
        VerticalLayout_PS1->setObjectName(QString::fromUtf8("VerticalLayout_PS1"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelPrivateSendHeader = new QLabel(framePrivateSend);
        labelPrivateSendHeader->setObjectName(QString::fromUtf8("labelPrivateSendHeader"));
        labelPrivateSendHeader->setFont(font);

        horizontalLayout_5->addWidget(labelPrivateSendHeader);

        labelPrivateSendSyncStatus = new QLabel(framePrivateSend);
        labelPrivateSendSyncStatus->setObjectName(QString::fromUtf8("labelPrivateSendSyncStatus"));
        labelPrivateSendSyncStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelPrivateSendSyncStatus->setText(QString::fromUtf8("(out of sync)"));
        labelPrivateSendSyncStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelPrivateSendSyncStatus);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        VerticalLayout_PS1->addLayout(horizontalLayout_5);

        privateSendFormLayout = new QFormLayout();
        privateSendFormLayout->setObjectName(QString::fromUtf8("privateSendFormLayout"));
        privateSendFormLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        privateSendFormLayout->setHorizontalSpacing(11);
        privateSendFormLayout->setVerticalSpacing(12);
        labelPrivateSendEnabledText = new QLabel(framePrivateSend);
        labelPrivateSendEnabledText->setObjectName(QString::fromUtf8("labelPrivateSendEnabledText"));

        privateSendFormLayout->setWidget(0, QFormLayout::LabelRole, labelPrivateSendEnabledText);

        labelPrivateSendEnabled = new QLabel(framePrivateSend);
        labelPrivateSendEnabled->setObjectName(QString::fromUtf8("labelPrivateSendEnabled"));

        privateSendFormLayout->setWidget(0, QFormLayout::FieldRole, labelPrivateSendEnabled);

        labelCompletitionText = new QLabel(framePrivateSend);
        labelCompletitionText->setObjectName(QString::fromUtf8("labelCompletitionText"));

        privateSendFormLayout->setWidget(1, QFormLayout::LabelRole, labelCompletitionText);

        privateSendProgress = new QProgressBar(framePrivateSend);
        privateSendProgress->setObjectName(QString::fromUtf8("privateSendProgress"));
        privateSendProgress->setMaximumSize(QSize(154, 16777215));
        privateSendProgress->setValue(0);

        privateSendFormLayout->setWidget(1, QFormLayout::FieldRole, privateSendProgress);

        labelAnonymizedText = new QLabel(framePrivateSend);
        labelAnonymizedText->setObjectName(QString::fromUtf8("labelAnonymizedText"));

        privateSendFormLayout->setWidget(2, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(framePrivateSend);
        labelAnonymized->setObjectName(QString::fromUtf8("labelAnonymized"));
        labelAnonymized->setFont(font);
        labelAnonymized->setText(QString::fromUtf8("0 MON"));

        privateSendFormLayout->setWidget(2, QFormLayout::FieldRole, labelAnonymized);

        labelAmountAndRoundsText = new QLabel(framePrivateSend);
        labelAmountAndRoundsText->setObjectName(QString::fromUtf8("labelAmountAndRoundsText"));

        privateSendFormLayout->setWidget(3, QFormLayout::LabelRole, labelAmountAndRoundsText);

        labelAmountRounds = new QLabel(framePrivateSend);
        labelAmountRounds->setObjectName(QString::fromUtf8("labelAmountRounds"));

        privateSendFormLayout->setWidget(3, QFormLayout::FieldRole, labelAmountRounds);

        labelSubmittedDenomText = new QLabel(framePrivateSend);
        labelSubmittedDenomText->setObjectName(QString::fromUtf8("labelSubmittedDenomText"));

        privateSendFormLayout->setWidget(4, QFormLayout::LabelRole, labelSubmittedDenomText);

        labelSubmittedDenom = new QLabel(framePrivateSend);
        labelSubmittedDenom->setObjectName(QString::fromUtf8("labelSubmittedDenom"));

        privateSendFormLayout->setWidget(4, QFormLayout::FieldRole, labelSubmittedDenom);


        VerticalLayout_PS1->addLayout(privateSendFormLayout);

        VerticalLayout_PS = new QVBoxLayout();
        VerticalLayout_PS->setObjectName(QString::fromUtf8("VerticalLayout_PS"));
        labelPrivateSendLastMessage = new QLabel(framePrivateSend);
        labelPrivateSendLastMessage->setObjectName(QString::fromUtf8("labelPrivateSendLastMessage"));
        labelPrivateSendLastMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelPrivateSendLastMessage->setWordWrap(true);

        VerticalLayout_PS->addWidget(labelPrivateSendLastMessage);

        togglePrivateSend = new QPushButton(framePrivateSend);
        togglePrivateSend->setObjectName(QString::fromUtf8("togglePrivateSend"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(togglePrivateSend->sizePolicy().hasHeightForWidth());
        togglePrivateSend->setSizePolicy(sizePolicy1);

        VerticalLayout_PS->addWidget(togglePrivateSend);

        horizontalLayout_debugbuttons = new QHBoxLayout();
        horizontalLayout_debugbuttons->setObjectName(QString::fromUtf8("horizontalLayout_debugbuttons"));
        privateSendAuto = new QPushButton(framePrivateSend);
        privateSendAuto->setObjectName(QString::fromUtf8("privateSendAuto"));
        sizePolicy1.setHeightForWidth(privateSendAuto->sizePolicy().hasHeightForWidth());
        privateSendAuto->setSizePolicy(sizePolicy1);

        horizontalLayout_debugbuttons->addWidget(privateSendAuto);

        privateSendReset = new QPushButton(framePrivateSend);
        privateSendReset->setObjectName(QString::fromUtf8("privateSendReset"));
        sizePolicy1.setHeightForWidth(privateSendReset->sizePolicy().hasHeightForWidth());
        privateSendReset->setSizePolicy(sizePolicy1);
        privateSendReset->setAutoFillBackground(false);

        horizontalLayout_debugbuttons->addWidget(privateSendReset);

        privateSendInfo = new QPushButton(framePrivateSend);
        privateSendInfo->setObjectName(QString::fromUtf8("privateSendInfo"));
        sizePolicy1.setHeightForWidth(privateSendInfo->sizePolicy().hasHeightForWidth());
        privateSendInfo->setSizePolicy(sizePolicy1);

        horizontalLayout_debugbuttons->addWidget(privateSendInfo);


        VerticalLayout_PS->addLayout(horizontalLayout_debugbuttons);


        VerticalLayout_PS1->addLayout(VerticalLayout_PS);


        verticalLayout_2->addWidget(framePrivateSend);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "Balances", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Bitcoin Monster network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", 0, QApplication::UnicodeUTF8));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", 0, QApplication::UnicodeUTF8));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", 0, QApplication::UnicodeUTF8));
        labelPrivateSendHeader->setText(QApplication::translate("OverviewPage", "PrivateSend", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelPrivateSendSyncStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Bitcoin Monster network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelPrivateSendEnabledText->setText(QApplication::translate("OverviewPage", "Status:", 0, QApplication::UnicodeUTF8));
        labelPrivateSendEnabled->setText(QApplication::translate("OverviewPage", "Enabled/Disabled", 0, QApplication::UnicodeUTF8));
        labelCompletitionText->setText(QApplication::translate("OverviewPage", "Completion:", 0, QApplication::UnicodeUTF8));
        labelAnonymizedText->setText(QApplication::translate("OverviewPage", "PrivateSend Balance:", 0, QApplication::UnicodeUTF8));
        labelAmountAndRoundsText->setText(QApplication::translate("OverviewPage", "Amount and Rounds:", 0, QApplication::UnicodeUTF8));
        labelAmountRounds->setText(QApplication::translate("OverviewPage", "0 MON / 0 Rounds", 0, QApplication::UnicodeUTF8));
        labelSubmittedDenomText->setText(QApplication::translate("OverviewPage", "Submitted Denom:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelSubmittedDenom->setToolTip(QApplication::translate("OverviewPage", "The denominations you submitted to the Masternode.<br>To mix, other users must submit the exact same denominations.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelSubmittedDenom->setText(QApplication::translate("OverviewPage", "n/a", 0, QApplication::UnicodeUTF8));
        labelPrivateSendLastMessage->setText(QApplication::translate("OverviewPage", "(Last Message)", 0, QApplication::UnicodeUTF8));
        togglePrivateSend->setText(QApplication::translate("OverviewPage", "Start/Stop Mixing", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        privateSendAuto->setToolTip(QApplication::translate("OverviewPage", "Try to manually submit a PrivateSend request.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        privateSendAuto->setText(QApplication::translate("OverviewPage", "Try Mix", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        privateSendReset->setToolTip(QApplication::translate("OverviewPage", "Reset the current status of PrivateSend (can interrupt PrivateSend if it's in the process of Mixing, which can cost you money!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        privateSendReset->setText(QApplication::translate("OverviewPage", "Reset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        privateSendInfo->setToolTip(QApplication::translate("OverviewPage", "Information about PrivateSend and Mixing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        privateSendInfo->setText(QApplication::translate("OverviewPage", "Info", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Bitcoin Monster network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
