#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <iomanip>
#include <QMessageBox>

#include "restaurant.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->actionUpdate_List->setDisabled(true);
    ui->actionLog_out->setDisabled(true);
    ui->editMenuInput->setVisible(false);
    ui->SubmitChange->setVisible(false);
    ui->addMenu->setVisible(false);
    ui->deleteMenuItem->setVisible(false);
    ui->editNewItem->setVisible(false);
    ui->editNewPrice->setVisible(false);
    ui->SubmitNew->setVisible(false);

    const QString DRIVER("QSQLITE");

    if (QSqlDatabase::isDriverAvailable(DRIVER))
    {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);
    QSqlQuery qry(db);

    if (!db.open())
    {
        qDebug() << "problem opening database";
    }
    ui->listWidget->clear();

    int resID;
    QString resName;
    float distanceFromSaddleback;
    QString stringQry;

    qry.prepare("SELECT * FROM restaurantList");
    if (qry.exec())
    {
        while (qry.next())
        {
            resName = qry.value(1).toString();
            ui->listWidget->addItem(resName);   // add restaurant name to the list widget, display
            distanceFromSaddleback = qry.value(2).toFloat();
            resID = qry.value(0).toInt();

            restaurant resObj;  // create each restaurant obj and set info
            resObj.setRestaurantName(resName);
            resObj.setDistanceToSaddleback(distanceFromSaddleback);
            resObj.setRestaurantNumber(resID);

            // add menu list
            menuItem eachMenuItem;
            QList<menuItem> resMenu;
            QSqlQuery subQuery;
            stringQry = "SELECT item,price FROM menu WHERE restaurantID = " + QString::number(resID);
            subQuery.prepare(stringQry);

            if (subQuery.exec())
            {
                while (subQuery.next())
                {
                    eachMenuItem.itemName = subQuery.value(0).toString();
                    eachMenuItem.itemPrice = subQuery.value(1).toFloat();
                    resMenu.append(eachMenuItem);
                }
            }
            else
                qDebug() << "ERROR: unable to get menu item, price from database";

            resObj.setMenu(resMenu);  // set the menu of restaurant obj

            // add distance list
            distanceInfo eachDistance;
            QVector<distanceInfo> resDistance;
            stringQry = "SELECT toRestaurant, distance FROM distances WHERE fromRestaurant = " + QString::number(resID);
            subQuery.prepare(stringQry);
            if (subQuery.exec())
            {
                while (subQuery.next())
                {
                    eachDistance.toWhich  = subQuery.value(0).toInt();
                    eachDistance.distance = subQuery.value(1).toFloat();
                    resDistance.append(eachDistance);
                }
            }
            else
                qDebug() << "ERROR: unable to get menu distance from other restaurant from database";

            resObj.setDistanceList(resDistance); // set the distance list of restaurant obj



            // add this restaurant to the restaurant list
            restaurantList.append(resObj);
        }
    }
    db.close();
    QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
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
    admin = true;
    ui->actionLog_in->setDisabled(true);
    ui->actionLog_out->setDisabled(false);
    ui->actionUpdate_List->setDisabled(false);
    ui->editMenuInput->setVisible(true);
    ui->SubmitChange->setVisible(true);
    ui->addMenu->setVisible(true);
    ui->deleteMenuItem->setVisible(true);
}

