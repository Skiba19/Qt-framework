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
    QPushButton *pushButton_2;

    void setupUi(QWidget *large_pic)
    {
        if (large_pic->objectName().isEmpty())
            large_pic->setObjectName(QString::fromUtf8("large_pic"));
        large_pic->resize(733, 669);
        pushButton = new QPushButton(large_pic);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 80, 26));
        Image = new QLabel(large_pic);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(13, 127, 711, 531));
        Image->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(large_pic);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(640, 10, 80, 26));

        retranslateUi(large_pic);

        QMetaObject::connectSlotsByName(large_pic);
    } // setupUi

    void retranslateUi(QWidget *large_pic)
    {
        large_pic->setWindowTitle(QCoreApplication::translate("large_pic", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("large_pic", "Back", nullptr));
        Image->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("large_pic", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class large_pic: public Ui_large_pic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LARGE_PIC_H
