#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QString>
#include <QTextStream>

#include "restaurant.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionUpdate_List->setDisabled(true);
    ui->actionLog_out->setDisabled(true);
    MainWindow::setToolTipDuration(500);

    QFile file(":/txt/CS1D_Spring_2022_Fast_Food_Project.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        restaurant *aRestaurant;

        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString aRestaurantName;
            int aRestaurantNumber;
            QVector<distanceInfo> aDistanceList;
            float aDistanceToSaddleback;
            QList<menuItem> aMenu;

            QString line = in.readLine();
            do
            {
                line.remove(0,1);
            }while(line.at(0)!=':');
            line.remove(0,1);
            line.remove(0,1);
            aRestaurantName = line;

            line = in.readLine();
            do
            {
                line.remove(0,1);
            }while(!line.at(0).isDigit());
            aRestaurantNumber = line.toInt();

            line = in.readLine();
            do
            {
                line.remove(0,1);
            }while(!line.at(0).isDigit());
            line.replace(" ", "");
            int numberOfDistances = line.toInt();

            for(int i=0;i<numberOfDistances;i++)
            {
                line = in.readLine();
                QString temp;
                do
                {
                    temp.push_back(line.at(0));
                    line.remove(0,1);
                }while(!line.at(0).isSpace());
                line.remove(0,1);
                distanceInfo info;
                info.toWhich = temp.toInt();
                info.distance = line.toFloat();
                aDistanceList.push_back(info);
            }

            line = in.readLine();
            QString anotherTemp;
            do
            {
                anotherTemp.push_back(line.at(0));
                line.remove(0,1);
            }while(!line.at(0).isSpace());
            aDistanceToSaddleback = anotherTemp.toFloat();

            line = in.readLine();
            anotherTemp = "";
            do
            {
                anotherTemp.push_back(line.at(0));
                line.remove(0,1);
            }while(!line.at(0).isSpace());
            int numberOfRestaurants;
            numberOfRestaurants = anotherTemp.toInt();

            for(int i=0;i<numberOfRestaurants;i++)
            {
                menuItem item;
                line = in.readLine();
                item.itemName = line;
                line = in.readLine();
                item.itemPrice = line.toFloat();
                aMenu.push_back(item);
            }
            line = in.readLine();

            aRestaurant = new restaurant;
            aRestaurant -> setDistanceList(aDistanceList);
            aRestaurant -> setDistanceToSaddleback(aDistanceToSaddleback);
            aRestaurant -> setMenu(aMenu);
            aRestaurant -> setRestaurantName(aRestaurantName);
            aRestaurant -> setRestaurantNumber(aRestaurantNumber);
            restaurantList.push_back(*aRestaurant);
            delete aRestaurant;
        }
        file.close();
    }
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

