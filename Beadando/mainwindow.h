#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "large_pic.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_browse_Button_clicked();

    void on_pic_destination_Cbox_currentTextChanged(const QString &arg1);


    void on_deleteButton_clicked();

    void on_largeButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::MainWindow *ui;
    QList<QString> img_dest_paths;
};
#endif // MAINWINDOW_H
