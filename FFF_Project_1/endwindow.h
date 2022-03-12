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

private:
    Ui::endwindow *ui;
};

#endif // ENDWINDOW_H
