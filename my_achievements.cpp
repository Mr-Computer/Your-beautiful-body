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

void My_achievements::on_pushButton_clicked()
{
 this->close();
}

void My_achievements::on_pushButton_2_clicked()
{
    //Рисуем график y=x*x

        //Сгенерируем данные
        //Для этого создадим два массива точек:
        //один для созранения x координат точек,
        //а второй для y соответственно

        double a = 0; //Начало интервала, где рисуем график по оси Ox
        double b =  30; //Конец интервала, где рисуем график по оси Ox
        double h = 5; //Шаг, с которым будем пробегать по оси Ox

        int N=(b-a)/h + 2; //Вычисляем количество точек, которые будем отрисовывать
        QVector<double> x(N), y(N); //Массивы координат точек

        //Вычисляем наши данные
        x[0]=2; y[0]=12;
        x[1]=4; y[1]=24;
        x[2]=8; y[2]=26;
        x[3]=16; y[3]=32;
        x[4]=32; y[4]=12;
        x[5]=64; y[5]=16;
        x[6]=128; y[6]=2;
        x[7]=256; y[7]=6;

        ui->widget->clearGraphs();//Если нужно, но очищаем все графики
        //Добавляем один график в widget
        ui->widget->addGraph();
        //Говорим, что отрисовать нужно график по нашим двум массивам x и y
        ui->widget->graph(0)->setData(x, y);

        //Подписываем оси Ox и Oy
        ui->widget->xAxis->setLabel("x");
        ui->widget->yAxis->setLabel("y");

        //Установим область, которая будет показываться на графике
        ui->widget->xAxis->setRange(a, 300);//Для оси Ox

        //Для показа границ по оси Oy сложнее, так как надо по правильному
        //вычислить минимальное и максимальное значение в векторах
        double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
        ui->widget->yAxis->setRange(minY, maxY);//Для оси Oy

        //И перерисуем график на нашем widget
        ui->widget->replot();
}

