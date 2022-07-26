/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutUs
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AboutUs)
    {
        if (AboutUs->objectName().isEmpty())
            AboutUs->setObjectName(QString::fromUtf8("AboutUs"));
        AboutUs->resize(800, 600);
        menubar = new QMenuBar(AboutUs);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        AboutUs->setMenuBar(menubar);
        centralwidget = new QWidget(AboutUs);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        AboutUs->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AboutUs);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AboutUs->setStatusBar(statusbar);

        retranslateUi(AboutUs);

        QMetaObject::connectSlotsByName(AboutUs);
    } // setupUi

    void retranslateUi(QMainWindow *AboutUs)
    {
        AboutUs->setWindowTitle(QCoreApplication::translate("AboutUs", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutUs: public Ui_AboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
