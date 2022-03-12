/********************************************************************************
** Form generated from reading UI file 'endwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDWINDOW_H
#define UI_ENDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_endwindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *endwindow)
    {
        if (endwindow->objectName().isEmpty())
            endwindow->setObjectName(QString::fromUtf8("endwindow"));
        endwindow->resize(400, 300);
        widget = new QWidget(endwindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 100, 180, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        retranslateUi(endwindow);

        QMetaObject::connectSlotsByName(endwindow);
    } // setupUi

    void retranslateUi(QDialog *endwindow)
    {
        endwindow->setWindowTitle(QCoreApplication::translate("endwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("endwindow", "Thank you. Have a safe trip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class endwindow: public Ui_endwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDWINDOW_H
