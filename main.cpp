#include "menuwindow.h"
#include "download.h"
#include <QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Download d;
    MenuWindow w;
    Login l;
    d.setModal(true);
    d.exec();
    l.setModal(true);
    l.exec();
    w.show();

    return a.exec();
}
