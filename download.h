#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <QDialog>

namespace Ui {
class Download;
}

class Download : public QDialog
{
    Q_OBJECT

public:
    explicit Download(QWidget *parent = 0);
    ~Download();

private:
    Ui::Download *ui;
public:
    void line ();
private slots:
    void on_pushButton_clicked();
};

#endif // DOWNLOAD_H
