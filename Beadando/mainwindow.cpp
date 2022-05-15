#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_browse_Button_clicked()
{
    QString picure_filename = QFileDialog::getOpenFileName(this, "Select a file to open", QString(), "Image files (*.png *.jpg *.jpeg *.bmp *.svg)");
    if(picure_filename.isEmpty()) return;
    QPixmap pm(picure_filename);
    QPixmap scaledPm=pm.scaled(ui->Image->size(), Qt::KeepAspectRatio);
    ui->Image->setPixmap(scaledPm);
    QFile pic_file(picure_filename);
    ui->cr_file_destination->setText(pic_file.fileName());
    ui->pic_destination_Cbox->addItem(pic_file.fileName());
    QString paths;
    img_dest_paths.append(pic_file.fileName());
    for(auto it:img_dest_paths)
    {
        paths+=it+"\n";
        ui->paths_textEdit->setText(paths);
    }
}


void MainWindow::on_pic_destination_Cbox_currentTextChanged(const QString &arg1)
{
    QPixmap pixmap(arg1);
    ui->Image->setPixmap(pixmap.scaled(ui->Image->size(), Qt::KeepAspectRatio));
    ui->Image->setAlignment(Qt::AlignCenter);
}

