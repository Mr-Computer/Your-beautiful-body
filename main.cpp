#include "menuwindow.h"
#include "download.h"
#include <QApplication>
#include <QFile>
#include "login.h"
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Download d;
    MenuWindow w;
    QFile file("data.dat");
    QFile work("workout.dat");
    d.setModal(true);
    d.exec();
    if (!file.exists())
    {
        Login l;
        l.setModal(true);
        l.exec();
    }
    if (!work.exists())
    {QTextStream swork(&work);
    swork << "222222222222222222222222222222";
    }
    file.close(); work.close();
    w.show();

    return a.exec();
}
