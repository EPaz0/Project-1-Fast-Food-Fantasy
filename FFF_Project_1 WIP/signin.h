#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>

namespace Ui {
class Signin;
}

class Signin : public QDialog
{
    Q_OBJECT

public:
    explicit Signin(QWidget *parent = nullptr);
    ~Signin();

private slots:
    void on_OkButton_clicked();

    void on_CancelButton_clicked();


signals:
    void Admin();

private:
    Ui::Signin *ui;
};

#endif // SIGNIN_H
