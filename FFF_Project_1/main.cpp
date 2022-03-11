#include "mainwindow.h"
#include <QtSql/QtSql>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    QSqlDatabase db;
    const QString DRIVER("QSQLITE");
    if (QSqlDatabase::isDriverAvailable(DRIVER))
        db = QSqlDatabase::addDatabase(DRIVER);
    QDir::setCurrent(QCoreApplication::applicationDirPath());
    QDir tempDir = QDir::currentPath();
    qDebug() << tempDir;
    tempDir.cdUp();
    tempDir.cdUp();

 QString s = tempDir.path() + "/FFF_Project_1";
 QDir::setCurrent(s);

    db.setDatabaseName("database.db");

    if (!db.open())
    {
        qDebug() << "problem opening database";
    }

    if (db.contains("restaurantList"))
    {
    QSqlQuery query("CREATE TABLE restaurantList (id INTEGER PRIMARY KEY, restaurantName TEXT, distanceToSaddleback FLOAT)");
    if(!query.isActive())
        qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO restaurantList VALUES(1, 'MacDonald''s', 8),(2, 'Chipotle', 4.29),(3,'Domino''s Pizza', 12.41),(4, 'KFC', 7.56),(5,'Subway',2.67),(6,'In-N-Out Burger',5.94),(7,'Wendy''s',8.44),(8,'Jack in the Box',12.75),(9,'El Pollo Loco',9.19),(10,'Papa John''s Pizza',14.54)"))
      qWarning() << "ERROR: " << query.lastError().text();


    if(!query.exec("CREATE TABLE menu (restaurantName TEXT, item TEXT, price FLOAT)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('MacDonald''s', 'Big Mac', 3.99),('MacDonald''s','French Fries',2.95),('MacDonald''s','Hamburger',1.79),('MacDonald''s','Double Cheeseburger',4.29),('MacDonald''s','Cheeseburger', 2.29),('MacDonald''s','Quarter Pounder with Cheese',4.99),('MacDonald''s','Filet-O-Fish',3.33),('MacDonald''s','McRib', 4.97)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('Chipotle','Veggie taco',5.99),('Chipotle','Veggie burrito',7.99),('Chipotle','Steak taco', 3.99),('Chipotle','Steak burrito', 8.99),('Chipotle','Chicken taco', 4.99),('Chipotle','Chicken burrito', 6.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('Domino''s Pizza','Veggie pizza',9.99),('Domino''s Pizza','Pepperoni pizza',8.99),('Domino''s Pizza','All meat pizza',12.99),('Domino''s Pizza','Cheese pizza',5.99),('Domino''s Pizza','Mushroom and pepperoni pizza',7.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('KFC','Three piece original fried chicken',6.99),('KFC','Bucket of crispy fried chicken ',13.99),('KFC','Mashed potatoes',5.99),('KFC','Cole slaw',5.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('Subway','Veggie sandwich',4.99),('Subway','Tuna sandwich',6.99),('Subway','Italian sandwich',7.99),('Subway','Turkey sandwich',5.99)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('In-N-Out Burger','Hamburger',2.99),('In-N-Out Burger','Cheeseburger',3.29),('In-N-Out Burger','Milk shake',2.99),('In-N-Out Burger','French fries',1.79),('In-N-Out Burger','Medium coke',2.35)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('Wendy''s','Hamburger',3.99),('Wendy''s','Cheeseburger',4.29),('Wendy''s','Small classic chocolate Frosty',2.99),('Wendy''s','French fries',1.79),('Wendy''s','Chicken wrap',4.39)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('Jack in the Box','Chicken club salad',6.99),('Jack in the Box','Southwest chicken salad',7.29),('Jack in the Box','Grilled chicken salad',5.99),('Jack in the Box','Side salad',1.79)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('El Pollo Loco','Monterrey pollo salad',6.99),('El Pollo Loco','Steamed vegetables',3.29),('El Pollo Loco','Chicken tortilla soup',5.29)"))
      qWarning() << "ERROR: " << query.lastError().text();

    if(!query.exec("INSERT INTO menu VALUES('Papa John''s Pizza','Veggie pizza',4.09),('Papa John''s Pizza','Pepperoni pizza',8.99),('Papa John''s Pizza','All meat pizza',12.99),('Papa John''s Pizza','Cheese pizza',5.99),('Papa John''s Pizza','Mushroom and pepperoni pizza',14.99)"))
      qWarning() << "ERROR: " << query.lastError().text();   
    }
    db.close();
    //QSqlDatabase::removeDatabase("database.db");
    const QString connectionName = db.connectionName();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectionName);

    w.show();
    return a.exec();
}
