#include "my_help.h"
#include "ui_my_help.h"
#include <QPixmap>
#include <QDebug>
My_help::My_help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::My_help)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/help.png");
    int w = 703;
    int h = 580;
    ui->label->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
}

My_help::~My_help()
{
    delete ui;
}
