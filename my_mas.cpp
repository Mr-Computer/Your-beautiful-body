#include "my_mas.h"
#include "ui_my_mas.h"
#include <QFile>
#include <QTextStream>

My_mas::My_mas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::My_mas)
{
    ui->setupUi(this);
}

My_mas::~My_mas()
{
    delete ui;
}

void My_mas::on_pushButton_clicked()
{
    QFile filer("achi.dat");
           filer.open(QIODevice::ReadWrite);
        QString line;
           line = filer.readAll();
           filer.close();
           filer.open(QIODevice::Truncate);
           filer.close();
           filer.open(QIODevice::ReadWrite);
           line += ui->lineEdit->text();
        QTextStream ifiler(&filer);
           ifiler << line <<"\n";
           filer.close();
           this->close();
}
