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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutUs
{
public:
    QWidget *centralwidget;
    QLabel *Squirrel;
    QLabel *Details;
    QLabel *Contact;
    QLabel *Background;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AboutUs)
    {
        if (AboutUs->objectName().isEmpty())
            AboutUs->setObjectName(QString::fromUtf8("AboutUs"));
        AboutUs->resize(718, 525);
        centralwidget = new QWidget(AboutUs);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Squirrel = new QLabel(centralwidget);
        Squirrel->setObjectName(QString::fromUtf8("Squirrel"));
        Squirrel->setEnabled(true);
        Squirrel->setGeometry(QRect(210, 30, 261, 281));
        Squirrel->setAutoFillBackground(false);
        Squirrel->setTextFormat(Qt::AutoText);
        Squirrel->setPixmap(QPixmap(QString::fromUtf8("qt.png")));
        Squirrel->setScaledContents(true);
        Details = new QLabel(centralwidget);
        Details->setObjectName(QString::fromUtf8("Details"));
        Details->setGeometry(QRect(130, 280, 401, 221));
        QFont font;
        font.setPointSize(15);
        Details->setFont(font);
        Contact = new QLabel(centralwidget);
        Contact->setObjectName(QString::fromUtf8("Contact"));
        Contact->setGeometry(QRect(70, 170, 401, 221));
        Contact->setFont(font);
        Contact->setFrameShape(QFrame::NoFrame);
        Background = new QLabel(centralwidget);
        Background->setObjectName(QString::fromUtf8("Background"));
        Background->setGeometry(QRect(0, -80, 721, 561));
        Background->setPixmap(QPixmap(QString::fromUtf8("background.jpg")));
        Background->setScaledContents(true);
        AboutUs->setCentralWidget(centralwidget);
        Background->raise();
        Details->raise();
        Contact->raise();
        Squirrel->raise();
        menubar = new QMenuBar(AboutUs);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 718, 21));
        AboutUs->setMenuBar(menubar);
        statusbar = new QStatusBar(AboutUs);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AboutUs->setStatusBar(statusbar);

        retranslateUi(AboutUs);

        QMetaObject::connectSlotsByName(AboutUs);
    } // setupUi

    void retranslateUi(QMainWindow *AboutUs)
    {
        AboutUs->setWindowTitle(QCoreApplication::translate("AboutUs", "MainWindow", nullptr));
        Squirrel->setText(QString());
        Details->setText(QCoreApplication::translate("AboutUs", "<html><head/><body><p><span style=\" color:#ffff25;\">Phone: (949) 555-3523</span></p><p><span style=\" color:#ffff25;\">Email: </span><a href=\"https://www.youtube.com/watch?v=dQw4w9WgXcQ\"><span style=\" text-decoration: underline; color:#1317ff;\">support@TheQties.com</span></a></p><p><span style=\" color:#ffff25;\">Address: Raising Cane's Chicken Fingers, </span></p><p><span style=\" color:#ffff25;\">26801 Aliso Creek Rd, Aliso Viejo, CA 92656</span></p><p><span style=\" text-decoration: underline; color:#ffff25;\">Nonono</span></p></body></html>", nullptr));
        Contact->setText(QCoreApplication::translate("AboutUs", "<html><head/><body><p><span style=\" font-size:20pt; color:#0f0f0f;\">Contact us:</span></p></body></html>", nullptr));
        Background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutUs: public Ui_AboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
