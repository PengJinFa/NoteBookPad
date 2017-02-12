/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_O;
    QAction *action_S;
    QAction *action_A;
    QAction *action_P;
    QAction *action;
    QAction *fontAction;
    QAction *colorAction;
    QAction *dateAction;
    QAction *undoAction;
    QAction *redoAction;
    QAction *copyAction;
    QAction *cutAction;
    QAction *pastAction;
    QAction *selectAllAction;
    QAction *updateAction;
    QAction *aboutSoftwareAction;
    QAction *helpAction;
    QAction *aboutWebAction;
    QAction *aboutQtAction;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(410, 367);
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QString::fromUtf8("action_N"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_N->setIcon(icon);
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QString::fromUtf8("action_O"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_O->setIcon(icon1);
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QString::fromUtf8("action_S"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon2);
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QString::fromUtf8("action_A"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_A->setIcon(icon3);
        action_P = new QAction(MainWindow);
        action_P->setObjectName(QString::fromUtf8("action_P"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_P->setIcon(icon4);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon5);
        fontAction = new QAction(MainWindow);
        fontAction->setObjectName(QString::fromUtf8("fontAction"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        fontAction->setIcon(icon6);
        colorAction = new QAction(MainWindow);
        colorAction->setObjectName(QString::fromUtf8("colorAction"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorAction->setIcon(icon7);
        dateAction = new QAction(MainWindow);
        dateAction->setObjectName(QString::fromUtf8("dateAction"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/11.png"), QSize(), QIcon::Normal, QIcon::Off);
        dateAction->setIcon(icon8);
        undoAction = new QAction(MainWindow);
        undoAction->setObjectName(QString::fromUtf8("undoAction"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/12.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoAction->setIcon(icon9);
        redoAction = new QAction(MainWindow);
        redoAction->setObjectName(QString::fromUtf8("redoAction"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/a.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        redoAction->setIcon(icon10);
        copyAction = new QAction(MainWindow);
        copyAction->setObjectName(QString::fromUtf8("copyAction"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/png\345\233\276\347\211\207/b.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        copyAction->setIcon(icon11);
        cutAction = new QAction(MainWindow);
        cutAction->setObjectName(QString::fromUtf8("cutAction"));
        pastAction = new QAction(MainWindow);
        pastAction->setObjectName(QString::fromUtf8("pastAction"));
        selectAllAction = new QAction(MainWindow);
        selectAllAction->setObjectName(QString::fromUtf8("selectAllAction"));
        updateAction = new QAction(MainWindow);
        updateAction->setObjectName(QString::fromUtf8("updateAction"));
        aboutSoftwareAction = new QAction(MainWindow);
        aboutSoftwareAction->setObjectName(QString::fromUtf8("aboutSoftwareAction"));
        helpAction = new QAction(MainWindow);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        aboutWebAction = new QAction(MainWindow);
        aboutWebAction->setObjectName(QString::fromUtf8("aboutWebAction"));
        aboutQtAction = new QAction(MainWindow);
        aboutQtAction->setObjectName(QString::fromUtf8("aboutQtAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/png\345\233\276\347\211\207/2.png);"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 410, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu->menuAction());
        menu_F->addSeparator();
        menu_F->addAction(action_N);
        menu_F->addAction(action_O);
        menu_F->addSeparator();
        menu_F->addAction(action_S);
        menu_F->addAction(action_A);
        menu_F->addSeparator();
        menu_F->addAction(action_P);
        menu_F->addAction(action);
        menu_E->addAction(fontAction);
        menu_E->addAction(colorAction);
        menu_E->addAction(dateAction);
        menu_E->addSeparator();
        menu_E->addAction(undoAction);
        menu_E->addAction(redoAction);
        menu_E->addAction(copyAction);
        menu_E->addAction(cutAction);
        menu_E->addAction(pastAction);
        menu_E->addAction(selectAllAction);
        menu->addAction(aboutSoftwareAction);
        menu->addAction(aboutWebAction);
        menu->addAction(aboutQtAction);
        mainToolBar->addAction(action_N);
        mainToolBar->addAction(action_O);
        mainToolBar->addAction(action_S);
        mainToolBar->addSeparator();
        mainToolBar->addAction(copyAction);
        mainToolBar->addAction(fontAction);
        mainToolBar->addAction(colorAction);
        mainToolBar->addAction(pastAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_N->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\357\274\210&N)", 0, QApplication::UnicodeUTF8));
        action_O->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\357\274\210&O\357\274\211", 0, QApplication::UnicodeUTF8));
        action_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\357\274\210&S)", 0, QApplication::UnicodeUTF8));
        action_A->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272\357\274\210&A)", 0, QApplication::UnicodeUTF8));
        action_P->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(&P)", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\357\274\210&)", 0, QApplication::UnicodeUTF8));
        fontAction->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223(&Z)", 0, QApplication::UnicodeUTF8));
        colorAction->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262(&C)", 0, QApplication::UnicodeUTF8));
        dateAction->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237\344\270\216\346\227\266\351\227\264(&D)", 0, QApplication::UnicodeUTF8));
        undoAction->setText(QApplication::translate("MainWindow", " \346\222\244\351\224\200", 0, QApplication::UnicodeUTF8));
        redoAction->setText(QApplication::translate("MainWindow", "\351\207\215\345\201\232", 0, QApplication::UnicodeUTF8));
        copyAction->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        cutAction->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", 0, QApplication::UnicodeUTF8));
        pastAction->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", 0, QApplication::UnicodeUTF8));
        selectAllAction->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", 0, QApplication::UnicodeUTF8));
        updateAction->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260(&U)", 0, QApplication::UnicodeUTF8));
        aboutSoftwareAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\275\257\344\273\266(&S)", 0, QApplication::UnicodeUTF8));
        helpAction->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&E)", 0, QApplication::UnicodeUTF8));
        aboutWebAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\345\256\230\347\275\221(&W)", 0, QApplication::UnicodeUTF8));
        aboutQtAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt(&Q)", 0, QApplication::UnicodeUTF8));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", 0, QApplication::UnicodeUTF8));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210&E)", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251($H)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
