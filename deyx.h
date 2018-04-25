#ifndef DEYX_H
#define DEYX_H

#include <QDialog>

namespace Ui {
class DeyX;
}

class DeyX : public QDialog
{
    Q_OBJECT

public:
    explicit DeyX(QWidget *parent = 0);
    ~DeyX();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::DeyX *ui;
};

#endif // DEYX_H
