#include "customtrip.h"
#include "ui_customtrip.h"
#include <QMessageBox>
#include <QInputDialog>

customtrip::customtrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customtrip)
{
    ui->setupUi(this);

    connect(this,SIGNAL(Admin()), parent, SLOT(Admin()));
    connect(this,SIGNAL(Admin()), parent, SLOT(show()));
    connect(this,SIGNAL(backMain()), parent, SLOT(show()));

    QString dbPath = QCoreApplication::applicationDirPath() + "/restaurant.sqlite";
    db.setDatabaseName(dbPath);
    if (!db.open())
    {
        qDebug() << "problem opening database";
    }

    ui->listWidget_3->clear();

    qry.prepare("SELECT restaurantName FROM restaurantList");
    if(qry.exec())
    {
        while(qry.next())
        {
            QString restaurant = qry.value(0).toString();
            ui->listWidget_3->addItem(restaurant);
        }
    }
}

customtrip::~customtrip()
{
    delete ui;
}

void customtrip::isAdmin()
{
 admin = true;
}

QString customtrip::AddApostropheToString(QString restaurantname)
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

int customtrip::GetRestaurantIDUsingQSL(QString name)
{
   int id = 0;
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

QString customtrip::GetRestaurantNameUsingQSL(int id)
{
   QString name;
   QString stringQry = "SELECT restaurantName FROM restaurantList WHERE id = " + QString::number(id);
   qry.prepare(stringQry);
   if (qry.exec())
   {
       while (qry.next())
       {
           name = qry.value(0).toString();
       }
   }
   return name;
}


void customtrip::on_pushButton_3_clicked()
{
    db.close();
    const QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
    hide();
    if(admin == true)
        emit Admin();
    else
        emit backMain();
}


void customtrip::on_pushButton_6_clicked()
{
    db.close();
    const QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);
    hide();
    endWindow = new endwindow(this);
    if(admin == true)
        emit AdminCheck();

    endWindow->show();
}


void customtrip::on_pushButton_9_clicked()
{
    if (ui->listWidget_3->selectedItems().size() == 0)
        return;
    QString restaurant = ui->listWidget_3->currentItem()->text();
    ui->listWidget->addItem(restaurant);
    list.push_back(restaurant);
    ui->listWidget_3->currentItem()->setHidden(true);
    ui->listWidget_3->clearSelection();
    ui->listWidget_3->setSelectionMode(QAbstractItemView::MultiSelection);
    ui->pushButton_9->setDisabled(true);
}


void customtrip::on_pushButton_10_clicked()
{
    if(ui->listWidget_3->selectedItems().size() == 0)
        return;
    QMessageBox::StandardButton reply = QMessageBox::question(this,
                                                   "You sure?",
                                                   "You cannot change your selection later.",
                                                   QMessageBox::Yes|QMessageBox::No);
    if(reply != QMessageBox::Yes)
        return;
    QList<QListWidgetItem*> items = ui->listWidget_3->selectedItems();
    foreach(QListWidgetItem* item, items)
    {
        list.push_back(item->text());
        item->setHidden(true);
    }
    int size = list.size();
    for(int i=1; i<size; i++)
    {
        QString res1Name = list.at(0);
        res1Name = AddApostropheToString(res1Name);
        int res1ID = GetRestaurantIDUsingQSL(res1Name);
        list.pop_front();
        double minimumDist = 100;
        int index = 0;
        for(int j=0; j<list.size(); j++)
        {
            QString res2Name = list.at(j);
            res2Name = AddApostropheToString(res2Name);
            int res2ID = GetRestaurantIDUsingQSL(res2Name);
            QString stringQry = "SELECT distance FROM distances WHERE fromRestaurant = "+ QString::number(res1ID)+" AND toRestaurant = "+ QString::number(res2ID);
            qry.prepare(stringQry);
            if(qry.exec())
            {
                while(qry.next())
                {
                    double dist = qry.value(0).toDouble();
                    if(dist < minimumDist)
                    {
                        minimumDist = dist;
                        index = j;
                    }
                }
            }
        }
        ui->listWidget->addItem(list.at(index));
        list.swapItemsAt(0,index);
    }
    ui->pushButton_10->setDisabled(true);

    double totalDistance = 0;
    QString firstRes = ui->listWidget->item(0)->text();
    firstRes = AddApostropheToString(firstRes);
    int firstResNum = GetRestaurantIDUsingQSL(firstRes);
    qry.prepare("SELECT distancetoSaddleback FROM restaurantList WHERE id = "+QString::number(firstResNum));
    if (qry.exec())
    {
        while (qry.next())
        {
             totalDistance+=qry.value(0).toDouble();
        }
    }

    QString name;
    int restaurantID1;
    int restaurantID2;

   for (int i = 0; i < ui->listWidget->count() - 1; i++)
   {
       QListWidgetItem* item1 = ui->listWidget->item(i);
       name = item1->text();
       name = AddApostropheToString(name);
       restaurantID1 = GetRestaurantIDUsingQSL(name);

       QListWidgetItem* item2 = ui->listWidget->item(i + 1);
       name = item2->text();
       name = AddApostropheToString(name);
       restaurantID2 = GetRestaurantIDUsingQSL(name);

       QString stringQry = "SELECT distance FROM distances WHERE fromRestaurant = " + QString::number(restaurantID1) + " AND toRestaurant = " + QString::number(restaurantID2);
       qry.prepare(stringQry);
       if (qry.exec())
       {
           while (qry.next())
           {
               totalDistance += qry.value(0).toDouble();
           }
       }
   }

   ui->lineEdit_totalDistance_3->setText(QString::number(totalDistance) + " miles");
}

