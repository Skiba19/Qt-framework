#include "picture.h"

const QString &Picture::getTag() const
{
    return tag;
}

void Picture::setTag(const QString &newTag)
{
    tag = newTag;
}

const QString &Picture::getName() const
{
    return name;
}

void Picture::setName(const QString &newName)
{
    name = newName;
}

const QString &Picture::getPath() const
{
    return path;
}

void Picture::setPath(const QString &newPath)
{
    path = newPath;
}

const QString &Picture::getDescrition() const
{
    return descrition;
}

void Picture::setDescrition(const QString &newDescrition)
{
    descrition = newDescrition;
}

Picture::Picture(QString tag, QString name, QString path, QString descrition)
{
    this->tag=tag;
    this->name=name;
    this->path=path;
    this->descrition=descrition;
}

Picture::Picture(QString path)
{
    this->path=path;
}
