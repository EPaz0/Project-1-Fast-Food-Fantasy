/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

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

class Ui_Dialog
{
public:
    QListWidget *listWidget_3;
    QListWidget *listWidget_cartPrice;
    QLabel *label_3;
    QListWidget *listWidget;
    QPushButton *pushButton_5;
    QLabel *label;
    QPushButton *pushButton_6;
    QListWidget *listWidget_price;
    QLabel *label_10;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_20;
    QLineEdit *lineEdit_totalDistance_7;
    QLabel *label_21;
    QLineEdit *lineEdit_totalSpentTrip_7;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_8;
    QListWidget *listWidget_2;
    QListWidget *listWidget_menu;
    QPushButton *pushButton_2;
    QListWidget *listWidget_cartItem;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_totalOnRest;
    QLineEdit *name;
    QPushButton *pushButton_3;
    QLabel *label_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1084, 634);
        listWidget_3 = new QListWidget(Dialog);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(30, 90, 191, 411));
        listWidget_cartPrice = new QListWidget(Dialog);
        listWidget_cartPrice->setObjectName(QString::fromUtf8("listWidget_cartPrice"));
        listWidget_cartPrice->setGeometry(QRect(900, 220, 121, 192));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(550, 190, 63, 20));
        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(270, 130, 191, 331));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(850, 420, 93, 29));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 130, 121, 16));
        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(980, 550, 93, 29));
        listWidget_price = new QListWidget(Dialog);
        listWidget_price->setObjectName(QString::fromUtf8("listWidget_price"));
        listWidget_price->setGeometry(QRect(640, 220, 51, 191));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(410, 30, 111, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua")});
        font.setPointSize(12);
        font.setBold(true);
        font.setStrikeOut(false);
        label_10->setFont(font);
        label_10->setFrameShape(QFrame::Box);
        layoutWidget_2 = new QWidget(Dialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(280, 540, 575, 28));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_7->addWidget(label_20);

        lineEdit_totalDistance_7 = new QLineEdit(layoutWidget_2);
        lineEdit_totalDistance_7->setObjectName(QString::fromUtf8("lineEdit_totalDistance_7"));

        horizontalLayout_7->addWidget(lineEdit_totalDistance_7);

        label_21 = new QLabel(layoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_7->addWidget(label_21);

        lineEdit_totalSpentTrip_7 = new QLineEdit(layoutWidget_2);
        lineEdit_totalSpentTrip_7->setObjectName(QString::fromUtf8("lineEdit_totalSpentTrip_7"));

        horizontalLayout_7->addWidget(lineEdit_totalSpentTrip_7);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 100, 161, 31));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 420, 93, 29));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 470, 93, 29));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(810, 190, 63, 20));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 50, 171, 31));
        listWidget_2 = new QListWidget(Dialog);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(860, 220, 41, 191));
        listWidget_menu = new QListWidget(Dialog);
        listWidget_menu->setObjectName(QString::fromUtf8("listWidget_menu"));
        listWidget_menu->setGeometry(QRect(480, 220, 161, 191));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 420, 93, 29));
        listWidget_cartItem = new QListWidget(Dialog);
        listWidget_cartItem->setObjectName(QString::fromUtf8("listWidget_cartItem"));
        listWidget_cartItem->setGeometry(QRect(720, 220, 141, 191));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 510, 171, 52));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        lineEdit_totalOnRest = new QLineEdit(Dialog);
        lineEdit_totalOnRest->setObjectName(QString::fromUtf8("lineEdit_totalOnRest"));
        lineEdit_totalOnRest->setGeometry(QRect(870, 460, 113, 26));
        name = new QLineEdit(Dialog);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(580, 120, 191, 31));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(880, 550, 93, 29));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(830, 460, 63, 20));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Menu", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "Done", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Restaurant ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "Finish", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "CUSTOM TRIP", nullptr));
        label_20->setText(QCoreApplication::translate("Dialog", "Total Distance", nullptr));
        label_21->setText(QCoreApplication::translate("Dialog", "Total Spending on Trip", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "You will go to", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Choose", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Cart", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "List of restaurants to select from:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Remove", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "Select the first one to visit", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "Select the other ones to visit", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
