#ifndef PICTURE_H
#define PICTURE_H
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>

class Picture
{
    QString tag, name, path, descrition;

public:
    Picture(QString tag, QString name, QString path, QString descrition);
    const QString &getTag() const;
    void setTag(const QString &newTag);
    const QString &getName() const;
    void setName(const QString &newName);
    const QString &getPath() const;
    void setPath(const QString &newPath);
    const QString &getDescrition() const;
    void setDescrition(const QString &newDescrition);
};

#endif // PICTURE_H
