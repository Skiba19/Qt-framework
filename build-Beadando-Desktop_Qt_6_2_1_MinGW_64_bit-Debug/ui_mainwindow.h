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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QAction *actionEnglish;
    QAction *actionHungarian;
    QWidget *centralwidget;
    QPushButton *browse_Button;
    QComboBox *pic_destination_Cbox;
    QLabel *Image;
    QLabel *filePathsLabel;
    QLabel *crFilePathLabel;
    QLabel *cr_file_destination;
    QTextEdit *paths_textEdit;
    QLabel *listImagePathLabel;
    QPushButton *deleteButton;
    QPushButton *largeButton;
    QPushButton *saveButton;
    QLabel *nameLabel;
    QLabel *tagLabel;
    QLineEdit *nameEdit;
    QLineEdit *tagEdit;
    QLineEdit *commentEdit;
    QLineEdit *nameSearch;
    QLabel *searchNameLabel;
    QLineEdit *tagSearch;
    QLabel *searchTagLabel;
    QLabel *commentLabel;
    QPushButton *addButton;
    QPushButton *modifyButton;
    QPushButton *deleteButton_2;
    QPushButton *searchButton;
    QCheckBox *darkMode;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMain_Window;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionHungarian = new QAction(MainWindow);
        actionHungarian->setObjectName(QString::fromUtf8("actionHungarian"));
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
        Image->setGeometry(QRect(40, 130, 481, 311));
        Image->setContextMenuPolicy(Qt::CustomContextMenu);
        Image->setAutoFillBackground(false);
        filePathsLabel = new QLabel(centralwidget);
        filePathsLabel->setObjectName(QString::fromUtf8("filePathsLabel"));
        filePathsLabel->setGeometry(QRect(320, 30, 241, 20));
        crFilePathLabel = new QLabel(centralwidget);
        crFilePathLabel->setObjectName(QString::fromUtf8("crFilePathLabel"));
        crFilePathLabel->setGeometry(QRect(150, 30, 141, 18));
        cr_file_destination = new QLabel(centralwidget);
        cr_file_destination->setObjectName(QString::fromUtf8("cr_file_destination"));
        cr_file_destination->setGeometry(QRect(150, 60, 621, 18));
        paths_textEdit = new QTextEdit(centralwidget);
        paths_textEdit->setObjectName(QString::fromUtf8("paths_textEdit"));
        paths_textEdit->setGeometry(QRect(590, 220, 181, 321));
        listImagePathLabel = new QLabel(centralwidget);
        listImagePathLabel->setObjectName(QString::fromUtf8("listImagePathLabel"));
        listImagePathLabel->setGeometry(QRect(590, 200, 191, 20));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(570, 160, 221, 26));
        largeButton = new QPushButton(centralwidget);
        largeButton->setObjectName(QString::fromUtf8("largeButton"));
        largeButton->setGeometry(QRect(610, 120, 151, 26));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(609, 80, 151, 26));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(40, 470, 54, 18));
        tagLabel = new QLabel(centralwidget);
        tagLabel->setObjectName(QString::fromUtf8("tagLabel"));
        tagLabel->setGeometry(QRect(40, 510, 54, 18));
        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(90, 470, 111, 25));
        tagEdit = new QLineEdit(centralwidget);
        tagEdit->setObjectName(QString::fromUtf8("tagEdit"));
        tagEdit->setGeometry(QRect(90, 510, 111, 25));
        commentEdit = new QLineEdit(centralwidget);
        commentEdit->setObjectName(QString::fromUtf8("commentEdit"));
        commentEdit->setGeometry(QRect(280, 460, 201, 81));
        nameSearch = new QLineEdit(centralwidget);
        nameSearch->setObjectName(QString::fromUtf8("nameSearch"));
        nameSearch->setGeometry(QRect(180, 80, 111, 25));
        searchNameLabel = new QLabel(centralwidget);
        searchNameLabel->setObjectName(QString::fromUtf8("searchNameLabel"));
        searchNameLabel->setGeometry(QRect(130, 80, 54, 18));
        tagSearch = new QLineEdit(centralwidget);
        tagSearch->setObjectName(QString::fromUtf8("tagSearch"));
        tagSearch->setGeometry(QRect(380, 80, 111, 25));
        searchTagLabel = new QLabel(centralwidget);
        searchTagLabel->setObjectName(QString::fromUtf8("searchTagLabel"));
        searchTagLabel->setGeometry(QRect(340, 80, 54, 18));
        commentLabel = new QLabel(centralwidget);
        commentLabel->setObjectName(QString::fromUtf8("commentLabel"));
        commentLabel->setGeometry(QRect(210, 490, 71, 18));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(490, 440, 80, 26));
        modifyButton = new QPushButton(centralwidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(490, 480, 80, 26));
        deleteButton_2 = new QPushButton(centralwidget);
        deleteButton_2->setObjectName(QString::fromUtf8("deleteButton_2"));
        deleteButton_2->setGeometry(QRect(490, 520, 80, 26));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(40, 80, 80, 26));
        darkMode = new QCheckBox(centralwidget);
        darkMode->setObjectName(QString::fromUtf8("darkMode"));
        darkMode->setGeometry(QRect(690, 0, 101, 24));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuMain_Window = new QMenu(menubar);
        menuMain_Window->setObjectName(QString::fromUtf8("menuMain_Window"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMain_Window->menuAction());
        menuMain_Window->addAction(actionEnglish);
        menuMain_Window->addAction(actionHungarian);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFile->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        actionHungarian->setText(QCoreApplication::translate("MainWindow", "Hungarian", nullptr));
        browse_Button->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        Image->setText(QString());
        filePathsLabel->setText(QCoreApplication::translate("MainWindow", "Perviously opened file paths:", nullptr));
        crFilePathLabel->setText(QCoreApplication::translate("MainWindow", "Current file path:", nullptr));
        cr_file_destination->setText(QString());
        listImagePathLabel->setText(QCoreApplication::translate("MainWindow", "List of opened image paths:", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete selected image from the list", nullptr));
        largeButton->setText(QCoreApplication::translate("MainWindow", "Open in large", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save path", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        tagLabel->setText(QCoreApplication::translate("MainWindow", "Tag:", nullptr));
        searchNameLabel->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        searchTagLabel->setText(QCoreApplication::translate("MainWindow", "Tag:", nullptr));
        commentLabel->setText(QCoreApplication::translate("MainWindow", "Comment:", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        modifyButton->setText(QCoreApplication::translate("MainWindow", "Modify", nullptr));
        deleteButton_2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        darkMode->setText(QCoreApplication::translate("MainWindow", "Dark Mode", nullptr));
        menuMain_Window->setTitle(QCoreApplication::translate("MainWindow", "Language", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
