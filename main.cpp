#include "menuwindow.h"
#include "download.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Download d;
    MenuWindow w;
    d.setModal(true);
    d.exec();
    w.show();

    return a.exec();
}
