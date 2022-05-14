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
    QString filename = QFileDialog::getOpenFileName(this, "Select a file to open", QString(), "Text files (*.txt)");
    if(filename.isEmpty()) return;
    QFile infile(filename);
    infile.open(QIODevice::ReadOnly);
    QTextStream stream(&infile);
    QString content = stream.readAll();
    ui->Image->setText(content);
    QFileInfo info(infile);
    //ui->feladat3_Label->setText(infile.fileName()); //ezzel az egész elérési utat átadja
    ui->feladat3_Label->setText(info.fileName());
    QMessageBox::information(this, "file info", "File size: "+QString::number(info.size())+" kb\nLast modified: "+info.lastModified().toString());
    QString filename = QFileDialog::getOpenFileName(this, "Select a file to open", QString(), "Image files (*.png *.jpg *.jpeg *.bmp *.svg)");
    if(filename.isEmpty()) return;
    QPixmap pm(filename);
    QPixmap scaledPm=pm.scaled(ui->feladat4_Label->size(), Qt::KeepAspectRatio);
    ui->feladat4_Label->setPixmap(scaledPm);
}

