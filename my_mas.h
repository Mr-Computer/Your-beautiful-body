#ifndef MY_MAS_H
#define MY_MAS_H

#include <QDialog>

namespace Ui {
class My_mas;
}

class My_mas : public QDialog
{
    Q_OBJECT

public:
    explicit My_mas(QWidget *parent = 0);
    ~My_mas();

private slots:
    void on_pushButton_clicked();

private:
    Ui::My_mas *ui;
};

#endif // MY_MAS_H
