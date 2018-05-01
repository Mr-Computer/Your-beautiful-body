#include "my_data.h"
#include "ui_my_data.h"
#include <QFile>
#include <QDebug>

My_data::My_data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::My_data)
{
    ui->setupUi(this);
    dat();
}

My_data::~My_data()
{
    delete ui;
}

void My_data::dat ()
{
    QFile file("data.dat");
    file.open(QIODevice::ReadOnly);
    QString name,ear,mas;
    name = file.readLine();
    ear = file.readLine();
    mas = file.readLine();
    ui->label_4->setText(name+ear+mas);
    file.close();
}
