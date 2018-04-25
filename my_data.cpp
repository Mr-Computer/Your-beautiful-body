#include "my_data.h"
#include "ui_my_data.h"

My_data::My_data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::My_data)
{
    ui->setupUi(this);
}

My_data::~My_data()
{
    delete ui;
}
