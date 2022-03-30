/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signin
{
public:
    QLabel *TitleLabel;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *UsernameLabel;
    QLineEdit *UsernameLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PasswordLabel;
    QLineEdit *PasswordLine;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *OkButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *Signin)
    {
        if (Signin->objectName().isEmpty())
            Signin->setObjectName(QString::fromUtf8("Signin"));
        Signin->resize(619, 505);
        TitleLabel = new QLabel(Signin);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));
        TitleLabel->setGeometry(QRect(270, 30, 71, 51));
        label = new QLabel(Signin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 180, 101, 41));
        widget = new QWidget(Signin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 190, 154, 56));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        UsernameLabel = new QLabel(widget);
        UsernameLabel->setObjectName(QString::fromUtf8("UsernameLabel"));

        horizontalLayout->addWidget(UsernameLabel);

        UsernameLine = new QLineEdit(widget);
        UsernameLine->setObjectName(QString::fromUtf8("UsernameLine"));

        horizontalLayout->addWidget(UsernameLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PasswordLabel = new QLabel(widget);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        horizontalLayout_2->addWidget(PasswordLabel);

        PasswordLine = new QLineEdit(widget);
        PasswordLine->setObjectName(QString::fromUtf8("PasswordLine"));
        PasswordLine->setEchoMode(QLineEdit::Password);
        PasswordLine->setReadOnly(false);

        horizontalLayout_2->addWidget(PasswordLine);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(Signin);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(410, 450, 168, 24));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        OkButton = new QPushButton(widget1);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));

        horizontalLayout_3->addWidget(OkButton);

        CancelButton = new QPushButton(widget1);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        horizontalLayout_3->addWidget(CancelButton);


        retranslateUi(Signin);

        QMetaObject::connectSlotsByName(Signin);
    } // setupUi

    void retranslateUi(QDialog *Signin)
    {
        Signin->setWindowTitle(QCoreApplication::translate("Signin", "Dialog", nullptr));
        TitleLabel->setText(QCoreApplication::translate("Signin", "<html><head/><body><p><span style=\" font-size:16pt;\">Sign in</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Signin", "Hint:\n"
"Username: Admin\n"
"Password: Admin", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("Signin", "Username:", nullptr));
        UsernameLine->setPlaceholderText(QCoreApplication::translate("Signin", "Username", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("Signin", "Password:", nullptr));
        PasswordLine->setText(QString());
        PasswordLine->setPlaceholderText(QCoreApplication::translate("Signin", "Password", nullptr));
        OkButton->setText(QCoreApplication::translate("Signin", "Ok", nullptr));
        CancelButton->setText(QCoreApplication::translate("Signin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signin: public Ui_Signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
