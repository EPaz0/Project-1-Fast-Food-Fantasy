/********************************************************************************
** Form generated from reading UI file 'customtrip.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMTRIP_H
#define UI_CUSTOMTRIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customtrip
{
public:
    QListWidget *listWidget_3;
    QLabel *label_10;
    QLabel *label_8;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QListWidget *listWidget_cartPrice;
    QLineEdit *name;
    QLabel *label_2;
    QListWidget *listWidget_cartItem;
    QPushButton *pushButton_6;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *lineEdit_totalDistance_3;
    QLabel *label_14;
    QLineEdit *lineEdit_totalSpentTrip_3;
    QListWidget *listWidget_menu;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_totalOnRest;
    QListWidget *listWidget_price;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QListWidget *listWidget_2;
    QLabel *label_3;
    QListWidget *listWidget;

    void setupUi(QDialog *customtrip)
    {
        if (customtrip->objectName().isEmpty())
            customtrip->setObjectName(QString::fromUtf8("customtrip"));
        customtrip->resize(1117, 635);
        listWidget_3 = new QListWidget(customtrip);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(30, 90, 191, 411));
        label_10 = new QLabel(customtrip);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(410, 30, 131, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua")});
        font.setPointSize(12);
        font.setBold(true);
        font.setStrikeOut(false);
        label_10->setFont(font);
        label_10->setFrameShape(QFrame::Box);
        label_8 = new QLabel(customtrip);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 50, 171, 31));
        layoutWidget = new QWidget(customtrip);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 510, 171, 52));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout_2->addWidget(pushButton_10);

        listWidget_cartPrice = new QListWidget(customtrip);
        listWidget_cartPrice->setObjectName(QString::fromUtf8("listWidget_cartPrice"));
        listWidget_cartPrice->setGeometry(QRect(890, 230, 121, 192));
        name = new QLineEdit(customtrip);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(570, 130, 191, 31));
        label_2 = new QLabel(customtrip);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 110, 161, 31));
        listWidget_cartItem = new QListWidget(customtrip);
        listWidget_cartItem->setObjectName(QString::fromUtf8("listWidget_cartItem"));
        listWidget_cartItem->setGeometry(QRect(710, 230, 141, 191));
        pushButton_6 = new QPushButton(customtrip);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(970, 560, 93, 29));
        layoutWidget_2 = new QWidget(customtrip);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(270, 550, 575, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        lineEdit_totalDistance_3 = new QLineEdit(layoutWidget_2);
        lineEdit_totalDistance_3->setObjectName(QString::fromUtf8("lineEdit_totalDistance_3"));

        horizontalLayout_3->addWidget(lineEdit_totalDistance_3);

        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_3->addWidget(label_14);

        lineEdit_totalSpentTrip_3 = new QLineEdit(layoutWidget_2);
        lineEdit_totalSpentTrip_3->setObjectName(QString::fromUtf8("lineEdit_totalSpentTrip_3"));

        horizontalLayout_3->addWidget(lineEdit_totalSpentTrip_3);

        listWidget_menu = new QListWidget(customtrip);
        listWidget_menu->setObjectName(QString::fromUtf8("listWidget_menu"));
        listWidget_menu->setGeometry(QRect(470, 230, 161, 191));
        pushButton_3 = new QPushButton(customtrip);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(870, 560, 93, 29));
        pushButton_2 = new QPushButton(customtrip);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(740, 430, 93, 29));
        pushButton_5 = new QPushButton(customtrip);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(840, 430, 93, 29));
        lineEdit_totalOnRest = new QLineEdit(customtrip);
        lineEdit_totalOnRest->setObjectName(QString::fromUtf8("lineEdit_totalOnRest"));
        lineEdit_totalOnRest->setGeometry(QRect(860, 470, 113, 26));
        listWidget_price = new QListWidget(customtrip);
        listWidget_price->setObjectName(QString::fromUtf8("listWidget_price"));
        listWidget_price->setGeometry(QRect(630, 230, 51, 191));
        label = new QLabel(customtrip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 140, 121, 16));
        pushButton = new QPushButton(customtrip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 430, 93, 29));
        label_4 = new QLabel(customtrip);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(800, 200, 63, 20));
        label_5 = new QLabel(customtrip);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(820, 470, 63, 20));
        pushButton_4 = new QPushButton(customtrip);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 480, 93, 29));
        listWidget_2 = new QListWidget(customtrip);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(850, 230, 41, 191));
        label_3 = new QLabel(customtrip);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(540, 200, 63, 20));
        listWidget = new QListWidget(customtrip);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(260, 140, 191, 331));

        retranslateUi(customtrip);

        QMetaObject::connectSlotsByName(customtrip);
    } // setupUi

    void retranslateUi(QDialog *customtrip)
    {
        customtrip->setWindowTitle(QCoreApplication::translate("customtrip", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("customtrip", "CUSTOM TRIP", nullptr));
        label_8->setText(QCoreApplication::translate("customtrip", "List of restaurants to select from:", nullptr));
        pushButton_9->setText(QCoreApplication::translate("customtrip", "Select the first one to visit", nullptr));
        pushButton_10->setText(QCoreApplication::translate("customtrip", "Select the other ones to visit", nullptr));
        label_2->setText(QCoreApplication::translate("customtrip", "You will go to", nullptr));
        pushButton_6->setText(QCoreApplication::translate("customtrip", "Finish", nullptr));
        label_13->setText(QCoreApplication::translate("customtrip", "Total Distance", nullptr));
        label_14->setText(QCoreApplication::translate("customtrip", "Total Spending on Trip", nullptr));
        pushButton_3->setText(QCoreApplication::translate("customtrip", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("customtrip", "Remove", nullptr));
        pushButton_5->setText(QCoreApplication::translate("customtrip", "Done", nullptr));
        label->setText(QCoreApplication::translate("customtrip", "Restaurant ", nullptr));
        pushButton->setText(QCoreApplication::translate("customtrip", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("customtrip", "Cart", nullptr));
        label_5->setText(QCoreApplication::translate("customtrip", "Total", nullptr));
        pushButton_4->setText(QCoreApplication::translate("customtrip", "Choose", nullptr));
        label_3->setText(QCoreApplication::translate("customtrip", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customtrip: public Ui_customtrip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMTRIP_H
