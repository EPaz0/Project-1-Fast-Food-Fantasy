#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <iomanip>

#include "restaurant.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->actionUpdate_List->setDisabled(true);
    ui->actionLog_out->setDisabled(true);
    ui->editMenu->setVisible(false);
    ui->editMenuInput->setVisible(false);
    ui->editMenuLabel->setVisible(false);




//read text file and put info into restaurant vector
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


    // add each restaurant in the restaurant list to the main listWidget
    for (int i = 0; i < restaurantList.size(); i++)
    {
        restaurant res = restaurantList.at(i);
        QListWidgetItem* item = new QListWidgetItem(res.getRestaurantName());  // add name of restaurant
        item->setData(Qt::UserRole, QString::number(res.getDistanceToSaddleback())); // store distance to Saddleback to the current widget item

        QVariant listMenuName;
        QList<QString> menuItemName;
        for (int i = 0; i < res.getMenu().size(); i++)
        {
            menuItemName.append(res.getMenu().at(i).itemName);
        }
        listMenuName = menuItemName;
        item->setData(Qt::Key_1, listMenuName);  // store menu name to the current widget item


        QList<QVariant> listMenuPrice;
        for (int i = 0; i < res.getMenu().size(); i++)
        {
            listMenuPrice.append(QString::number(res.getMenu().at(i).itemPrice));
        }
        item->setData(Qt::Key_2, listMenuPrice);  // store menu price to the current widget item


        QList<QVariant> distanceToOthers;
        QList<QString> distanceToOthersRestaurant;
        int restaurantId;
        for (int i = 0; i < res.getDistanceList().size(); i++)
        {
            if (res.getDistanceList().at(i).distance != 0.0)    // not display itself (ex: in McDonald not display McDonald 0.0)
            {
                distanceToOthers.append(QString::number(res.getDistanceList().at(i).distance));

                restaurantId = res.getDistanceList().at(i).toWhich;

                for (int j = 0; j < restaurantList.size(); j++)
                {
                  if (restaurantList.at(j).getRestaurantNumber() == restaurantId)
                     distanceToOthersRestaurant.append(restaurantList.at(j).getRestaurantName());
                }
            }
        }
        item->setData(Qt::Key_3, distanceToOthers);  // store distance to the current widget item
        item->setData(Qt::Key_4, distanceToOthersRestaurant); // store other restaurants' names to the current widget item


        ui->listWidget->insertItem(1, item);  // insert item with all info stored to widget

    }

}

MainWindow::~MainWindow()
{
    //QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
   // db = QSqlDatabase();
//    if(db.isOpen())
//    {
//        db.close();
//        const QString connectionName = db.connectionName();
//        db = QSqlDatabase();
//        QSqlDatabase::removeDatabase(connectionName);
//    }
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
    admin = true;
    ui->actionLog_in->setDisabled(true);
    ui->actionLog_out->setDisabled(false);
    ui->actionUpdate_List->setDisabled(false);
    ui->editMenu->setVisible(true);
    ui->editMenuInput->setVisible(true);
    ui->editMenuLabel->setVisible(true);
}

void MainWindow::on_actionLog_out_triggered()
{
    ui->actionLog_in->setDisabled(false);
    ui->actionLog_out->setDisabled(true);
    ui->actionUpdate_List->setDisabled(true);
    ui->editMenu->setVisible(false);
    ui->editMenuInput->setVisible(false);
    ui->editMenuLabel->setVisible(false);
}

void MainWindow::on_action10_Closet_triggered()
{
    hide();
    tripFromSaddleback = new ClosestTrip(this);
    connect(this,SIGNAL(isAdmin()), tripFromSaddleback, SLOT(isAdmin()));
    if(admin == true)
        emit isAdmin();
    tripFromSaddleback->show();

}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget_price->clear();
    ui->listWidget_item->clear();
    ui->listWidget_distance->clear();
    ui->listWidget_name->clear();

    // once a restaurant is chosen from the listWidget, its information will be displayed
    ui->lineEdit->setText(ui->listWidget->currentItem()->text());  // display restaurant  name


    ui->lineEdit_2->setText(ui->listWidget->currentItem()->data(Qt::UserRole).toString()); // display distance to Saddleback College

    // display menu list
    QVariant listMenuName = (ui->listWidget->currentItem()->data(Qt::Key_1));
    QList<QString> q = listMenuName.toStringList();
    for (int i = 0; i < q.size(); i++)
    {
        ui->listWidget_item->addItem(q.at(i));
    }

    // display item menu price
    QVariant listMenuPrice = (ui->listWidget->currentItem()->data(Qt::Key_2));
    QList<QString> p = listMenuPrice.toStringList();
    for (int i = 0; i < p.size(); i++)
    {
        ui->listWidget_price->addItem("$" + p.at(i));
    }

    // display distance
    QVariant listDistance = (ui->listWidget->currentItem()->data(Qt::Key_3));
    QList<QString> j = listDistance.toStringList();
    for (int i = 0; i < j.size(); i++)
    {
        ui->listWidget_distance->addItem(j.at(i) + " miles");
    }


    // display distance
    QVariant listRestaurantName = (ui->listWidget->currentItem()->data(Qt::Key_4));
    QList<QString> k = listRestaurantName.toStringList();
    for (int i = 0; i < k.size(); i++)
    {
        ui->listWidget_name->addItem(k.at(i));
    }
}




