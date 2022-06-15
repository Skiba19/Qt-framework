/********************************************************************************
** Form generated from reading UI file 'large_pic.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LARGE_PIC_H
#define UI_LARGE_PIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_large_pic
{
public:
    QPushButton *pushButton;
    QLabel *Image;

    void setupUi(QWidget *large_pic)
    {
        if (large_pic->objectName().isEmpty())
            large_pic->setObjectName(QString::fromUtf8("large_pic"));
        large_pic->resize(547, 455);
        pushButton = new QPushButton(large_pic);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 80, 26));
        Image = new QLabel(large_pic);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(240, 220, 54, 18));

        retranslateUi(large_pic);

        QMetaObject::connectSlotsByName(large_pic);
    } // setupUi

    void retranslateUi(QWidget *large_pic)
    {
        large_pic->setWindowTitle(QCoreApplication::translate("large_pic", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("large_pic", "Back", nullptr));
        Image->setText(QCoreApplication::translate("large_pic", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class large_pic: public Ui_large_pic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LARGE_PIC_H
