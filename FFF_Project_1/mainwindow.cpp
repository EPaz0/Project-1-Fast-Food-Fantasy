#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionUpdate_List->setDisabled(true);
    ui->actionLog_out->setDisabled(true);
    MainWindow::setToolTipDuration(500);



    // sample code to create object and add it to the listWidget
    // The data is made up to test the functions and classes - use it to test the classes
    // Will modify and update when we get real data connected

    /*Restaurant res1;
    res1.setRestaurantName("Restaurant 1");
    res1.setDistancesToSaddleback(5.5);

    Restaurant res2;
    res2.setRestaurantName("Restaurant 2");
    res2.setDistancesToSaddleback(6.5);

    QListWidgetItem* item = new QListWidgetItem(res1.GetRestaurantName());
    item->setData(Qt::UserRole, res1.GetDistancesFromSaddleback());
    ui->listWidget->insertItem(1, item);

    QListWidgetItem* item2 = new QListWidgetItem(res2.GetRestaurantName());
    item2->setData(Qt::UserRole, res2.GetDistancesFromSaddleback());
    ui->listWidget->insertItem(2, item2);*/

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionLog_in_triggered()
{
    hide();
    signin = new Signin(this);
    signin->show();
}

void MainWindow::Admin()
{
    ui->actionLog_in->setDisabled(true);
    ui->actionLog_out->setDisabled(false);
    ui->actionUpdate_List->setDisabled(false);
}

void MainWindow::on_actionLog_out_triggered()
{
    ui->actionLog_in->setDisabled(false);
    ui->actionLog_out->setDisabled(true);
    ui->actionUpdate_List->setDisabled(true);
}


// action set when click on Choose button under the listWidget
void MainWindow::on_pushButton_clicked()
{
    // once a restaurant is chosen from the listWidget, its information will be displayed
    ui->lineEdit->setText(ui->listWidget->currentItem()->text());  // display restaurant  name
    ui->lineEdit_2->setText(ui->listWidget->currentItem()->data(Qt::UserRole).toString()); // display distance to Saddleback College
}



