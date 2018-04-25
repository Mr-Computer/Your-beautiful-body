#include "my_achievements.h"
#include "ui_my_achievements.h"

My_achievements::My_achievements(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::My_achievements)
{
    ui->setupUi(this);
}

My_achievements::~My_achievements()
{
    delete ui;
}
