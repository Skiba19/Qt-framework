#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>
#include "picture.h"
#include <QPalette>

QList<Picture*> pictures;
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
    paths+=ui->pic_destination_Cbox->currentText()+"\n";
    QTextStream s(&file);
    s<<paths;
    file.close();
    QMessageBox::information(this, "Path saved", "This destination has been saved.");
}


void MainWindow::on_addButton_clicked()
{
    QString tag=ui->tagEdit->text();
    QString name=ui->nameEdit->text();
    QString path=ui->pic_destination_Cbox->currentText();
    QString descrition=ui->commentEdit->text();

    bool found=false;
    for(auto it:pictures)
    {
        if(name==it->getName())
        {
            found=true;
            QMessageBox::critical(this, "Picture name used", "This name already exsists!");
            break;
        }
    }
    if(found==false)
    {
    pictures.append(new Picture(tag,name,path,descrition));

    QFile file("pictures.txt");
    file.open(QIODevice::ReadOnly);
    QString pictures=file.readAll();
    file.remove();
    file.open(QIODevice::WriteOnly);
    pictures+=name+" "+tag+" "+path+" "+descrition+"\n";
    QTextStream s(&file);
    s<<pictures;
    file.close();

    QMessageBox::information(this, "Picture saved", "This picture has been saved.");
    }
}


void MainWindow::on_actionEnglish_triggered()
{
    ui->browse_Button->setText("Browse");
    ui->crFilePathLabel->setText("Current file path:");
    ui->filePathsLabel->setText("Perviously opened file paths:");
    ui->searchButton->setText("Search");
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
    ui->searchButton->setText("Keresés:");
    ui->searchNameLabel->setText("Név");
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


void MainWindow::on_Image_customContextMenuRequested(const QPoint &pos)
{
    ui->Image->setContextMenuPolicy(Qt::CustomContextMenu);
    QMenu contextMenu(tr("Context menu"), this);
    QAction action1("Save path", this);
    connect(&action1, SIGNAL(triggered()), this, SLOT(removeDataPoint()));
    contextMenu.addAction(&action1);
    contextMenu.exec(mapToGlobal(pos));


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


void MainWindow::on_modifyButton_clicked()
{
    QString par=ui->nameEdit->text();
    for(auto it:pictures)
    {
        if(par==it->getName())
        {
            it->setTag(ui->tagEdit->text());
            it->setName(ui->nameEdit->text());
            it->setPath(ui->pic_destination_Cbox->currentText());
            it->setDescrition(ui->commentEdit->text());

            QMessageBox::information(this, "Picture modified", "This picture has been modified.");
            return;
        }
    }
    QMessageBox::critical(this, "Picture not found", "This picture is not found.");
}


void MainWindow::on_deleteButton_2_clicked()
{
    QString name=ui->nameEdit->text();
    if(pictures.isEmpty())
    {
        QMessageBox::critical(this, "Picture not found", "This picture is not found.");
        return;
    }
    for(auto it:pictures)
    {
        if(name==it->getName())
        {
            pictures.removeOne(it);
            QMessageBox::information(this, "Picture deleted", "This picture has been deleted.");
            return;
        }
    }
    QMessageBox::critical(this, "Picture not found", "This picture is not found.");
}


void MainWindow::on_searchButton_clicked()
{
    QString item;
    int num = 1;

    for(auto it:pictures)
    {
        if(ui->tagSearch->text()==it->getTag())
        {
            if(ui->nameSearch->text()==it->getName())
            {
                item+="Name: "+it->getName()+"\nTag: "+it->getTag()+"\nPath: "+it->getPath()+"\nDescription: "+it->getDescrition();
                QMessageBox::information(this, "Picture found", item);
                return;
            }
            else
            {
                item+=QString::number(num)+". picture:\nName: "+it->getName()+"\nTag: "+it->getTag()+"\nPath: "+it->getPath()+"\nDescription: "+it->getDescrition()+"\n";
                num++;
            }
        }
    }
    QMessageBox::information(this, "Picture(s) found", item);
}



void MainWindow::on_darkMode_stateChanged(int arg1)
{
    if(arg1==Qt::Checked)
    {
        ui->centralwidget->setStyleSheet("background-color: rgb(76, 78, 80);");
    }
    else
    {
        ui->centralwidget->setStyleSheet("background-color: rgb(255, 255, 255);");
    }
}

