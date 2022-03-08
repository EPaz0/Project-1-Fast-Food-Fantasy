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
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QAction *action10_Closest;
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
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListView *listView;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QListView *listView_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAdmin;
    QMenu *menuTrips;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionUpdate_List = new QAction(MainWindow);
        actionUpdate_List->setObjectName(QString::fromUtf8("actionUpdate_List"));
        actionLog_in = new QAction(MainWindow);
        actionLog_in->setObjectName(QString::fromUtf8("actionLog_in"));
        actionLog_out = new QAction(MainWindow);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        action10_Closest = new QAction(MainWindow);
        action10_Closest->setObjectName(QString::fromUtf8("action10_Closest"));
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
        listWidget->setGeometry(QRect(20, 40, 191, 441));
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
        layoutWidget1->setGeometry(QRect(250, 100, 471, 191));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        listView = new QListView(layoutWidget1);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_2->addWidget(listView);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        listView_2 = new QListView(layoutWidget1);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));

        verticalLayout->addWidget(listView_2);


        horizontalLayout_2->addLayout(verticalLayout);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(500, 310, 275, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 490, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionUpdate_List);
        menuAdmin->addAction(actionLog_in);
        menuAdmin->addAction(actionLog_out);
        menuTrips->addAction(action10_Closest);
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
        action10_Closest->setText(QCoreApplication::translate("MainWindow", "10 Closest", nullptr));
#if QT_CONFIG(tooltip)
        action10_Closest->setToolTip(QCoreApplication::translate("MainWindow", "Plan a Trip to the Closest 10 Restaurants", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action10_Closest->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        action10_Closest->setWhatsThis(QString());
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
        label_3->setText(QCoreApplication::translate("MainWindow", "Menu Items: ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Distance (miles)\n"
"to other Fast Food restaurants", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Miles to Saddleback College:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Choose", nullptr));
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
