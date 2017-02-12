#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("myNotepad");
    QObject::connect(ui->action_N,SIGNAL(triggered()),this,SLOT(newFileSlot()));
    QObject::connect(ui->action_O,SIGNAL(triggered()),this,SLOT(openFileSlot()));
    QObject::connect(ui->action_S,SIGNAL(triggered()),this,SLOT(saveFileSlot()));
    QObject::connect(ui->action,SIGNAL(triggered()),this,SLOT(close()));
    QObject::connect(ui->fontAction,SIGNAL(triggered()),this,SLOT(setFontSlot()));
    QObject::connect(ui->colorAction,SIGNAL(triggered()),this,SLOT(setColorSlot()));
    QObject::connect(ui->dateAction,SIGNAL(triggered()),this,SLOT(currentDateTimeSlot()));


    QObject::connect(ui->pastAction,SIGNAL(triggered()),ui->textEdit,SLOT(paste()));
    QObject::connect(ui->copyAction,SIGNAL(triggered()),ui->textEdit,SLOT(copy()));
    QObject::connect(ui->cutAction,SIGNAL(triggered()),ui->textEdit,SLOT(cut()));
    QObject::connect(ui->undoAction,SIGNAL(triggered()),ui->textEdit,SLOT(undo()));
    QObject::connect(ui->redoAction,SIGNAL(triggered()),ui->textEdit,SLOT(redo()));
    QObject::connect(ui->selectAllAction,SIGNAL(triggered()),ui->textEdit,SLOT(selectAll()));

    QObject::connect(ui->aboutQtAction,SIGNAL(triggered()),qApp,SLOT(aboutQt()));
    QObject::connect(ui->aboutWebAction,SIGNAL(triggered()),this,SLOT(abotWebsiteSlot()));
    QObject::connect(ui->aboutSoftwareAction,SIGNAL(triggered()),this,SLOT(aboutSoftwareSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFileSlot()
{
    if(ui->textEdit->document()->isModified())
    {qDebug()<<"modified";
    }
    else
    {qDebug()<<"not modified";
    ui->textEdit->clear();
    this->setWindowTitle("un.txt");
    }
}

void MainWindow::openFileSlot()
{
    QString fileName=QFileDialog::getOpenFileName(this,"open file",QDir::currentPath());
    //qDebug()<<"fileNameis:"<<fileName;
    if(fileName.isEmpty())//isNull
    {
        QMessageBox::information(this,"errormessage:","please select a file");
        return;
    }
    QFile *file=new QFile;
    file->setFileName(fileName);
    bool ok=file->open(QIODevice::ReadOnly);
    if(ok)
    {
        QTextStream in(file);
        ui->textEdit->setText(in.readAll());
        file->close();
        delete file;

    }
    else
    {
        QMessageBox::information(this,"error message","file open error");
        return;
    }
}

void MainWindow::saveFileSlot()
{
    if(saveFileName.isEmpty())
    {
    this->saveAsFileSlot();
    }
    else
    {
        QFile *file=new QFile;
        file->setFileName(saveFileName);
        bool ok=file->open(QIODevice::WriteOnly);
        if(ok)
        {
            QTextStream out(file);
            out<<ui->textEdit->toPlainText();
            file->close();
            delete file;
        }
    }
}

void MainWindow::saveAsFileSlot()
{
    QString saveFileName=QFileDialog::getSaveFileName(this,"sane file",QDir::currentPath());
    if(saveFileName.isEmpty())
    {
        QMessageBox::information(this,"error message:","please select a file");
        return;
    }
    QFile *file=new QFile;
    file->setFileName(saveFileName);
    bool ok=file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        out<<ui->textEdit->toPlainText();
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"error message","file open error");
        return;
    }
}

void MainWindow::setFontSlot()
{

    bool ok;
    QFont font=QFontDialog::getFont(&ok,this);
    if(ok)
    {
       ui->textEdit->setFont(font);
    }
    else
    {
        QMessageBox::information(this,"error message","error set font")  ;
        return;
    }
}

void MainWindow::setColorSlot()
{

    QColor color=QColorDialog::getColor(Qt::red,this);
    if(color.isValid())
    {
        ui->textEdit->setTextColor(color);
    }
    else
    {
        QMessageBox::information(this,"error message","error set color");
        return;
    }
}

void MainWindow::currentDateTimeSlot()
{
    QDateTime current=QDateTime::currentDateTime();
    QString time=current.toString("yyyy-MM-dd hh:mm:ss");
    ui->textEdit->append(time);
}

void MainWindow::abotWebsiteSlot()
{
    QUrl url=QUrl("http://www.ecnu.edu.cn");
    QDesktopServices::openUrl(url);
}

void MainWindow::aboutSoftwareSlot()
{
    about *dialog=new about;
    dialog->show();//unmodal dialog
    //dialog.exec(); modal dialog
}

void MainWindow::closeEvent(QCloseEvent *event)
{
  //event->accept();
    if(ui->textEdit->document()->isModified())
    {
        //从帮助中复制代码
        QMessageBox msgBox;
        msgBox.setText("The document has been modified.");
        msgBox.setInformativeText("Do you want to save your changes?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();
        switch (ret) {
           case QMessageBox::Save:
               // Save was clicked
            this->saveFileSlot();
               break;
           case QMessageBox::Discard:
               // Don't Save was clicked
            event->accept();
               break;
           case QMessageBox::Cancel:
               // Cancel was clicked
            event->ignore();
               break;
           default:
               // should never be reached
               break;
         }
    }
    else
    {
        event->accept();
    }
}
