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

    fileName = "fastfood.txt";
    DatabaseConnect();
    DatabaseInit();
    DatabasePopulate();
    model = new QSqlQueryModel;



}

MainWindow::~MainWindow()
{
    delete ui;
    delete model;
}

void MainWindow::DatabaseConnect()
{
    const QString DRIVER("QSQLITE");

    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

        db.setDatabaseName(":memory:");

        if(!db.open())
            qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
    } else
        qWarning() << "MainWindow::DatabaseConnect - ERROR: no driver " << DRIVER << " available";
}

void MainWindow::DatabaseInit()
{
    QSqlQuery query("CREATE TABLE fastfood (id INTEGER UNIQUE PRIMARY KEY, restaurantName TEXT, restaurantNum INTEGER, distanceMiles INTEGER, distanceSaddleback INTEGER);");
    if(!query.isActive())
        qWarning() << "MainWindow::DatabaseInit - ERROR: " << query.lastError().text();
}

void MainWindow::DatabasePopulate()
{
    QString q;
    QSqlQuery query;
    std::string restaurantName;
    std::string restaurantNum;
    std::string distanceMiles;
    std::string distanceSaddleback;
    std::ifstream infile;
    bool alreadyExist = false;
        infile.open(fileName);
        if (!infile) { std::cout << "Error: File not found or corrupt. " << std::endl; return; }
        while (getline(infile, restaurantName, '\t') && getline(infile, restaurantNum, '\t') && getline(infile, distanceMiles, '\t') && getline(infile, distanceSaddleback, '\t')){

                query.prepare("select * from fastfood where restaurantName=:restaurantName");
                query.bindValue(":restaurantName", QString::fromStdString(restaurantName));
                if (!query.exec()){
                    qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
                }
                alreadyExist = query.next();

                if (alreadyExist){
                    continue;
                }
                std::string s = "INSERT INTO fastfood (restaurantName, restaurantNum, distanceMiles, distanceSaddleback) VALUES (\"" + restaurantName + "\", \"" + restaurantNum+ "\", \"" + distanceMiles + "\", \"" + distanceSaddleback + "\");";
                        q = QString::fromStdString(s);

                        if(!query.exec(q))
                            qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
                    }
                    infile.close();

}

void MainWindow::on_restaurantView_clicked(const QModelIndex &index)
{
    criteria = index.siblingAtColumn(0).data().toString();
    row = index.row();
    QSqlQuery query;
    QString q = "SELECT * FROM fastfood WHERE restaurantName =\"" + criteria + "\"";
    query.exec(q);
    query.next();
    ui -> lineEditRestaurantName -> setText((query.value(1).toString()));
    ui -> lineEditSaddlebackMiles -> setText((query.value(4).toString()));
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




void MainWindow::on_pushButton_clicked()
{

        QString filename = QFileDialog::getOpenFileName(this, "Select Import File");
        fileName = filename.toStdString();
        QFile file(filename);

        if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot import file: " + file.errorString());
            return;
        }
        DatabasePopulate();



}

