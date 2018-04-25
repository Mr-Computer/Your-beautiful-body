#ifndef MY_HELP_H
#define MY_HELP_H

#include <QDialog>

namespace Ui {
class My_help;
}

class My_help : public QDialog
{
    Q_OBJECT

public:
    explicit My_help(QWidget *parent = 0);
    ~My_help();

private:
    Ui::My_help *ui;
};

#endif // MY_HELP_H
