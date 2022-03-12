#include "signin.h"
#include "ui_signin.h"
#include <QMessageBox>

Signin::Signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signin)
{
    ui->setupUi(this);
    connect(ui->CancelButton ,SIGNAL(clicked()), parent, SLOT(show()));
    connect(this,SIGNAL(Admin()), parent, SLOT(Admin()));
    connect(this,SIGNAL(Admin()), parent, SLOT(show()));
}

Signin::~Signin()
{
    delete ui;
}

void Signin::on_CancelButton_clicked()
{
    hide();
}


void Signin::on_OkButton_clicked()
{
    bool match = false;
    QString name = ui->UsernameLine->text();
    QString pass = ui->PasswordLine->text();
    if(name.isEmpty() == true || pass.isEmpty() == true)
      { QMessageBox::warning(this, "Warning", "Incorrect Input, please enter something valid");
       return;
       //show();
      }
    QString info = name + " " + pass;

        if(info == "Admin Admin")
        {
            match = true;
            hide();
            emit Admin();
        }

    if(match != true) {
         QMessageBox::warning(this, "Warning", "Incorrect Username or Password");
        return;
        //show();
    }

}

