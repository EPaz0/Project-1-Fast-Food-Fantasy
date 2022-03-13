#include "endwindow.h"
#include "ui_endwindow.h"


endwindow::endwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endwindow)
{
    ui->setupUi(this);
    connect(this,SIGNAL(backMain()), parent->parent(), SLOT(show()));
    connect(this,SIGNAL(Admin()), parent->parent(), SLOT(Admin()));
}

endwindow::~endwindow()
{
    delete ui;
}



void endwindow::on_pushButton_clicked()
{
    hide();
    if(admin == true)
        emit Admin();
    else
        emit backMain();
}

void endwindow::AdminCheck()
{
    admin = true;
}
