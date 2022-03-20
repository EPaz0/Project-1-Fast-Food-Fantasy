/********************************************************************************
** Form generated from reading UI file 'shorttesttripfromdomino.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTTESTTRIPFROMDOMINO_H
#define UI_SHORTTESTTRIPFROMDOMINO_H

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

class Ui_ShorttestTripFromDomino
{
public:
    QListWidget *listWidget_menu;
    QLabel *label_5;
    QListWidget *listWidget_price;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *lineEdit_totalDistance;
    QLabel *label_6;
    QLineEdit *lineEdit_totalSpentTrip;
    QListWidget *listWidget_cartPrice;
    QLabel *label;
    QPushButton *pushButton_5;
    QListWidget *listWidget_cartItem;
    QPushButton *pushButton;
    QLineEdit *lineEdit_totalOnRest;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLineEdit *name;
    QListWidget *listWidget;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_start;
    QLabel *label_10;
    QLineEdit *lineEdit_noOfRes;
    QListWidget *listWidget_2;

    void setupUi(QDialog *ShorttestTripFromDomino)
    {
        if (ShorttestTripFromDomino->objectName().isEmpty())
            ShorttestTripFromDomino->setObjectName(QString::fromUtf8("ShorttestTripFromDomino"));
        ShorttestTripFromDomino->resize(1038, 629);
        listWidget_menu = new QListWidget(ShorttestTripFromDomino);
        listWidget_menu->setObjectName(QString::fromUtf8("listWidget_menu"));
        listWidget_menu->setGeometry(QRect(350, 210, 161, 191));
        label_5 = new QLabel(ShorttestTripFromDomino);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(700, 450, 63, 20));
        listWidget_price = new QListWidget(ShorttestTripFromDomino);
        listWidget_price->setObjectName(QString::fromUtf8("listWidget_price"));
        listWidget_price->setGeometry(QRect(510, 210, 51, 191));
        layoutWidget = new QWidget(ShorttestTripFromDomino);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 530, 575, 28));
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

        listWidget_cartPrice = new QListWidget(ShorttestTripFromDomino);
        listWidget_cartPrice->setObjectName(QString::fromUtf8("listWidget_cartPrice"));
        listWidget_cartPrice->setGeometry(QRect(770, 210, 121, 192));
        label = new QLabel(ShorttestTripFromDomino);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 120, 121, 16));
        pushButton_5 = new QPushButton(ShorttestTripFromDomino);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(720, 410, 93, 29));
        listWidget_cartItem = new QListWidget(ShorttestTripFromDomino);
        listWidget_cartItem->setObjectName(QString::fromUtf8("listWidget_cartItem"));
        listWidget_cartItem->setGeometry(QRect(590, 210, 141, 191));
        pushButton = new QPushButton(ShorttestTripFromDomino);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 410, 93, 29));
        lineEdit_totalOnRest = new QLineEdit(ShorttestTripFromDomino);
        lineEdit_totalOnRest->setObjectName(QString::fromUtf8("lineEdit_totalOnRest"));
        lineEdit_totalOnRest->setGeometry(QRect(740, 450, 113, 26));
        label_4 = new QLabel(ShorttestTripFromDomino);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(680, 180, 63, 20));
        pushButton_2 = new QPushButton(ShorttestTripFromDomino);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 410, 93, 29));
        label_3 = new QLabel(ShorttestTripFromDomino);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 180, 63, 20));
        pushButton_6 = new QPushButton(ShorttestTripFromDomino);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(850, 540, 93, 29));
        pushButton_3 = new QPushButton(ShorttestTripFromDomino);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 540, 93, 29));
        label_2 = new QLabel(ShorttestTripFromDomino);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 90, 161, 31));
        pushButton_4 = new QPushButton(ShorttestTripFromDomino);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 460, 93, 29));
        name = new QLineEdit(ShorttestTripFromDomino);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(450, 110, 191, 31));
        listWidget = new QListWidget(ShorttestTripFromDomino);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(140, 120, 191, 331));
        label_8 = new QLabel(ShorttestTripFromDomino);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 10, 161, 31));
        label_9 = new QLabel(ShorttestTripFromDomino);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(220, 10, 451, 20));
        pushButton_start = new QPushButton(ShorttestTripFromDomino);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(150, 60, 93, 29));
        label_10 = new QLabel(ShorttestTripFromDomino);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 210, 111, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua")});
        font.setPointSize(12);
        font.setBold(true);
        font.setStrikeOut(false);
        label_10->setFont(font);
        label_10->setFrameShape(QFrame::Box);
        lineEdit_noOfRes = new QLineEdit(ShorttestTripFromDomino);
        lineEdit_noOfRes->setObjectName(QString::fromUtf8("lineEdit_noOfRes"));
        lineEdit_noOfRes->setGeometry(QRect(170, 10, 41, 41));
        listWidget_2 = new QListWidget(ShorttestTripFromDomino);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(730, 210, 41, 191));

        retranslateUi(ShorttestTripFromDomino);

        QMetaObject::connectSlotsByName(ShorttestTripFromDomino);
    } // setupUi

    void retranslateUi(QDialog *ShorttestTripFromDomino)
    {
        ShorttestTripFromDomino->setWindowTitle(QCoreApplication::translate("ShorttestTripFromDomino", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Total", nullptr));
        label_7->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Total Distance", nullptr));
        label_6->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Total Spending on Trip", nullptr));
        label->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Restaurant ", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Done", nullptr));
        pushButton->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Cart", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Remove", nullptr));
        label_3->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Menu", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Finish", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("ShorttestTripFromDomino", "You will go to", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Choose", nullptr));
        label_8->setText(QCoreApplication::translate("ShorttestTripFromDomino", "Number of restaurant", nullptr));
        label_9->setText(QCoreApplication::translate("ShorttestTripFromDomino", "<--- Please type in here the number of restaurant you want to visit", nullptr));
        pushButton_start->setText(QCoreApplication::translate("ShorttestTripFromDomino", "START!", nullptr));
        label_10->setText(QCoreApplication::translate("ShorttestTripFromDomino", "DOMINO's", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShorttestTripFromDomino: public Ui_ShorttestTripFromDomino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTTESTTRIPFROMDOMINO_H
