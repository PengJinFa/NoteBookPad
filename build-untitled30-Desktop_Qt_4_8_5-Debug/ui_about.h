/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *movieLabel;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopButton;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(501, 357);
        movieLabel = new QLabel(about);
        movieLabel->setObjectName(QString::fromUtf8("movieLabel"));
        movieLabel->setGeometry(QRect(80, 130, 341, 151));
        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 401, 91));
        widget = new QWidget(about);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 310, 272, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stopButton = new QPushButton(widget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout->addWidget(stopButton);

        startButton = new QPushButton(widget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout->addWidget(startButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", 0, QApplication::UnicodeUTF8));
        movieLabel->setText(QString());
        label->setText(QApplication::translate("about", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#ff0000;\">\347\211\210\346\235\203\346\211\200\346\234\211\357\274\214\347\233\227\347\211\210\345\277\205\347\251\266\357\274\214\346\211\200\344\273\245\350\247\243\351\207\212\346\235\203\345\275\222\344\275\234\350\200\205\346\211\200\346\234\211</span></p><p><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#ff0000;\">\347\234\213\344\275\240\350\277\230\346\225\242\344\270\215\346\225\242\347\233\227\347\211\210</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("about", "\346\200\225\344\272\206\357\274\214\344\270\215\346\225\242\344\272\206", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("about", "\344\270\215\346\200\225\357\274\214\346\224\276\351\251\254\350\277\207\346\235\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
