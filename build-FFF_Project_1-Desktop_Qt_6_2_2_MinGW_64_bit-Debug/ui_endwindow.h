/********************************************************************************
** Form generated from reading UI file 'endwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDWINDOW_H
#define UI_ENDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_endwindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *endwindow)
    {
        if (endwindow->objectName().isEmpty())
            endwindow->setObjectName(QString::fromUtf8("endwindow"));
        endwindow->resize(400, 300);
        layoutWidget = new QWidget(endwindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 100, 180, 58));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(endwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 260, 80, 22));

        retranslateUi(endwindow);

        QMetaObject::connectSlotsByName(endwindow);
    } // setupUi

    void retranslateUi(QDialog *endwindow)
    {
        endwindow->setWindowTitle(QCoreApplication::translate("endwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("endwindow", "Thank you. Have a safe trip", nullptr));
        pushButton->setText(QCoreApplication::translate("endwindow", "Back to Main", nullptr));
    } // retranslateUi

};

namespace Ui {
    class endwindow: public Ui_endwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDWINDOW_H
