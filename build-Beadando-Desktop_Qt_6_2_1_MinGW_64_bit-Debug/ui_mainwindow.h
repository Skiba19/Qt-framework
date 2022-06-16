/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QWidget *centralwidget;
    QPushButton *browse_Button;
    QComboBox *pic_destination_Cbox;
    QLabel *Image;
    QLabel *label_3;
    QLabel *label;
    QLabel *cr_file_destination;
    QTextEdit *paths_textEdit;
    QLabel *label_2;
    QPushButton *deleteButton;
    QPushButton *largeButton;
    QPushButton *saveButton;
    QMenuBar *menubar;
    QMenu *menuMain_Window;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        browse_Button = new QPushButton(centralwidget);
        browse_Button->setObjectName(QString::fromUtf8("browse_Button"));
        browse_Button->setGeometry(QRect(40, 30, 80, 26));
        pic_destination_Cbox = new QComboBox(centralwidget);
        pic_destination_Cbox->setObjectName(QString::fromUtf8("pic_destination_Cbox"));
        pic_destination_Cbox->setGeometry(QRect(540, 30, 231, 26));
        Image = new QLabel(centralwidget);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(40, 130, 431, 311));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 30, 181, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 30, 141, 18));
        cr_file_destination = new QLabel(centralwidget);
        cr_file_destination->setObjectName(QString::fromUtf8("cr_file_destination"));
        cr_file_destination->setGeometry(QRect(150, 60, 621, 18));
        paths_textEdit = new QTextEdit(centralwidget);
        paths_textEdit->setObjectName(QString::fromUtf8("paths_textEdit"));
        paths_textEdit->setGeometry(QRect(590, 220, 181, 321));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(600, 200, 181, 18));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(570, 160, 221, 26));
        largeButton = new QPushButton(centralwidget);
        largeButton->setObjectName(QString::fromUtf8("largeButton"));
        largeButton->setGeometry(QRect(610, 120, 151, 26));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(650, 80, 80, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuMain_Window = new QMenu(menubar);
        menuMain_Window->setObjectName(QString::fromUtf8("menuMain_Window"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMain_Window->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFile->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        browse_Button->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        Image->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Perviously opened file paths:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Current file path:", nullptr));
        cr_file_destination->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "List of opened image paths:", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete selected image from the list", nullptr));
        largeButton->setText(QCoreApplication::translate("MainWindow", "Open in large size", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save path", nullptr));
        menuMain_Window->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
