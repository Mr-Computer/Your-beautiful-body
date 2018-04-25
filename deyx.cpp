#include "deyx.h"
#include "ui_deyx.h"
#include "my_workout.h"

DeyX::DeyX(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeyX)
{
    ui->setupUi(this);
}

DeyX::~DeyX()
{
    delete ui;
}

void DeyX::on_pushButton_clicked()
{

}

void DeyX::on_pushButton_2_clicked()
{

}

void DeyX::on_pushButton_3_clicked()
{

}

void DeyX::on_pushButton_4_clicked()
{

}

void DeyX::on_pushButton_5_clicked()
{

}

void DeyX::on_pushButton_6_clicked()
{
    My_workout work(this);
    work.setModal(true);
    work.exec();
}

