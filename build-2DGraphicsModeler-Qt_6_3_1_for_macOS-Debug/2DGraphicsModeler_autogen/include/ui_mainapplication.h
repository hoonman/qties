/********************************************************************************
** Form generated from reading UI file 'mainapplication.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPPLICATION_H
#define UI_MAINAPPLICATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApplication
{
public:
    QAction *actionSave_All;
    QAction *actionLoad;
    QAction *actionContact_Us;
    QAction *actionExit_Program;
    QAction *actionLogout;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionUndo_Action;
    QAction *actionRedo_Action;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuExit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainApplication)
    {
        if (MainApplication->objectName().isEmpty())
            MainApplication->setObjectName(QString::fromUtf8("MainApplication"));
        MainApplication->resize(800, 600);
        actionSave_All = new QAction(MainApplication);
        actionSave_All->setObjectName(QString::fromUtf8("actionSave_All"));
        actionLoad = new QAction(MainApplication);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionContact_Us = new QAction(MainApplication);
        actionContact_Us->setObjectName(QString::fromUtf8("actionContact_Us"));
        actionExit_Program = new QAction(MainApplication);
        actionExit_Program->setObjectName(QString::fromUtf8("actionExit_Program"));
        actionLogout = new QAction(MainApplication);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionCopy = new QAction(MainApplication);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCut = new QAction(MainApplication);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionPaste = new QAction(MainApplication);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainApplication);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionUndo_Action = new QAction(MainApplication);
        actionUndo_Action->setObjectName(QString::fromUtf8("actionUndo_Action"));
        actionRedo_Action = new QAction(MainApplication);
        actionRedo_Action->setObjectName(QString::fromUtf8("actionRedo_Action"));
        centralwidget = new QWidget(MainApplication);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainApplication->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainApplication);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuExit = new QMenu(menubar);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        MainApplication->setMenuBar(menubar);
        statusbar = new QStatusBar(MainApplication);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainApplication->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuExit->menuAction());
        menuFile->addAction(actionSave_All);
        menuFile->addAction(actionLoad);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionUndo_Action);
        menuEdit->addAction(actionRedo_Action);
        menuHelp->addAction(actionContact_Us);
        menuExit->addAction(actionExit_Program);
        menuExit->addAction(actionLogout);

        retranslateUi(MainApplication);

        QMetaObject::connectSlotsByName(MainApplication);
    } // setupUi

    void retranslateUi(QMainWindow *MainApplication)
    {
        MainApplication->setWindowTitle(QCoreApplication::translate("MainApplication", "MainWindow", nullptr));
        actionSave_All->setText(QCoreApplication::translate("MainApplication", "Save All", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainApplication", "Load", nullptr));
        actionContact_Us->setText(QCoreApplication::translate("MainApplication", "Contact Us", nullptr));
        actionExit_Program->setText(QCoreApplication::translate("MainApplication", "Logout", nullptr));
        actionLogout->setText(QCoreApplication::translate("MainApplication", "Exit Program", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainApplication", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("MainApplication", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainApplication", "Paste", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainApplication", "Delete", nullptr));
        actionUndo_Action->setText(QCoreApplication::translate("MainApplication", "Undo Action", nullptr));
        actionRedo_Action->setText(QCoreApplication::translate("MainApplication", "Redo Action", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainApplication", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainApplication", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainApplication", "Help", nullptr));
        menuExit->setTitle(QCoreApplication::translate("MainApplication", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainApplication: public Ui_MainApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPPLICATION_H
