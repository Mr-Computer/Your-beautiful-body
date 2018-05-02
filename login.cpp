#include "login.h"
#include "ui_login.h"
#include <QFile>
#include <QString>
#include <QTextStream>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{ QFile file("data.dat");
  QFile filer("achi.dat");
    file.open(QIODevice::Truncate);
    filer.open(QIODevice::Truncate);
    file.close(); filer.close();
    file.open(QIODevice::ReadWrite);
    filer.open(QIODevice::ReadWrite);
 QString line;
    line = ui->lineEdit->text();
    line +="\n";
 QTextStream ifile(&file);
 QTextStream ifiler(&filer);
    ifile << line;
    line = ui->lineEdit_2->text();
    line +="\n";
    ifile << line;
    line = ui->lineEdit_3->text();
    ifile << line;
    ifiler << line <<"\n";
    file.close(); filer.close();
    this->close();
}