void MainWindow::on_actionLog_out_triggered()
{
    ui->actionLog_in->setDisabled(false);
    ui->actionLog_out->setDisabled(true);
    ui->actionUpdate_List->setDisabled(true);
    ui->editMenuInput->setVisible(false);
    ui->SubmitChange->setVisible(false);
    ui->addMenu->setVisible(false);
    ui->deleteMenuItem->setVisible(false);
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

void MainWindow::on_actionShortest_Trip_triggered()
{
    hide();
    tripFromDomino = new ShorttestTripFromDomino(this);
    connect(this,SIGNAL(isAdmin()), tripFromDomino, SLOT(isAdmin()));
    if (admin == true)
        emit isAdmin();
    tripFromDomino->show();
}

void MainWindow::on_actionCustom_Trip_triggered()
{
    hide();
    tripCustomized = new customtrip(this);
    connect(this,SIGNAL(isAdmin()), tripCustomized, SLOT(isAdmin()));
    if (admin == true)
        emit isAdmin();
    tripCustomized->show();
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget_price->clear();
    ui->listWidget_item->clear();
    ui->listWidget_distance->clear();
    ui->listWidget_name->clear();

    restaurant thisRestaurant;

    // once a restaurant is chosen from the listWidget, its information will be displayed
    QString resName = ui->listWidget->currentItem()->text();
    ui->lineEdit->setText(resName);  // display restaurant  name

    for (int i = 0; i < restaurantList.size(); i++)
    {
        if (restaurantList[i].getRestaurantName() == resName)
            thisRestaurant = restaurantList[i];
    }

    // display distance to Saddleback
    ui->lineEdit_2->setText(QString::number(thisRestaurant.getDistanceToSaddleback()));

    // display menu (item names and item prices)
    QList<menuItem> resMenu = thisRestaurant.getMenu();
    for (int i = 0; i < resMenu.size(); i++)
    {
        ui->listWidget_item->addItem(resMenu.at(i).itemName);
        ui->listWidget_price->addItem("$" + QString::number(resMenu.at(i).itemPrice));
    }

    // display distance to others
    QVector<distanceInfo> resDistanceList = thisRestaurant.getDistanceList();
    QString toWhichName;
    for (int i = 0; i < resDistanceList.size(); i++)
    {
        toWhichName = GetRestaurantNameUsingQSL(resDistanceList.at(i).toWhich);
        ui->listWidget_name->addItem(toWhichName);
        ui->listWidget_distance->addItem(QString::number(resDistanceList.at(i).distance));
    }

}

void MainWindow::on_listWidget_item_itemDoubleClicked(QListWidgetItem *item)
{

    QString MenuName = item->text();
    ui->editMenuInput->clear();
    ui->editMenuInput->setPlaceholderText(MenuName);
}


QString MainWindow::GetRestaurantNameUsingQSL(int id)
{
   QString name;

   //reopen database
  const QString DRIVER("QSQLITE");
  if (QSqlDatabase::isDriverAvailable(DRIVER))
     {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
  QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
  db.setDatabaseName(dbPath);
  db.open();

   QSqlQuery qry(db);
   QString stringQry = "SELECT restaurantName FROM restaurantList WHERE id = " + QString::number(id);
   qry.prepare(stringQry);
   if (qry.exec())
   {
       while (qry.next())
       {
           name = qry.value(0).toString();
       }
   }
   else
       qDebug() << "ERROR: unable to get restaurantname from database";

   db.close();
   QString connectionName = db.connectionName();
   db = QSqlDatabase();
   QSqlDatabase::removeDatabase(connectionName);
   }

   return name;
}


int MainWindow::GetRestaurantIDUsingQSL(QString name)
{
    int id = 0;
    const QString DRIVER("QSQLITE");
    if (QSqlDatabase::isDriverAvailable(DRIVER))
       {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);
    db.open();

    if (!db.open())
    {
        qDebug() << "problem opening database";
    }
    QSqlQuery qry(db);
    QString stringQry = "SELECT id FROM restaurantList WHERE restaurantName = '" + name + "'";
    qry.prepare(stringQry);
    if (qry.exec())
    {
        while (qry.next())
        {
            id = qry.value(0).toInt();
        }
    }
    else
        qDebug() << "ERROR: couldn't get id";
    db.close();
    QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
    }
    return id;
}

double MainWindow::GetRestaurantPriceUsingQSL(QString name, QString menuItem)
{
    double price = 0;

    int id = GetRestaurantIDUsingQSL(name);
    const QString DRIVER("QSQLITE");
    if (QSqlDatabase::isDriverAvailable(DRIVER))
       {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);
    db.open();
    if (!db.open())
    {
        qDebug() << "problem opening database";
    }

    QSqlQuery qry;
    QString stringQry = "SELECT * FROM menu WHERE restaurantID = " + QString::number(id) + " AND item = '" + menuItem + "'";
    qry.prepare(stringQry);
    if (qry.exec())
    {
        while (qry.next())
        {
            price = qry.value(2).toDouble();
        }
    }
    else
        qDebug() << "ERROR: couldn't get price";
    QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
    }
    return price;
}



