#include "mainwindow.h"
#include <QApplication>
#include<QPixmap>
#include<QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   QPixmap pixmap("8.png");
    QSplashScreen splash(pixmap);
    splash.show();//程序启动画面
    for(long index=0;index<=1000000000;index++);
    MainWindow w;
    w.show();
    splash.finish(&w);
    return a.exec();
}