void MainWindow::on_editMenu_clicked()
{
    ui->listWidget_price->clear();
    ui->listWidget_item->clear();
    ui->listWidget_distance->clear();
    ui->listWidget_name->clear();

    // once a restaurant is chosen from the listWidget, its information will be displayed
    ui->lineEdit->setText(ui->listWidget->currentItem()->text());  // display restaurant  name


    ui->lineEdit_2->setText(ui->listWidget->currentItem()->data(Qt::UserRole).toString()); // display distance to Saddleback College

    // display menu list
    QVariant listMenuName = (ui->listWidget->currentItem()->data(Qt::Key_1));
    QList<QString> q = listMenuName.toStringList();
    for (int i = 0; i < q.size(); i++)
    {
        ui->listWidget_item->addItem(q.at(i));
    }

    // display item menu price
    QVariant listMenuPrice = (ui->listWidget->currentItem()->data(Qt::Key_2));
    QList<QString> p = listMenuPrice.toStringList();
    for (int i = 0; i < p.size(); i++)
    {
        ui->listWidget_price->addItem("$" + p.at(i));
    }

    // display distance
    QVariant listDistance = (ui->listWidget->currentItem()->data(Qt::Key_3));
    QList<QString> j = listDistance.toStringList();
    for (int i = 0; i < j.size(); i++)
    {
        ui->listWidget_distance->addItem(j.at(i) + " miles");
    }


    // display distance
    QVariant listRestaurantName = (ui->listWidget->currentItem()->data(Qt::Key_4));
    QList<QString> k = listRestaurantName.toStringList();
    for (int i = 0; i < k.size(); i++)
    {
        ui->listWidget_name->addItem(k.at(i));
    }

}


void MainWindow::on_listWidget_item_itemDoubleClicked(QListWidgetItem *item)
{

    QString MenuName = item->text();
    ui->listWidget_item->isEnabled();
    item->setFlags (item->flags () | Qt::ItemIsEditable);
    ui->listWidget_item->editItem(item);
    ui->editMenuInput->setText(MenuName);
}


void MainWindow::on_editMenuInput_returnPressed()
{

    const QString DRIVER("QSQLITE");

    if (QSqlDatabase::isDriverAvailable(DRIVER))
       {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);
    db.open();
    //QString restaurantname = (ui->listWidget->currentItem()->text());
    QString MenuName = ui->editMenuInput->text();
    QSqlQuery qry;
    //QString name;

//    QVariant listMenuName = (ui->listWidget->currentItem()->data(Qt::Key_1));
    //for (int i = 0; i < ui->listWidget->count() - 1; i++)
   // {
//int restaurantId = GetRestaurantIDUsingQSL(restaurantname);
        QString stringQry = "REPLACE INTO menu (item) VALUES  (" + MenuName + ")";
        qry.prepare(stringQry);
        qry.exec();
//        if (qry.exec())
//        {
//            while (qry.next())
//            {
//                totalDistance += qry.value(0).toFloat();
//            }
//        }
    //}
        db.close();
        QString connectionName = db.connectionName();
        db = QSqlDatabase();
        QSqlDatabase::removeDatabase(connectionName);
        ui->listWidget_item->currentItem()->text() = MenuName;
    }
}
int MainWindow::GetRestaurantIDUsingQSL(QString name)
{
    int id = 0;
    QSqlQuery qry;
    QString stringQry = "SELECT id FROM restaurantList WHERE restaurantName = '" + name + "'";
    qry.prepare(stringQry);
    if (qry.exec())
    {
        while (qry.next())
        {
            id = qry.value(0).toInt();
        }
    }
    return id;
}