void MainWindow::on_SubmitChange_clicked()
{
    QListWidgetItem* cur = ui->listWidget_price->currentItem();

  if(ui->listWidget_item->currentItem()->isSelected() && ui->listWidget->currentItem()->isSelected() && (cur == NULL))
    {
         QString MenuName = ui->editMenuInput->text();
         QString restaurantname = ui->listWidget->currentItem()->text();
         QString MenuItem = ui->listWidget_item->currentItem()->text();
         QString restName = AddApostropheToString(restaurantname);
         int restaurantId = GetRestaurantIDUsingQSL(restName);
         double prices = GetRestaurantPriceUsingQSL(restName, MenuItem);

         restaurant thisRestaurant;
         QString resName = ui->listWidget->currentItem()->text();

         for (int i = 0; i < restaurantList.size(); i++)
         {
             if (restaurantList[i].getRestaurantName() == resName)
                 thisRestaurant = restaurantList[i];
         }
         QList<menuItem> resMenu = thisRestaurant.getMenu();
         menuItem eachmenuItem;
         eachmenuItem = resMenu.at(ui->listWidget_item->currentRow());
         eachmenuItem.itemName = MenuName;
             resMenu.replace(ui->listWidget_item->currentRow(), eachmenuItem);

     thisRestaurant.setMenu(resMenu);
     restaurantList[restaurantId-1] = thisRestaurant;

         //reopen database
        const QString DRIVER("QSQLITE");
        if (QSqlDatabase::isDriverAvailable(DRIVER))
           {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
        QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
        db.setDatabaseName(dbPath);
        db.open();

         QSqlQuery qry(db);

        QString stringQry = "UPDATE menu SET item = '" + MenuName + "' WHERE restaurantID = " + QString::number(restaurantId) + " AND item = '" + MenuItem + "' AND price = " + QString::number(prices);
        qry.prepare(stringQry);
        if(!qry.exec(stringQry))
            qWarning() << "ERROR: UPDATING menu" << qry.lastError().text();
        if(MenuItem != MenuName)
            qDebug() << "Menu Item Updated ";


    ui->listWidget_item->currentItem()->setText(MenuName);
    db.close();
    QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
    }
  }
    else
   {
   QString MenuPrice = ui->editMenuInput->text();
   QString restaurantname = ui->listWidget->currentItem()->text();
   QString MenuItem = ui->listWidget_item->currentItem()->text();
   QString Price = ui->listWidget_price->currentItem()->text();

      QString restName = AddApostropheToString(restaurantname);
        int restaurantId = GetRestaurantIDUsingQSL(restName);

        restaurant thisRestaurant;
        QString resName = ui->listWidget->currentItem()->text();

        for (int i = 0; i < restaurantList.size(); i++)
        {
            if (restaurantList[i].getRestaurantName() == resName)
                thisRestaurant = restaurantList[i];
        }
        QList<menuItem> resMenu = thisRestaurant.getMenu();
        menuItem eachmenuItem;
        eachmenuItem = resMenu.at(ui->listWidget_item->currentRow());
        eachmenuItem.itemPrice = MenuPrice.toFloat();
            resMenu.replace(ui->listWidget_item->currentRow(), eachmenuItem);

    thisRestaurant.setMenu(resMenu);
    restaurantList[restaurantId-1] = thisRestaurant;

        const QString DRIVER("QSQLITE");
        if (QSqlDatabase::isDriverAvailable(DRIVER))
           {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
        QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
        db.setDatabaseName(dbPath);
        db.open();

        QSqlQuery qry(db);
        QString stringQry = "UPDATE menu SET price = " + MenuPrice + " WHERE restaurantID = " + QString::number(restaurantId) + " AND item = '" + MenuItem + "'";
        qry.prepare(stringQry);
        if(!qry.exec(stringQry))
            qWarning() << "ERROR: UPDATING menu" << qry.lastError().text();
        if(Price != MenuPrice)
            qDebug() << "Menu Price Updated ";


    ui->listWidget_price->currentItem()->setText("$" + MenuPrice);


  db.close();
  QString connectionName = db.connectionName();
  db = QSqlDatabase();
  QSqlDatabase::removeDatabase(connectionName);
          }
   }
}

