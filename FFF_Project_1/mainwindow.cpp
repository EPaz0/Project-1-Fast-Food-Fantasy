#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionUpdate_List->setDisabled(true);
    ui->actionLog_out->setDisabled(true);

    const QString DRIVER("QSQLITE");
    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
       // QString dbPath = QDir(QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)).filePath("database.db");
       // QFile::copy(":/database.db", dbPath);
         QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
         QDir::setCurrent(QCoreApplication::applicationDirPath());
         QDir tempDir = QDir::currentPath();
         qDebug() << tempDir;
         tempDir.cdUp();
         tempDir.cdUp();

      QString s = tempDir.path() + "/FFF_Project_1";


     QDir::setCurrent(s);
       // QString path = QCoreApplication::applicationDirPath() + "/database/efeis.sqlite";
        // QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
         db.setDatabaseName("database.db");
          if(!db.open())
            qWarning() << "ERROR: " << db.lastError();
          QSqlQuery query("CREATE TABLE people (id INTEGER PRIMARY KEY, name TEXT)");
          if(!query.isActive())
              qWarning() << "ERROR: " << query.lastError().text();
          //QSqlQuery query1;
          if(!query.exec("INSERT INTO people(name) VALUES('Eddie Guerrero')"))
            qWarning() << "ERROR: " << query.lastError().text();

          query.prepare("SELECT name FROM people WHERE id = ?");
          //query.addBindValue(mInputText->text().toInt());
          if(!query.exec())
            qWarning() << "ERROR: " << query.lastError().text();
//          if(query.first())
//            mOutputText->setText(query.value(0).toString());
//          else
//            mOutputText->setText("person not found");
    }
    else
        qWarning() << "ERROR: no driver";


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

