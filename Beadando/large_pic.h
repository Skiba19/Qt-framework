#ifndef LARGE_PIC_H
#define LARGE_PIC_H
#include "mainwindow.h"
#include <QWidget>

namespace Ui {
class large_pic;
}

class large_pic : public QWidget
{
    Q_OBJECT

public:
    explicit large_pic(QWidget *parent = nullptr);
    ~large_pic();

private slots:
    void on_pushButton_clicked();

private:
    Ui::large_pic *ui;
};

#endif // LARGE_PIC_H