QString MainWindow::AddApostropheToString(QString restaurantname)
{
    // change to sql query format when string contains apostrophe (need to add one more ' to the query)


    if(restaurantname.contains("’") || restaurantname.contains('\''))
    {
        auto parts = restaurantname.split(QLatin1Char('s'));
        QString first = parts.at(0);
        QString second = parts.at(1);

        first.chop(1);
        restaurantname = first + "\'\'s" + second;
    }

    return restaurantname;
}


void MainWindow::on_listWidget_price_itemDoubleClicked(QListWidgetItem *item)
{
    item->setSelected(false);
    ui->listWidget_price->setCurrentItem(NULL);
}


void MainWindow::on_deleteMenuItem_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        QSqlQuery qry;

        db.setDatabaseName("restaurant.sqlite");
        QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
        db.setDatabaseName(dbPath);

        if (!db.open())
        {
            qDebug() << "problem opening database";
        }
    int restaurantSelected = 11;
        if(restaurantSelected != -1)
        {
            QString stringQry;
            QString DeleteMenu;
            QString DeleteDistance;


            QListWidgetItem *it = ui->listWidget->takeItem(restaurantSelected);

            stringQry = "DELETE FROM restaurantList  WHERE id = " + QString::number(restaurantSelected);
            qry.prepare(stringQry);
            qry.exec();

            DeleteMenu = "DELETE FROM menu  WHERE restaurantID = " + QString::number(restaurantSelected);
            qry.prepare(DeleteMenu);
            qry.exec();

            DeleteDistance = "DELETE FROM distances  WHERE fromRestaurant = " + QString::number(restaurantSelected);
            qry.prepare(DeleteDistance);
            qry.exec();

           // qry.prepare("DELETE restaurantList. menu FROM menu INNER JOIN menu reststaurantList.id = menu.restaurantID");

            /*stringQry =  "DELETE FROM menu WHERE restaurantID = " + QString::number(restaurantSelected);
            qry.prepare(stringQry);
            stringQry =  "DELETE FROM distances WHERE fromRestaurant = " + QString::number(restaurantSelected);
            qry.prepare(stringQry);*/

            if(qry.exec())
            {
                ui->listWidget_price->clear();
                ui->listWidget_item->clear();
                ui->listWidget_distance->clear();
                ui->listWidget_name->clear();
                ui->lineEdit->clear();
                ui->lineEdit_2->clear();
                ui->listWidget->setCurrentRow(-1);
                QMessageBox::critical(this,tr("Delete"),tr("Deleted"));
                delete it;


            }

        }
        //restaurantSelected = 0;
        db.close();
        QString connectionName = db.connectionName();
        db = QSqlDatabase();
        QSqlDatabase::removeDatabase(connectionName);

    QString restaurantname = ui->listWidget->currentItem()->text();
    QString MenuItem = ui->listWidget_item->currentItem()->text();
    QString restName = AddApostropheToString(restaurantname);
    int restaurantId = GetRestaurantIDUsingQSL(restName);
    double prices = GetRestaurantPriceUsingQSL(restName, MenuItem);

    restaurant thisRestaurant;
    QString resName = ui->listWidget->currentItem()->text();

    for (int i = 0; i < restaurantList.size(); i++)
    {
        if (restaurantList[i].getRestaurantName() == resName)
            thisRestaurant = restaurantList[i];
    }
    QList<menuItem> resMenu = thisRestaurant.getMenu();
    menuItem eachmenuItem;
        resMenu.removeAt(ui->listWidget_item->currentRow());

