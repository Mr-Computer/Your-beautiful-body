#ifndef MY_DATA_H
#define MY_DATA_H

#include <QDialog>

namespace Ui {
class My_data;
}

class My_data : public QDialog
{
    Q_OBJECT

public:
    explicit My_data(QWidget *parent = 0);
    ~My_data();

private:
    Ui::My_data *ui;
};

#endif // MY_DATA_H
