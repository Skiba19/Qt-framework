#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>
#include "picture.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file("all_path.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    while(!stream.atEnd())
    {
        QString data=stream.readLine();
        if(data!="")
        {
            ui->pic_destination_Cbox->addItem(data);
        }
    }
    file.close();
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
    ui->pic_destination_Cbox->setCurrentText(pic_file.fileName());
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



void MainWindow::on_deleteButton_clicked()
{
    ui->pic_destination_Cbox->removeItem(ui->pic_destination_Cbox->currentIndex());
    ui->cr_file_destination->setText("");
}

void MainWindow::on_largeButton_clicked()
{
    large_pic *lpw=new large_pic(nullptr,ui->pic_destination_Cbox->currentText());
    lpw->show();
    this->hide();
}


void MainWindow::on_saveButton_clicked()
{
    QFile file("all_path.txt");
    file.open(QIODevice::ReadOnly);
    QString paths=file.readAll();
    file.remove();
    file.open(QIODevice::WriteOnly);
    QString path("all_path.txt");
    paths+=ui->pic_destination_Cbox->currentText()+"\n";
    QTextStream s(&file);
    s<<paths;
    file.close();
    QMessageBox::information(this, "Path saved", "This destination has been saved.");
}


void MainWindow::on_addButton_clicked()
{
    Picture(ui->tagEdit->text(),ui->nameEdit->text(),ui->pic_destination_Cbox->currentText(),ui->commentEdit->text());
}


void MainWindow::on_actionEnglish_triggered()
{
    ui->browse_Button->setText("Browse");
    ui->crFilePathLabel->setText("Current file path:");
    ui->filePathsLabel->setText("Perviously opened file paths:");
    ui->searchLabel->setText("Search:");
    ui->searchNameLabel->setText("Name:");
    ui->searchTagLabel->setText("Tag");
    ui->saveButton->setText("Save path");
    ui->largeButton->setText("Open in large");
    ui->deleteButton->setText("Delete selected image from the list");
    ui->listImagePathLabel->setText("List of opened image paths:");
    ui->nameLabel->setText("Name:");
    ui->tagLabel->setText("Tag:");
    ui->commentLabel->setText("Comment:");
    ui->addButton->setText("Add");
    ui->deleteButton_2->setText("Delete");
    ui->modifyButton->setText("Modify");
    ui->actionEnglish->setText("English");
    ui->actionHungarian->setText("Hungarian");
}


void MainWindow::on_actionHungarian_triggered()
{
    ui->browse_Button->setText("Tallózás");
    ui->crFilePathLabel->setText("Jelenlegi fájl elérése:");
    ui->filePathsLabel->setText("Előzőleg megnyitott fájlok elérései:");
    ui->searchLabel->setText("Keresés:");
    ui->searchNameLabel->setText("Név:");
    ui->searchTagLabel->setText("Címke:");
    ui->saveButton->setText("Elérés mentése");
    ui->largeButton->setText("Nagyban megnyitás");
    ui->deleteButton->setText("Törlés a kiválasztott képet a listából");
    ui->listImagePathLabel->setText("A megnyitott képek elérési útjai:");
    ui->nameLabel->setText("Név:");
    ui->tagLabel->setText("Címke:");
    ui->commentLabel->setText("Komment:");
    ui->addButton->setText("Hozzáad");
    ui->deleteButton_2->setText("Törlés");
    ui->modifyButton->setText("Módosítás");
    ui->actionEnglish->setText("Angol");
    ui->actionHungarian->setText("Magyar");
}

