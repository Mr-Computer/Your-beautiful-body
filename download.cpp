#include "download.h"
#include "ui_download.h"
#include <QTime>

Download::Download(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Download)
{
    ui->setupUi(this);
}

Download::~Download()
{
    delete ui;
}

void Download::line ()
{


}


void Download::on_pushButton_clicked()
{
    long i=0;
    i++;
    while (i <= 1500000000)
    {   i++;
        if (i % 15000000 == 0)
        ui->progressBar->setValue(i / 15000000);
    }
this->close();
}
