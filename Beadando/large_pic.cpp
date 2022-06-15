#include "large_pic.h"

#include "ui_large_pic.h"

large_pic::large_pic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::large_pic)
{
    ui->setupUi(this);
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

