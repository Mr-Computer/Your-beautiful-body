#ifndef MY_ACHIEVEMENTS_H
#define MY_ACHIEVEMENTS_H

#include <QDialog>

namespace Ui {
class My_achievements;
}

class My_achievements : public QDialog
{
    Q_OBJECT

public:
    explicit My_achievements(QWidget *parent = 0);
    ~My_achievements();

private:
    Ui::My_achievements *ui;
};

#endif // MY_ACHIEVEMENTS_H
