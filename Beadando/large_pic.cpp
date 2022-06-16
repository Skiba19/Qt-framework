#include "large_pic.h"
#include <QFile>
#include "ui_large_pic.h"

large_pic::large_pic(QWidget *parent, QString path) :
    QWidget(parent),
    ui(new Ui::large_pic)
{
    ui->setupUi(this);
    QPixmap pm(path);
    QPixmap scaledPm=pm.scaled(ui->Image->size(), Qt::KeepAspectRatio);
    ui->Image->setPixmap(scaledPm);
    QFile pic_file(path);
}


large_pic::~large_pic()
{
    delete ui;
}

void large_pic::on_pushButton_clicked()
{
    this->close();
    MainWindow *w=new MainWindow;
    w->show();
}


void large_pic::on_pushButton_2_clicked()
{
    if(url.isEmpty()) return;
    QPixmap pm(url);
    QPixmap scaledPm=pm.scaled(ui->Image->size(), Qt::KeepAspectRatio);
    ui->Image->setPixmap(scaledPm);
    QFile pic_file(url);
}

