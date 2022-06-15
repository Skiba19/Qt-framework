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
    QString picture_filename = QFileDialog::getOpenFileName(this, "Select a file to open", QString(), "Image files (*.png *.jpg *.jpeg *.bmp *.svg)");
    if(picture_filename.isEmpty()) return;
    QPixmap pm(picture_filename);
    QPixmap scaledPm=pm.scaled(ui->Image->size(), Qt::KeepAspectRatio);
    ui->Image->setPixmap(scaledPm);
    QFile pic_file(picture_filename);
    ui->cr_file_destination->setText(pic_file.fileName());
    ui->pic_destination_Cbox->addItem(pic_file.fileName());
    QString paths;
    img_dest_paths.append(pic_file.fileName());
    for(auto it:img_dest_paths)
    {
        paths+=it+"\n";
        ui->paths_textEdit->setText(paths);
    }

    QFile file("all_path.txt");
    QTextStream s(&file);
    s<<picture_filename;
    file.close();
}


void MainWindow::on_pic_destination_Cbox_currentTextChanged(const QString &arg1)
{
    QPixmap pixmap(arg1);
    ui->Image->setPixmap(pixmap.scaled(ui->Image->size(), Qt::KeepAspectRatio));
    ui->Image->setAlignment(Qt::AlignCenter);
}



void MainWindow::on_deleteButton_clicked()
{
    ui->pic_destination_Cbox->removeItem(ui->pic_destination_Cbox->currentIndex());
    ui->cr_file_destination->setText("");
}


void MainWindow::on_largeButton_clicked()
{
    large_pic *lpw=new large_pic;
    lpw->show();
    this->hide();
}

