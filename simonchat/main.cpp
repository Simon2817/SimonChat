#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile qss_file(":/style/stylesheet.qss");
    if (qss_file.open(QIODevice::ReadOnly))
    {
        qDebug() << "全局qss文件stylesheet.qss打开成功。" << endl;
        QString style = QLatin1String(qss_file.readAll());
        a.setStyleSheet(style);
        qss_file.close();
    }
    else
    {
        qDebug() << "全局qss文件stylesheet.qss打开失败！" << endl;
    }

    MainWindow w;
    w.show();
    return a.exec();
}
