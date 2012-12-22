/********************************************************************************
** Form generated from reading UI file 'qttest1.ui'
**
** Created: Sat Dec 22 13:08:04 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTEST1_H
#define UI_QTTEST1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtTest1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qtTest1Class)
    {
        if (qtTest1Class->objectName().isEmpty())
            qtTest1Class->setObjectName(QString::fromUtf8("qtTest1Class"));
        qtTest1Class->resize(600, 400);
        menuBar = new QMenuBar(qtTest1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        qtTest1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qtTest1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qtTest1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(qtTest1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        qtTest1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(qtTest1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qtTest1Class->setStatusBar(statusBar);

        retranslateUi(qtTest1Class);

        QMetaObject::connectSlotsByName(qtTest1Class);
    } // setupUi

    void retranslateUi(QMainWindow *qtTest1Class)
    {
        qtTest1Class->setWindowTitle(QApplication::translate("qtTest1Class", "qtTest1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qtTest1Class: public Ui_qtTest1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTEST1_H
