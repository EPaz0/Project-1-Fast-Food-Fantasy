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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ClosestTrip
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QListWidget *listWidget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QListView *listView;
    QListView *listView_2;
    QListView *listView_3;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ClosestTrip)
    {
        if (ClosestTrip->objectName().isEmpty())
            ClosestTrip->setObjectName(QString::fromUtf8("ClosestTrip"));
        ClosestTrip->resize(830, 502);
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
        label_5->setGeometry(QRect(570, 330, 63, 20));
        label_6 = new QLabel(ClosestTrip);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 410, 191, 41));
        listWidget = new QListWidget(ClosestTrip);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 40, 191, 331));
        lineEdit = new QLineEdit(ClosestTrip);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 30, 191, 31));
        listWidget_2 = new QListWidget(ClosestTrip);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(240, 130, 211, 191));
        pushButton = new QPushButton(ClosestTrip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 330, 93, 29));
        pushButton_2 = new QPushButton(ClosestTrip);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 330, 93, 29));
        lineEdit_2 = new QLineEdit(ClosestTrip);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(660, 330, 113, 26));
        lineEdit_3 = new QLineEdit(ClosestTrip);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(470, 420, 113, 26));
        listView = new QListView(ClosestTrip);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(480, 130, 141, 191));
        listView_2 = new QListView(ClosestTrip);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(620, 130, 41, 191));
        listView_3 = new QListView(ClosestTrip);
        listView_3->setObjectName(QString::fromUtf8("listView_3"));
        listView_3->setGeometry(QRect(660, 130, 101, 191));
        pushButton_3 = new QPushButton(ClosestTrip);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(690, 450, 93, 29));

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
        label_6->setText(QCoreApplication::translate("ClosestTrip", "Total Spending on Trip", nullptr));
        pushButton->setText(QCoreApplication::translate("ClosestTrip", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ClosestTrip", "Remove", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ClosestTrip", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClosestTrip: public Ui_ClosestTrip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSESTTRIP_H