// this is the action set when "choose" button is clicked
// purpose: display menu (item and prices)
void customtrip::on_pushButton_4_clicked()
{
    ui->listWidget_menu->clear();
    ui->listWidget_price->clear();
    ui->listWidget_cartItem->clear();
    ui->listWidget_cartPrice->clear();
    ui->lineEdit_totalOnRest->clear();

    if (ui->listWidget->selectedItems().size() != 0)  // check if restaurant is selected or not
    {
        QString restaurantname = ui->listWidget->currentItem()->text();
        ui->name->setText(restaurantname); // display restaurant  name
        restaurantname = AddApostropheToString(restaurantname);


        int restaurantId = GetRestaurantIDUsingQSL(restaurantname);


        // display menu and price
        QString menuItem;
        QString price;
        QString stringQry;
        stringQry = "SELECT * FROM menu WHERE restaurantID = " + QString::number(restaurantId);
        qry.prepare(stringQry);  // pass the stringQry to the SQL query
        if (qry.exec())
        {
            while (qry.next())
            {
                menuItem = qry.value(1).toString();   // in here, 1 specifies column 2 of menu table (item)
                ui->listWidget_menu->addItem(menuItem); // add menu item to the listWidget_menu
                price = qry.value(2).toString();    // in here, 2 specifies column 3 of menu table (price)
                ui->listWidget_price->addItem("$" + price);  // add price to the listWidget_price
            }
        }
    }
}

// this is the action set when "add" button is clicked
// purpose: add menuitem to cart
void customtrip::on_pushButton_clicked()
{
    ui->lineEdit_totalOnRest->clear();

   if (ui->listWidget_menu->selectedItems().size() != 0)
   {

        QString currentItem = ui->listWidget_menu->currentItem()->text();
        QListWidgetItem* item = new QListWidgetItem(currentItem);
        ui->listWidget_cartItem->addItem(item);   // add menu item name to cart widget

        QString restaurantname = ui->listWidget->currentItem()->text();
        // change to sql query format when string contains apostrophe
        restaurantname = AddApostropheToString(restaurantname);

        int restaurantId = GetRestaurantIDUsingQSL(restaurantname);

        float price = 0;  // get the price, having menuitem and restaurant id
        QString stringQry;
        stringQry = "SELECT price FROM menu WHERE restaurantID = '" + QString::number(restaurantId) + "'" + " AND item = '" + currentItem + "'";
        qry.prepare(stringQry);
        if (qry.exec())
        {
            while (qry.next())
            {
                price = qry.value(0).toFloat();
            }
        }


        ui->listWidget_cartPrice->addItem(QString::number(price));   // add price to cart widget

        /*
         * Used QInputDialog to prompt the user for the quantity of an item
         * (QInputDialog itself has settings to create limitation for the number entered.)
         */
        bool ok = false;
        int quantity;
        while(!ok)
        {
            quantity = QInputDialog::getInt(this, tr("QInputDialog::getInt()"),
                                         tr("Quantity:"), 1, 0, 100, 1, &ok);
        }
        ui->listWidget_2->addItem(QString::number(quantity));
    }
}

// this is the action set when "remove" button is clicked
// purpose: delete menuitem from cart
void customtrip::on_pushButton_2_clicked()
{
    QList<QListWidgetItem*> items = ui->listWidget_cartItem->selectedItems();

    foreach(QListWidgetItem* item, items){
        int row = ui->listWidget_cartItem->row(item);
        QListWidgetItem* itemPrice = ui->listWidget_cartPrice->item(row);
        ui->listWidget_cartItem->removeItemWidget(item);
        ui->listWidget_cartPrice->removeItemWidget(itemPrice);
        delete item;
        delete itemPrice;

        /*
         * Used the middle column (the listWidget in the middle) to display the quantity associated with each ordered item
         */
        QListWidgetItem* itemQuantity = ui->listWidget_2->item(row);
        ui->listWidget_2->removeItemWidget(itemQuantity);
        delete itemQuantity;
    }
}

// when done button is clicked
void customtrip::on_pushButton_5_clicked()
{
    /*
     * This section of code checks if any item has an accumulative quantity of over 100,
     * if so, a message box pops out and the function ends there
     */
    for(int i=0; i<ui->listWidget_cartItem->count();i++)
    {
        QListWidgetItem* temp1 = ui->listWidget_cartItem->item(i);
        QString checkingRestaurant = temp1->text();
        int count =0;
        for(int j=0; j<ui->listWidget_cartItem->count(); j++)
        {
            QListWidgetItem* itemName = ui->listWidget_cartItem->item(j);
            if(itemName->text() == checkingRestaurant)
            {
                count += ui->listWidget_2->item(j)->text().toInt();
            }
        }
        if(count > 100)
        {
            QMessageBox::critical(this, "\"Quantity Limit Exceeded\"", "We're sorry, but we do not allow ordering more than 100 of the same menu item. Please remove items accordingly. Thank you.");
            return;
        }
    }

    float totalSpentOnRestaurant = 0.0;
    for (int i = 0; i < ui->listWidget_cartPrice->count(); i++)
    {
        QListWidgetItem* item = ui->listWidget_cartPrice->item(i);
        totalSpentOnRestaurant += item->text().toFloat() * ui->listWidget_2->item(i)->text().toInt();
    }

    ui->lineEdit_totalOnRest->setText("$" + QString::number(totalSpentOnRestaurant));

    totalSpendingOnTrip += totalSpentOnRestaurant;  // add total spent on this restaurant to total spent on trip
    ui->lineEdit_totalSpentTrip_3->setText("$" + QString::number(totalSpendingOnTrip));  // update/display total spent on trip

    ui->listWidget_cartItem->clear();
    ui->listWidget_cartPrice->clear();
    ui->listWidget_2->clear();
}

