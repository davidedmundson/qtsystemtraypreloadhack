#include <QIcon>

class QSystemTrayIcon
{
public:
    QSystemTrayIcon(QObject * parent = 0);
    QSystemTrayIcon(const QIcon & icon, QObject * parent = 0);
    void setIcon(const QIcon &icon);
};