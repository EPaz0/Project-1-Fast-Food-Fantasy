/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionUpdate_List;
    QAction *actionLog_in;
    QAction *actionLog_out;
    QAction *action10_Closet;
    QAction *actionShortest_Trip;
    QAction *actionVisit_All_12;
    QAction *actionCustom_Trip;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidget_item;
    QListWidget *listWidget_price;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *listWidget_name;
    QListWidget *listWidget_distance;
    QLineEdit *editMenuInput;
    QPushButton *SubmitChange;
    QPushButton *addMenu;
    QPushButton *deleteMenuItem;
    QLineEdit *editNewItem;
    QLineEdit *editNewPrice;
    QPushButton *SubmitNew;
    QPushButton *deleteRestaurant;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAdmin;
    QMenu *menuTrips;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(862, 569);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionUpdate_List = new QAction(MainWindow);
        actionUpdate_List->setObjectName(QString::fromUtf8("actionUpdate_List"));
        actionLog_in = new QAction(MainWindow);
        actionLog_in->setObjectName(QString::fromUtf8("actionLog_in"));
        actionLog_out = new QAction(MainWindow);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        action10_Closet = new QAction(MainWindow);
        action10_Closet->setObjectName(QString::fromUtf8("action10_Closet"));
        actionShortest_Trip = new QAction(MainWindow);
        actionShortest_Trip->setObjectName(QString::fromUtf8("actionShortest_Trip"));
        actionVisit_All_12 = new QAction(MainWindow);
        actionVisit_All_12->setObjectName(QString::fromUtf8("actionVisit_All_12"));
        actionCustom_Trip = new QAction(MainWindow);
        actionCustom_Trip->setObjectName(QString::fromUtf8("actionCustom_Trip"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 40, 171, 421));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 91, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 50, 200, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(560, 430, 275, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 470, 93, 29));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(210, 90, 301, 341));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        listWidget_item = new QListWidget(layoutWidget2);
        listWidget_item->setObjectName(QString::fromUtf8("listWidget_item"));

        horizontalLayout_4->addWidget(listWidget_item);

        listWidget_price = new QListWidget(layoutWidget2);
        listWidget_price->setObjectName(QString::fromUtf8("listWidget_price"));

        horizontalLayout_4->addWidget(listWidget_price);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(530, 90, 321, 341));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        listWidget_name = new QListWidget(layoutWidget3);
        listWidget_name->setObjectName(QString::fromUtf8("listWidget_name"));

        horizontalLayout_5->addWidget(listWidget_name);

        listWidget_distance = new QListWidget(layoutWidget3);
        listWidget_distance->setObjectName(QString::fromUtf8("listWidget_distance"));

        horizontalLayout_5->addWidget(listWidget_distance);


        verticalLayout_2->addLayout(horizontalLayout_5);

        editMenuInput = new QLineEdit(centralwidget);
        editMenuInput->setObjectName(QString::fromUtf8("editMenuInput"));
        editMenuInput->setGeometry(QRect(250, 470, 113, 21));
        SubmitChange = new QPushButton(centralwidget);
        SubmitChange->setObjectName(QString::fromUtf8("SubmitChange"));
        SubmitChange->setGeometry(QRect(370, 470, 91, 22));
        addMenu = new QPushButton(centralwidget);
        addMenu->setObjectName(QString::fromUtf8("addMenu"));
        addMenu->setGeometry(QRect(210, 430, 31, 22));
        deleteMenuItem = new QPushButton(centralwidget);
        deleteMenuItem->setObjectName(QString::fromUtf8("deleteMenuItem"));
        deleteMenuItem->setGeometry(QRect(240, 430, 31, 22));
        editNewItem = new QLineEdit(centralwidget);
        editNewItem->setObjectName(QString::fromUtf8("editNewItem"));
        editNewItem->setGeometry(QRect(280, 430, 101, 21));
        editNewPrice = new QLineEdit(centralwidget);
        editNewPrice->setObjectName(QString::fromUtf8("editNewPrice"));
        editNewPrice->setGeometry(QRect(400, 430, 61, 21));
        SubmitNew = new QPushButton(centralwidget);
        SubmitNew->setObjectName(QString::fromUtf8("SubmitNew"));
        SubmitNew->setGeometry(QRect(470, 430, 51, 22));
        deleteRestaurant = new QPushButton(centralwidget);
        deleteRestaurant->setObjectName(QString::fromUtf8("deleteRestaurant"));
        deleteRestaurant->setGeometry(QRect(40, 500, 111, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 862, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAdmin = new QMenu(menubar);
        menuAdmin->setObjectName(QString::fromUtf8("menuAdmin"));
        menuTrips = new QMenu(menubar);
        menuTrips->setObjectName(QString::fromUtf8("menuTrips"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAdmin->menuAction());
        menubar->addAction(menuTrips->menuAction());
        menuFile->addAction(actionUpdate_List);
        menuAdmin->addAction(actionLog_in);
        menuAdmin->addAction(actionLog_out);
        menuTrips->addAction(action10_Closet);
        menuTrips->addAction(actionShortest_Trip);
        menuTrips->addAction(actionVisit_All_12);
        menuTrips->addAction(actionCustom_Trip);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen_File->setToolTip(QCoreApplication::translate("MainWindow", "Import the Initial Restaurants", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUpdate_List->setText(QCoreApplication::translate("MainWindow", "Update List", nullptr));
#if QT_CONFIG(tooltip)
        actionUpdate_List->setToolTip(QCoreApplication::translate("MainWindow", "Add the Extra 2 Restaurants", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLog_in->setText(QCoreApplication::translate("MainWindow", "Log-in", nullptr));
#if QT_CONFIG(tooltip)
        actionLog_in->setToolTip(QCoreApplication::translate("MainWindow", "Log-in for Maintinance", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLog_out->setText(QCoreApplication::translate("MainWindow", "Log-out", nullptr));
#if QT_CONFIG(tooltip)
        actionLog_out->setToolTip(QCoreApplication::translate("MainWindow", "Log-out of Maintinance", nullptr));
#endif // QT_CONFIG(tooltip)
        action10_Closet->setText(QCoreApplication::translate("MainWindow", "10 Closest", nullptr));
#if QT_CONFIG(tooltip)
        action10_Closet->setToolTip(QCoreApplication::translate("MainWindow", "Plan a Trip to the Closest 10 Restaurants", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action10_Closet->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        action10_Closet->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        actionShortest_Trip->setText(QCoreApplication::translate("MainWindow", "Shortest Trip", nullptr));
#if QT_CONFIG(tooltip)
        actionShortest_Trip->setToolTip(QCoreApplication::translate("MainWindow", "Plan the Shortest Trip", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVisit_All_12->setText(QCoreApplication::translate("MainWindow", "Visit All 12", nullptr));
#if QT_CONFIG(tooltip)
        actionVisit_All_12->setToolTip(QCoreApplication::translate("MainWindow", "Visit All 12 Restaurants", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCustom_Trip->setText(QCoreApplication::translate("MainWindow", "Custom Trip", nullptr));
#if QT_CONFIG(tooltip)
        actionCustom_Trip->setToolTip(QCoreApplication::translate("MainWindow", "Customize a Trip to Take", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Restaurants:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Restaurant Name:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Miles to Saddleback College:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Choose", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Distances (miles) to other Fast Food restaurants", nullptr));
        editMenuInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter New Item", nullptr));
        SubmitChange->setText(QCoreApplication::translate("MainWindow", "Submit Change", nullptr));
        addMenu->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        deleteMenuItem->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        editNewItem->setPlaceholderText(QCoreApplication::translate("MainWindow", "New Item Name", nullptr));
        editNewPrice->setPlaceholderText(QCoreApplication::translate("MainWindow", "New Price", nullptr));
        SubmitNew->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        deleteRestaurant->setText(QCoreApplication::translate("MainWindow", "Delete Restaurant", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAdmin->setTitle(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        menuTrips->setTitle(QCoreApplication::translate("MainWindow", "Trips", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
