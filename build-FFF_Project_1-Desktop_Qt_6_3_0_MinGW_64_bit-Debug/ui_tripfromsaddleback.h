/********************************************************************************
** Form generated from reading UI file 'tripfromsaddleback.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPFROMSADDLEBACK_H
#define UI_TRIPFROMSADDLEBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TripFromSaddleback
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListView *listView;
    QListView *listView_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *TripFromSaddleback)
    {
        if (TripFromSaddleback->objectName().isEmpty())
            TripFromSaddleback->setObjectName(QString::fromUtf8("TripFromSaddleback"));
        TripFromSaddleback->resize(685, 453);
        label = new QLabel(TripFromSaddleback);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 81, 16));
        label_2 = new QLabel(TripFromSaddleback);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 70, 63, 20));
        label_3 = new QLabel(TripFromSaddleback);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(480, 70, 63, 20));
        listView = new QListView(TripFromSaddleback);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(80, 100, 256, 192));
        listView_2 = new QListView(TripFromSaddleback);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(370, 100, 256, 192));
        pushButton = new QPushButton(TripFromSaddleback);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 300, 93, 29));
        pushButton_2 = new QPushButton(TripFromSaddleback);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 300, 93, 29));
        label_4 = new QLabel(TripFromSaddleback);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 310, 63, 20));
        lineEdit = new QLineEdit(TripFromSaddleback);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(450, 310, 113, 26));
        lineEdit_2 = new QLineEdit(TripFromSaddleback);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 20, 113, 26));

        retranslateUi(TripFromSaddleback);

        QMetaObject::connectSlotsByName(TripFromSaddleback);
    } // setupUi

    void retranslateUi(QWidget *TripFromSaddleback)
    {
        TripFromSaddleback->setWindowTitle(QCoreApplication::translate("TripFromSaddleback", "Form", nullptr));
        label->setText(QCoreApplication::translate("TripFromSaddleback", "Restaurant", nullptr));
        label_2->setText(QCoreApplication::translate("TripFromSaddleback", "Menu", nullptr));
        label_3->setText(QCoreApplication::translate("TripFromSaddleback", "Cart", nullptr));
        pushButton->setText(QCoreApplication::translate("TripFromSaddleback", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TripFromSaddleback", "Remove", nullptr));
        label_4->setText(QCoreApplication::translate("TripFromSaddleback", "Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripFromSaddleback: public Ui_TripFromSaddleback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPFROMSADDLEBACK_H