thisRestaurant.setMenu(resMenu);
restaurantList[restaurantId-1] = thisRestaurant;

    const QString DRIVER("QSQLITE");
    if (QSqlDatabase::isDriverAvailable(DRIVER))
       {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);
    db.open();

    QSqlQuery qry(db);
    QString stringQry = "DELETE FROM menu WHERE price = " + QString::number(prices) + " AND restaurantID = " + QString::number(restaurantId) + " AND item = '" + MenuItem + "'";
    qry.prepare(stringQry);
    if(!qry.exec(stringQry))
        qWarning() << "ERROR: Deleting from menu" << qry.lastError().text();





    ui->listWidget_item->currentItem()->setHidden(true);
    ui->listWidget_item->currentItem()->setText("");
    ui->listWidget_price->setCurrentRow(ui->listWidget_item->currentRow());
    ui->listWidget_price->currentItem()->setText("");
    ui->listWidget_price->currentItem()->setHidden(true);
    db.close();
    QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
    }
}


void MainWindow::on_addMenu_clicked()
{
    //enable new menu item edits and submit button
    ui->editNewItem->setVisible(true);
    ui->editNewPrice->setVisible(true);
    ui->SubmitNew->setVisible(true);
}


void MainWindow::on_SubmitNew_clicked()
{
    //add new item and price to list
    QListWidgetItem* ItemName = new QListWidgetItem(ui->editNewItem->text());
    QListWidgetItem* ItemPrice = new QListWidgetItem("$" + ui->editNewPrice->text());
    ui->listWidget_item->addItem(ItemName);
    ui->listWidget_price->addItem(ItemPrice);

    //get current restaurant name and add new info to the database
    QString restaurantname = ui->listWidget->currentItem()->text();
    QString restName = AddApostropheToString(restaurantname);
      int restaurantId = GetRestaurantIDUsingQSL(restName);

      restaurant thisRestaurant;
      QString resName = ui->listWidget->currentItem()->text();

      for (int i = 0; i < restaurantList.size(); i++)
      {
          if (restaurantList[i].getRestaurantName() == resName)
              thisRestaurant = restaurantList[i];
      }

      QList<menuItem> resMenu = thisRestaurant.getMenu();
      menuItem eachMenuItem;
              eachMenuItem.itemName = ui->editNewItem->text();
              eachMenuItem.itemPrice = (ui->editNewPrice->text().toFloat());
                 resMenu.append(eachMenuItem);
thisRestaurant.setMenu(resMenu);
restaurantList[restaurantId-1] = thisRestaurant;

      const QString DRIVER("QSQLITE");
      if (QSqlDatabase::isDriverAvailable(DRIVER))
         {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
      QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
      db.setDatabaseName(dbPath);
      db.open();
      QSqlQuery qry(db);

      qry.prepare("INSERT INTO menu VALUES(:restaurantID, :item, :price)");
      qry.bindValue(":restaurantID", restaurantId);
      qry.bindValue(":item", ui->editNewItem->text());
      qry.bindValue(":price", ui->editNewPrice->text());
      if(!qry.exec())
          qWarning() << "ERROR: UPDATING menu" << qry.lastError().text();

      db.close();
      QString connectionName = db.connectionName();
      db = QSqlDatabase();
      QSqlDatabase::removeDatabase(connectionName);

           }
}


void MainWindow::on_listWidget_price_itemClicked(QListWidgetItem *item)
{
    int row = ui->listWidget_price->currentRow();
    ui->listWidget_item->setCurrentRow(row);
}


