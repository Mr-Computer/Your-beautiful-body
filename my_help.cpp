#include "my_help.h"
#include "ui_my_help.h"

My_help::My_help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::My_help)
{
    ui->setupUi(this);
}

My_help::~My_help()
{
    delete ui;
}
