#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<QDebug>
#include<QFile>
#include<QFileDialog>
#include<QDir>
#include<QTextStream>
#include<QFont>
#include<QFontDialog>
#include<QColor>
#include<QColorDialog>
#include<QDateTime>
#include<QUrl>
#include<QDesktopServices>//用于访问桌面服务的类
#include"about.h"
#include<QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QString saveFileName;
private slots:
    void newFileSlot();
    void openFileSlot();
    void saveFileSlot();
    void saveAsFileSlot();
    void setFontSlot();
    void setColorSlot();
    void currentDateTimeSlot();
    void abotWebsiteSlot();//打开一个网站，使用默认浏览器
    void aboutSoftwareSlot();//弹出子对话框
protected:
    void closeEvent(QCloseEvent *);
};

#endif // MAINWINDOW_H