void MainWindow::on_actionUpdate_List_triggered()
{
//QMessageBox Wait;
//Wait.setText("Please Wait");
//Wait.exec();
    QFile file(":/txt/CS1D Spring 2022 New Fast Food Project.txt");
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            restaurant *aRestaurant;

            QTextStream in(&file);
            while (!in.atEnd())
            {   qWarning() << "opening file SIZE: " << restaurantList.size();
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
                    item.itemPrice = line.toDouble();
                    aMenu.append(item);
                }
                line = in.readLine();

                aRestaurant = new restaurant;
                aRestaurant -> setDistanceList(aDistanceList);
                aRestaurant -> setDistanceToSaddleback(aDistanceToSaddleback);
                aRestaurant -> setMenu(aMenu);
                aRestaurant -> setRestaurantName(aRestaurantName);
                aRestaurant -> setRestaurantNumber(aRestaurantNumber);
                qWarning() << aRestaurant->getRestaurantName() << " Number: " << aRestaurant->getRestaurantNumber();
                for(int i = 0; i < aRestaurant->getMenu().size(); i++)
                {
                    qWarning() << aRestaurant->getMenu().at(i).itemName;
                }

                restaurantList.append(*aRestaurant);
                delete aRestaurant;

            QString restaurantName;
            int restaurantNumber;
            int distToSaddle;
            //distanceInfo eachDistance;
            QVector<distanceInfo> resDistance;
            menuItem eachMenuItem;
            QList<menuItem> resMenu;

            restaurantName = restaurantList.at(restaurantList.count()-1).getRestaurantName();
            restaurantNumber = restaurantList.at(restaurantList.count()-1).getRestaurantNumber();
            resDistance = restaurantList.at(restaurantList.count()-1).getDistanceList();
            distToSaddle = restaurantList.at(restaurantList.count()-1).getDistanceToSaddleback();
            resMenu = restaurantList.at(restaurantList.count()-1).getMenu();

            const QString DRIVER("QSQLITE");
            if (QSqlDatabase::isDriverAvailable(DRIVER))
               {QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
            QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
            db.setDatabaseName(dbPath);
            db.open();
            QSqlQuery qry(db);


            qWarning() << "Restaurant: " << restaurantName << "id: " << restaurantNumber << " " << distToSaddle;
            qry.prepare("INSERT INTO restaurantList VALUES(:id, :restaurantName, :distanceToSaddleback)");
            qry.bindValue(":restaurantName", restaurantName);
            qry.bindValue(":id", restaurantNumber);
            qry.bindValue(":distanceToSaddleback", distToSaddle);
            if(!qry.exec())
                qWarning() << "ERROR: Adding new restaurants" << qry.lastError().text();
            QSqlQuery Subqry(db);
qWarning() << "Menu size:" << resMenu.size();
            for(int j = 0; j < resMenu.size(); j++)
            {
                qWarning()<< "menu id: " << restaurantNumber << " " << resMenu.at(j).itemName << " " << QString::number(resMenu.at(j).itemPrice);
            Subqry.prepare("INSERT INTO menu VALUES(:restaurantID, :item, :price)");
            Subqry.bindValue(":restaurantID", restaurantNumber);
            Subqry.bindValue(":item", resMenu.at(j).itemName);
            Subqry.bindValue(":price", QString::number(resMenu.at(j).itemPrice));
            if(!Subqry.exec())
                qWarning() << "ERROR: Adding new menus" << qry.lastError().text();
            }
            qWarning() << "distList size:" << resDistance.size();
            for(int j = 0; j < resDistance.size(); j++)
            {
            QSqlQuery subQuery(db);
            QString stringQry = ("INSERT INTO distances VALUES(:fromRestaurant, :toRestaurant, :distance)");
            subQuery.prepare(stringQry);
            if (subQuery.exec())
            {   qWarning()<< resDistance.at(j).toWhich << " " << resDistance.at(j).distance;
                subQuery.bindValue(":fromRestaurant", restaurantNumber);
                subQuery.bindValue(":toRestaurant", resDistance.at(j).toWhich);
                subQuery.bindValue(":distance", resDistance.at(j).distance);
                if(!subQuery.exec())
                    qWarning() << "ERROR: Adding new distances" << qry.lastError().text();
            }
            else
                qDebug() << "ERROR: unable to get menu distance from other restaurant from database";
            }
            db.close();
            QString connectionName = db.connectionName();
            db = QSqlDatabase();
            QSqlDatabase::removeDatabase(connectionName);
            qWarning() << "Adding " << restaurantName << "to name widget";

ui->listWidget->addItem(restaurantName);

}
}
            file.close();
            qWarning() << "End of file";
        }

    }
