#ifndef ENDWINDOW_H
#define ENDWINDOW_H

#include <QDialog>

namespace Ui {
class endwindow;
}

class endwindow : public QDialog
{
    Q_OBJECT

public:
    explicit endwindow(QWidget *parent = nullptr);
    ~endwindow();

private slots:
    void on_pushButton_clicked();

    void AdminCheck();

signals:
    void backMain();
    void Admin();

private:
    Ui::endwindow *ui;
    bool admin = false;
};

#endif // ENDWINDOW_H
