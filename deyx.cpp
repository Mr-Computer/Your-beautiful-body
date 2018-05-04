#include "deyx.h"
#include "ui_deyx.h"
#include "my_workout.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "string.h"
#include <QDebug>
#include "my_mas.h"
static int _x=1,_d=0;
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
    QMessageBox::StandardButton _q = QMessageBox::question(this,"Виконання","Ви виконали завдання?",
                          QMessageBox::Yes | QMessageBox::No);
    if(_q == QMessageBox::Yes)
    {
        ui->pushButton->setStyleSheet("background-color: green");
        finish(_x++);
    } else
    {
        ui->pushButton->setStyleSheet("background-color: yellow");
    }
}

void DeyX::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton _q = QMessageBox::question(this,"Виконання","Ви виконали завдання?",
                          QMessageBox::Yes | QMessageBox::No);
    if(_q == QMessageBox::Yes)
    {
        ui->pushButton_2->setStyleSheet("background-color: green");
        finish(_x++);
    } else
    {
        ui->pushButton_2->setStyleSheet("background-color: yellow");
    }
}

void DeyX::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton _q = QMessageBox::question(this,"Виконання","Ви виконали завдання?",
                          QMessageBox::Yes | QMessageBox::No);
    if(_q == QMessageBox::Yes)
    {
        ui->pushButton_3->setStyleSheet("background-color: green");
        finish(_x++);
    } else
    {
        ui->pushButton_3->setStyleSheet("background-color: yellow");
    }
}

void DeyX::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton _q = QMessageBox::question(this,"Виконання","Ви виконали завдання?",
                          QMessageBox::Yes | QMessageBox::No);
    if(_q == QMessageBox::Yes)
    {
        ui->pushButton_4->setStyleSheet("background-color: green");
        finish(_x++);
    } else
    {
        ui->pushButton_4->setStyleSheet("background-color: yellow");
    }
}

void DeyX::on_pushButton_5_clicked()
{
    QMessageBox::StandardButton _q = QMessageBox::question(this,"Виконання","Ви виконали завдання?",
                          QMessageBox::Yes | QMessageBox::No);
    if(_q == QMessageBox::Yes)
    {
        ui->pushButton_5->setStyleSheet("background-color: green");
        finish(_x++);
    } else
    {
        ui->pushButton_5->setStyleSheet("background-color: yellow");
    }
}

