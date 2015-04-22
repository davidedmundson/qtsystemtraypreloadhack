#include "systray.h"

#include <QIcon>
#include <QDebug>
#include <QLabel>


QSystemTrayIcon::QSystemTrayIcon(const QIcon &icon, QObject *parent):
    QSystemTrayIcon(parent)
{
    QLabel *label = new QLabel();
    label->setPixmap(icon.pixmap(40,40));
    label->show();
    qDebug() << "YAY1" << icon.name();
}

void QSystemTrayIcon::setIcon(const QIcon &icon)
{
    QLabel *label = new QLabel();
    label->setPixmap(icon.pixmap(40,40));
    label->show();
    qDebug() << "YAY" << icon.name();
}
