/********************************************************************************
** Form generated from reading UI file 'QtGitHub01.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGITHUB01_H
#define UI_QTGITHUB01_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGitHub01Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGitHub01Class)
    {
        if (QtGitHub01Class->objectName().isEmpty())
            QtGitHub01Class->setObjectName(QStringLiteral("QtGitHub01Class"));
        QtGitHub01Class->resize(600, 400);
        menuBar = new QMenuBar(QtGitHub01Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGitHub01Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGitHub01Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGitHub01Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGitHub01Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGitHub01Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGitHub01Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGitHub01Class->setStatusBar(statusBar);

        retranslateUi(QtGitHub01Class);

        QMetaObject::connectSlotsByName(QtGitHub01Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGitHub01Class)
    {
        QtGitHub01Class->setWindowTitle(QApplication::translate("QtGitHub01Class", "QtGitHub01", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGitHub01Class: public Ui_QtGitHub01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGITHUB01_H