void DeyX::on_pushButton_6_clicked()
{
    My_workout work(this);
    work.setModal(true);
    this->close();
    work.exec();
}
void DeyX::predock (int x)
{
    switch (x) {
    case 1:
       { ui->pushButton->setText("50 Присідань");
         ui->pushButton_2->setText("20 сек «Планка»");
         ui->pushButton_3->setText("20 разів Качання пресу");
         ui->pushButton_4->setText("40 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("5 разів Віджимання від підлоги");
         _d=1;
        break;}
    case 2:
       { ui->pushButton->setText("55 Присідань");
         ui->pushButton_2->setText("20 сек «Планка»");
         ui->pushButton_3->setText("25 разів Качання пресу");
         ui->pushButton_4->setText("45 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("5 разів Віджимання від підлоги");
         _d=2;
        break;}
    case 3:
       { ui->pushButton->setText("60 Присідань");
         ui->pushButton_2->setText("30 сек «Планка»");
         ui->pushButton_3->setText("25 разів Качання пресу");
         ui->pushButton_4->setText("45 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("100 разів Стрибки зі скакалкою");
         _d=3;
        break;}
    case 4:
       { ui->pushButton->setText("30 сек «Планка»");
         ui->pushButton_2->setText("5 разів Віджимання від підлоги");
         ui->pushButton_3->setText("160 разів Стрибки зі скакалкою");
         ui->pushButton_4->setText("25 разів Підйом сідниць лежачи");
         ui->pushButton_5->setText("30 разів  Нахили тулуба (вліво ,вправо , вперед)");
         _d=4;
        break;}
    case 5:
       { ui->pushButton->setText("70 Присідань");
         ui->pushButton_2->setText("40 сек «Планка»");
         ui->pushButton_3->setText("25 разів Качання пресу");
         ui->pushButton_4->setText("45 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("10 разів Віджимання від підлоги");
         _d=5;
        break;}
    case 6:
       { ui->pushButton->setText("75 Присідань");
         ui->pushButton_2->setText("30 разів Качання пресу");
         ui->pushButton_3->setText("50 разів Махи ногами (на одну ногу)");
         ui->pushButton_4->setText("200 разів Стрибки зі скакалкою");
         ui->pushButton_5->setText("10 разів Віджимання від підлоги");
         _d=6;
        break;}
    case 7:
       { ui->pushButton->setText("80 Присідань");
         ui->pushButton_2->setText("45 сек «Планка»");
         ui->pushButton_3->setText("35 разів Качання пресу");
         ui->pushButton_4->setText("55 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("10 разів Віджимання від підлоги");
         _d=7;
        break;}
    case 8:
       { ui->pushButton->setText("45 сек «Планка»");
         ui->pushButton_2->setText("260 разів Стрибки зі скакалкою");
         ui->pushButton_3->setText("40 разів Підйом сідниць лежачи");
         ui->pushButton_4->setText("40 разів  Нахили тулуба (вліво ,вправо , вперед)");
         ui->pushButton_5->setText("10 разів Скручування тулуба (вліво ,вправо)");
         _d=8;
        break;}
    case 9:
       { ui->pushButton->setText("100 Присідань");
         ui->pushButton_2->setText("60 сек «Планка»");
         ui->pushButton_3->setText("35 разів Качання пресу");
         ui->pushButton_4->setText("55 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("12 разів Віджимання від підлоги");
         _d=9;
        break;}
    case 10:
       { ui->pushButton->setText("105 Присідань");
         ui->pushButton_2->setText("60 сек «Планка»");
         ui->pushButton_3->setText("40 разів Качання пресу");
         ui->pushButton_4->setText("60 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("12 разів Віджимання від підлоги");
         _d=10;
        break;}
    case 11:
       { ui->pushButton->setText("110 Присідань");
         ui->pushButton_2->setText("60 сек «Планка»");
         ui->pushButton_3->setText("35 разів Качання пресу");
         ui->pushButton_4->setText("65 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("300 разів Стрибки зі скакалкою");
         _d=11;
        break;}
    case 12:
       { ui->pushButton->setText("90 сек «Планка»");
         ui->pushButton_2->setText("15 разів Віджимання від підлоги");
         ui->pushButton_3->setText("360 разів Стрибки зі скакалкою");
         ui->pushButton_4->setText("40 разів Підйом сідниць лежачи");
         ui->pushButton_5->setText("50 разів  Нахили тулуба (вліво ,вправо , вперед)");
         _d=12;
        break;}
    case 13:
       { ui->pushButton->setText("130 Присідань");
         ui->pushButton_2->setText("30 разів Качання пресу");
         ui->pushButton_3->setText("60 разів Махи ногами (на одну ногу)");
         ui->pushButton_4->setText("15 разів Віджимання від підлоги");
         ui->pushButton_5->setText("400 разів Стрибки зі скакалкою");
         _d=13;
        break;}
    case 14:
       { ui->pushButton->setText("135 Присідань");
         ui->pushButton_2->setText("90 сек «Планка»");
         ui->pushButton_3->setText("35 разів Качання пресу");
         ui->pushButton_4->setText("65 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("460 разів Стрибки зі скакалкою");
         _d=14;
        break;}
    case 15:
       { ui->pushButton->setText("140 Присідань");
         ui->pushButton_2->setText("90 сек «Планка»");
         ui->pushButton_3->setText("40 разів Качання пресу");
         ui->pushButton_4->setText("60 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("20 разів Віджимання від підлоги");
         _d=15;
        break;}
    case 16:
       { ui->pushButton->setText("120 сек «Планка»");
         ui->pushButton_2->setText("24 разів Віджимання від підлоги");
         ui->pushButton_3->setText("500 разів Стрибки зі скакалкою");
         ui->pushButton_4->setText("45 разів Підйом сідниць лежачи");
         ui->pushButton_5->setText("55 разів  Нахили тулуба (вліво ,вправо , вперед)");
         _d=16;
        break;}
    case 17:
       { ui->pushButton->setText("150 Присідань");
         ui->pushButton_2->setText("120 сек «Планка»");
         ui->pushButton_3->setText("45 разів Качання пресу");
         ui->pushButton_4->setText("65 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("560 разів Стрибки зі скакалкою");
         _d=17;
        break;}
    case 18:
       { ui->pushButton->setText("155 Присідань");
         ui->pushButton_2->setText("150 сек «Планка»");
         ui->pushButton_3->setText("50 разів Качання пресу");
         ui->pushButton_4->setText("70 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("25 разів Віджимання від підлоги");
         _d=18;
        break;}
    case 19:
       { ui->pushButton->setText("160 Присідань");
         ui->pushButton_2->setText("55 разів Качання пресу");
         ui->pushButton_3->setText("75 разів Махи ногами (на одну ногу)");
         ui->pushButton_4->setText("30 разів Віджимання від підлоги");
         ui->pushButton_5->setText("600 разів Стрибки зі скакалкою");
         _d=19;
        break;}
    case 20:
       { ui->pushButton->setText("150 сек «Планка»");
         ui->pushButton_2->setText("660 разів Стрибки зі скакалкою");
         ui->pushButton_3->setText("50 разів Підйом сідниць лежачи");
         ui->pushButton_4->setText("60 разів  Нахили тулуба (вліво ,вправо , вперед)");
         ui->pushButton_5->setText("20 разів Скручування тулуба (вліво ,вправо)");
         _d=20;
        break;}
    case 21:
       { ui->pushButton->setText("180 Присідань");
         ui->pushButton_2->setText("150 сек «Планка»");
         ui->pushButton_3->setText("50 разів Качання пресу");
         ui->pushButton_4->setText("70 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("32 разів Віджимання від підлоги");
         _d=21;
        break;}
    case 22:
       { ui->pushButton->setText("185 Присідань");
         ui->pushButton_2->setText("180 сек «Планка»");
         ui->pushButton_3->setText("55 разів Качання пресу");
         ui->pushButton_4->setText("75 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("35 разів Віджимання від підлоги");
         _d=22;
        break;}
    case 23:
       { ui->pushButton->setText("190 Присідань");
         ui->pushButton_2->setText("210 сек «Планка»");
         ui->pushButton_3->setText("55 разів Качання пресу");
         ui->pushButton_4->setText("75 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("35 разів Віджимання від підлоги");
         _d=23;
        break;}
    case 24:
       { ui->pushButton->setText("210 сек «Планка»");
         ui->pushButton_2->setText("700 разів Стрибки зі скакалкою");
         ui->pushButton_3->setText("55 разів Підйом сідниць лежачи");
         ui->pushButton_4->setText("50 разів  Нахили тулуба (вліво ,вправо , вперед)");
         ui->pushButton_5->setText("30 разів Скручування тулуба (вліво ,вправо)");
         _d=24;
        break;}
    case 25:
       { ui->pushButton->setText("220 Присідань");
         ui->pushButton_2->setText("210 сек «Планка»");
         ui->pushButton_3->setText("50 разів Качання пресу");
         ui->pushButton_4->setText("70 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("38 разів Віджимання від підлоги");
         _d=25;
        break;}
    case 26:
       { ui->pushButton->setText("225 Присідань");
         ui->pushButton_2->setText("26 разів Качання пресу");
         ui->pushButton_3->setText("65 разів Махи ногами (на одну ногу)");
         ui->pushButton_4->setText("40 разів Віджимання від підлоги");
         ui->pushButton_5->setText("760 разів Стрибки зі скакалкою");
         _d=26;
        break;}
    case 27:
       { ui->pushButton->setText("230 Присідань");
         ui->pushButton_2->setText("240 сек «Планка»");
         ui->pushButton_3->setText("60 разів Качання пресу");
         ui->pushButton_4->setText("60 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("800 разів Стрибки зі скакалкою");
         _d=27;
        break;}
    case 28:
       { ui->pushButton->setText("240 сек «Планка»");
         ui->pushButton_2->setText("42 разів Віджимання від підлоги");
         ui->pushButton_3->setText("860 разів Стрибки зі скакалкою");
         ui->pushButton_4->setText("60 разів Підйом сідниць лежачи");
         ui->pushButton_5->setText("60 разів  Нахили тулуба (вліво ,вправо , вперед)");
         _d=28;
        break;}
    case 29:
       { ui->pushButton->setText("240 Присідань");
         ui->pushButton_2->setText("270 сек «Планка»");
         ui->pushButton_3->setText("55 разів Качання пресу");
         ui->pushButton_4->setText("65 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("45 разів Віджимання від підлоги");
         _d=29;
        break;}
    case 30:
       { ui->pushButton->setText("250 Присідань");
         ui->pushButton_2->setText("300 сек «Планка»");
         ui->pushButton_3->setText("60 разів Качання пресу");
         ui->pushButton_4->setText("70 разів Махи ногами (на одну ногу)");
         ui->pushButton_5->setText("50 разів Віджимання від підлоги");
         _d=30;
        break;}

    default:
        break;
    }
}

void DeyX::finish (int t)
{
    if (t == 5)
      { _x=1;  eset(_d);
        QMessageBox::about(this,"Фіналочка",
                           "Вітаємо з завершенням сьогоднішнього тренування.");
        My_workout work(this);
        work.setModal(true);
        this->hide();
        if (_d%5 == 0)
        {
            My_mas mas(this);
            mas.setModal(true);
            mas.exec();
        }
        work.buttom_paint();
        work.exec();

}
}

void DeyX::eset (int x)
{
QFile file("workout.dat");
file.open(QIODevice::ReadWrite);
QString line;
line = file.readAll();
line[x-1]='1';
file.close();
file.open(QIODevice::Truncate);
file.close();
file.open(QIODevice::ReadWrite);
QTextStream stream(&file);
stream<<line;
file.close();
}

