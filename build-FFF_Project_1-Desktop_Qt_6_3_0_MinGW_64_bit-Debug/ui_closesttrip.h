/********************************************************************************
** Form generated from reading UI file 'closesttrip.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSESTTRIP_H
#define UI_CLOSESTTRIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClosestTrip
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *listWidget;
    QLineEdit *name;
    QListWidget *listWidget_price;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_totalOnRest;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QListWidget *listWidget_menu;
    QListWidget *listWidget_cartItem;
    QPushButton *pushButton_5;
    QListWidget *listWidget_cartPrice;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *lineEdit_totalDistance;
    QLabel *label_6;
    QLineEdit *lineEdit_totalSpentTrip;
    QListWidget *listWidget_2;

    void setupUi(QDialog *ClosestTrip)
    {
        if (ClosestTrip->objectName().isEmpty())
            ClosestTrip->setObjectName(QString::fromUtf8("ClosestTrip"));
        ClosestTrip->resize(857, 502);
        label = new QLabel(ClosestTrip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 40, 121, 16));
        label_2 = new QLabel(ClosestTrip);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 10, 161, 31));
        label_3 = new QLabel(ClosestTrip);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 100, 63, 20));
        label_4 = new QLabel(ClosestTrip);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(570, 100, 63, 20));
        label_5 = new QLabel(ClosestTrip);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(590, 370, 63, 20));
        listWidget = new QListWidget(ClosestTrip);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 40, 191, 331));
        name = new QLineEdit(ClosestTrip);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(340, 30, 191, 31));
        listWidget_price = new QListWidget(ClosestTrip);
        listWidget_price->setObjectName(QString::fromUtf8("listWidget_price"));
        listWidget_price->setGeometry(QRect(400, 130, 51, 191));
        pushButton = new QPushButton(ClosestTrip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 330, 93, 29));
        pushButton_2 = new QPushButton(ClosestTrip);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 330, 93, 29));
        lineEdit_totalOnRest = new QLineEdit(ClosestTrip);
        lineEdit_totalOnRest->setObjectName(QString::fromUtf8("lineEdit_totalOnRest"));
        lineEdit_totalOnRest->setGeometry(QRect(630, 370, 113, 26));
        pushButton_3 = new QPushButton(ClosestTrip);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(640, 460, 93, 29));
        pushButton_4 = new QPushButton(ClosestTrip);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 380, 93, 29));
        listWidget_menu = new QListWidget(ClosestTrip);
        listWidget_menu->setObjectName(QString::fromUtf8("listWidget_menu"));
        listWidget_menu->setGeometry(QRect(240, 130, 161, 191));
        listWidget_cartItem = new QListWidget(ClosestTrip);
        listWidget_cartItem->setObjectName(QString::fromUtf8("listWidget_cartItem"));
        listWidget_cartItem->setGeometry(QRect(480, 130, 141, 191));
        pushButton_5 = new QPushButton(ClosestTrip);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(610, 330, 93, 29));
        listWidget_cartPrice = new QListWidget(ClosestTrip);
        listWidget_cartPrice->setObjectName(QString::fromUtf8("listWidget_cartPrice"));
        listWidget_cartPrice->setGeometry(QRect(660, 130, 121, 192));
        pushButton_6 = new QPushButton(ClosestTrip);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(740, 460, 93, 29));
        layoutWidget = new QWidget(ClosestTrip);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 450, 575, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        lineEdit_totalDistance = new QLineEdit(layoutWidget);
        lineEdit_totalDistance->setObjectName(QString::fromUtf8("lineEdit_totalDistance"));

        horizontalLayout->addWidget(lineEdit_totalDistance);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        lineEdit_totalSpentTrip = new QLineEdit(layoutWidget);
        lineEdit_totalSpentTrip->setObjectName(QString::fromUtf8("lineEdit_totalSpentTrip"));

        horizontalLayout->addWidget(lineEdit_totalSpentTrip);

        listWidget_2 = new QListWidget(ClosestTrip);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(620, 130, 41, 191));

        retranslateUi(ClosestTrip);

        QMetaObject::connectSlotsByName(ClosestTrip);
    } // setupUi

    void retranslateUi(QDialog *ClosestTrip)
    {
        ClosestTrip->setWindowTitle(QCoreApplication::translate("ClosestTrip", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ClosestTrip", "Restaurant ", nullptr));
        label_2->setText(QCoreApplication::translate("ClosestTrip", "You will go to", nullptr));
        label_3->setText(QCoreApplication::translate("ClosestTrip", "Menu", nullptr));
        label_4->setText(QCoreApplication::translate("ClosestTrip", "Cart", nullptr));
        label_5->setText(QCoreApplication::translate("ClosestTrip", "Total", nullptr));
        pushButton->setText(QCoreApplication::translate("ClosestTrip", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ClosestTrip", "Remove", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ClosestTrip", "Back", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ClosestTrip", "Choose", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ClosestTrip", "Done", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ClosestTrip", "Finish", nullptr));
        label_7->setText(QCoreApplication::translate("ClosestTrip", "Total Distance", nullptr));
        label_6->setText(QCoreApplication::translate("ClosestTrip", "Total Spending on Trip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClosestTrip: public Ui_ClosestTrip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSESTTRIP_H
