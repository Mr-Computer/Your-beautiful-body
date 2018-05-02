#include "my_workout.h"
#include "ui_my_workout.h"
#include "menuwindow.h"
#include "deyx.h"
#include <QFile>

My_workout::My_workout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::My_workout)
{
    ui->setupUi(this);
    buttom_paint();
}

My_workout::~My_workout()
{
    delete ui;
}

void My_workout::on_pushButton_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(1);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_2_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(2);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_3_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(3);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_4_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(4);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_5_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(5);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_6_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(6);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_7_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(7);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_8_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(8);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_9_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(9);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_10_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(10);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_11_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(11);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_12_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(12);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_13_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(13);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_14_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(14);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_15_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(15);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_16_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(16);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_17_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(17);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_18_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(18);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_19_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(19);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_20_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(20);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_21_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(21);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_22_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(22);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_23_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(23);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_24_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(24);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_25_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(25);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_26_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(26);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_27_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(27);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_28_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(28);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_29_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(29);
    this->close();
    dey.exec();
}
void My_workout::on_pushButton_30_clicked()
{
    DeyX dey(this);
    dey.setModal(true);
    dey.predock(30);
    this->close();
    dey.exec();
}

void My_workout::buttom_paint ()
{ QFile file("workout.dat");
    file.open(QIODevice::ReadWrite);
    char i;
    for (int j=0; j<30; j++)
    {
        file.getChar(&i);
        if (i == '1')
            switch (j+1) {
            case 1:
               {ui->pushButton->setStyleSheet("background-color: green");
                break;}
            case 2:
               {ui->pushButton_2->setStyleSheet("background-color: green");
                break;}
            case 3:
               {ui->pushButton_3->setStyleSheet("background-color: green");
                break;}
            case 4:
               {ui->pushButton_4->setStyleSheet("background-color: green");
                break;}
            case 5:
               {ui->pushButton_5->setStyleSheet("background-color: green");
                break;}
            case 6:
               {ui->pushButton_6->setStyleSheet("background-color: green");
                break;}
            case 7:
               {ui->pushButton_7->setStyleSheet("background-color: green");
                break;}
            case 8:
               {ui->pushButton_8->setStyleSheet("background-color: green");
                break;}
            case 9:
               {ui->pushButton_9->setStyleSheet("background-color: green");
                break;}
            case 10:
               {ui->pushButton_10->setStyleSheet("background-color: green");
                break;}
            case 11:
               {ui->pushButton_11->setStyleSheet("background-color: green");
                break;}
            case 12:
               {ui->pushButton_12->setStyleSheet("background-color: green");
                break;}
            case 13:
               {ui->pushButton_13->setStyleSheet("background-color: green");
                break;}
            case 14:
               {ui->pushButton_14->setStyleSheet("background-color: green");
                break;}
            case 15:
               {ui->pushButton_15->setStyleSheet("background-color: green");
                break;}
            case 16:
               {ui->pushButton_16->setStyleSheet("background-color: green");
                break;}
            case 17:
               {ui->pushButton_17->setStyleSheet("background-color: green");
                break;}
            case 18:
               {ui->pushButton_18->setStyleSheet("background-color: green");
                break;}
            case 19:
               {ui->pushButton_19->setStyleSheet("background-color: green");
                break;}
            case 20:
               {ui->pushButton_20->setStyleSheet("background-color: green");
                break;}
            case 21:
               {ui->pushButton_21->setStyleSheet("background-color: green");
                break;}
            case 22:
               {ui->pushButton_22->setStyleSheet("background-color: green");
                break;}
            case 23:
               {ui->pushButton_23->setStyleSheet("background-color: green");
                break;}
            case 24:
               {ui->pushButton_24->setStyleSheet("background-color: green");
                break;}
            case 25:
               {ui->pushButton_25->setStyleSheet("background-color: green");
                break;}
            case 26:
               {ui->pushButton_26->setStyleSheet("background-color: green");
                break;}
            case 27:
               {ui->pushButton_27->setStyleSheet("background-color: green");
                break;}
            case 28:
               {ui->pushButton_28->setStyleSheet("background-color: green");
                break;}
            case 29:
               {ui->pushButton_29->setStyleSheet("background-color: green");
                break;}
            case 30:
               {ui->pushButton_30->setStyleSheet("background-color: green");
                break;}

            default:
                break;
            }
    }
}


void My_workout::on_pushButton_31_clicked()
{
    this->close();
}
