#include "menuwindow.h"
#include "ui_menuwindow.h"
#include "my_data.h"
#include "my_workout.h"
#include "my_achievements.h"
#include "my_help.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_pushButton_clicked()
{
    My_data data(this);
    data.setModal(true);
    data.exec();
}

void MenuWindow::on_pushButton_2_clicked()
{
    My_workout work(this);
    work.setModal(true);
    work.exec();
}

void MenuWindow::on_pushButton_4_clicked()
{
    My_help help(this);
    help.setModal(true);
    help.exec();
}

void MenuWindow::on_pushButton_3_clicked()
{
    My_achievements achi(this);
    achi.setModal(true);
    achi.exec();
}

void MenuWindow::on_pushButton_5_clicked()
{
    close();
}
