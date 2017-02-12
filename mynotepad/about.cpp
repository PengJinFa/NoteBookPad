#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    movie=new QMovie("123.gif");
    ui->movieLabel->setMovie(movie);
    movie->start();
    qDebug()<<"framecount:"<<movie->frameCount();
    QObject::connect(ui->startButton,SIGNAL(clicked()),this,SLOT(startMovieSlot()));
    QObject::connect(ui->stopButton,SIGNAL(clicked()),this,SLOT(stopMovieSlot()));
}

about::~about()
{
    delete ui;
}

void about::startMovieSlot()
{
    movie->start();
}

void about::stopMovieSlot()
{
    movie->stop();
}
