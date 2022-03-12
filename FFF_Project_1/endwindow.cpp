#include "endwindow.h"
#include "ui_endwindow.h"


endwindow::endwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endwindow)
{
    ui->setupUi(this);
}

endwindow::~endwindow()
{
    delete ui;
}


