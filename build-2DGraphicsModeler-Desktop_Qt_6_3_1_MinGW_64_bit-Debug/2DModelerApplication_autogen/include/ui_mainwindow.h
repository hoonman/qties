/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include <canvas.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_All;
    QAction *actionLoad;
    QAction *actionText;
    QAction *actionLine;
    QAction *actionRectangle;
    QAction *actionElipse;
    QAction *actionPolygon;
    QAction *actionPolyline;
    QAction *actionSelected_Shape;
    QAction *actionContact_Us;
    QAction *actionLogout;
    QAction *actionExit;
    QWidget *centralwidget;
    canvas *widget;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAdd;
    QMenu *menuRemove;
    QMenu *menuHelp;
    QMenu *menuExit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionSave_All = new QAction(MainWindow);
        actionSave_All->setObjectName(QString::fromUtf8("actionSave_All"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        actionElipse = new QAction(MainWindow);
        actionElipse->setObjectName(QString::fromUtf8("actionElipse"));
        actionPolygon = new QAction(MainWindow);
        actionPolygon->setObjectName(QString::fromUtf8("actionPolygon"));
        actionPolyline = new QAction(MainWindow);
        actionPolyline->setObjectName(QString::fromUtf8("actionPolyline"));
        actionSelected_Shape = new QAction(MainWindow);
        actionSelected_Shape->setObjectName(QString::fromUtf8("actionSelected_Shape"));
        actionContact_Us = new QAction(MainWindow);
        actionContact_Us->setObjectName(QString::fromUtf8("actionContact_Us"));
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new canvas(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 20, 541, 531));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 60, 51, 31));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 20, 82, 28));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 110, 181, 321));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 450, 181, 29));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(50, 140, 81, 21));
        plainTextEdit_2 = new QPlainTextEdit(centralwidget);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(50, 170, 81, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 140, 21, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 170, 21, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAdd = new QMenu(menubar);
        menuAdd->setObjectName(QString::fromUtf8("menuAdd"));
        menuRemove = new QMenu(menubar);
        menuRemove->setObjectName(QString::fromUtf8("menuRemove"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuExit = new QMenu(menubar);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAdd->menuAction());
        menubar->addAction(menuRemove->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuExit->menuAction());
        menuFile->addAction(actionSave_All);
        menuFile->addAction(actionLoad);
        menuAdd->addAction(actionText);
        menuAdd->addAction(actionLine);
        menuAdd->addAction(actionRectangle);
        menuAdd->addAction(actionElipse);
        menuAdd->addAction(actionPolygon);
        menuAdd->addAction(actionPolyline);
        menuRemove->addAction(actionSelected_Shape);
        menuHelp->addAction(actionContact_Us);
        menuExit->addAction(actionLogout);
        menuExit->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave_All->setText(QCoreApplication::translate("MainWindow", "Save All", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionText->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
        actionLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        actionRectangle->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        actionElipse->setText(QCoreApplication::translate("MainWindow", "Elipse", nullptr));
        actionPolygon->setText(QCoreApplication::translate("MainWindow", "Polygon", nullptr));
        actionPolyline->setText(QCoreApplication::translate("MainWindow", "Polyline", nullptr));
        actionSelected_Shape->setText(QCoreApplication::translate("MainWindow", "Selected Shape", nullptr));
        actionContact_Us->setText(QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
        actionLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Modify", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAdd->setTitle(QCoreApplication::translate("MainWindow", "Add", nullptr));
        menuRemove->setTitle(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuExit->setTitle(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
