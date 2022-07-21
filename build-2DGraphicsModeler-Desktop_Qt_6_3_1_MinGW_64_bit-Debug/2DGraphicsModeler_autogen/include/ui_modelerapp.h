/********************************************************************************
** Form generated from reading UI file 'modelerapp.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELERAPP_H
#define UI_MODELERAPP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModelerApp
{
public:
    QAction *actionContact_Us;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_readParser;
    QGraphicsView *graphicsView_2;
    QPushButton *pushButton;

    void setupUi(QDialog *ModelerApp)
    {
        if (ModelerApp->objectName().isEmpty())
            ModelerApp->setObjectName(QString::fromUtf8("ModelerApp"));
        ModelerApp->resize(1305, 680);
        actionContact_Us = new QAction(ModelerApp);
        actionContact_Us->setObjectName(QString::fromUtf8("actionContact_Us"));
        graphicsView = new QGraphicsView(ModelerApp);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 590, 401, 81));
        pushButton_readParser = new QPushButton(ModelerApp);
        pushButton_readParser->setObjectName(QString::fromUtf8("pushButton_readParser"));
        pushButton_readParser->setGeometry(QRect(320, 590, 80, 24));
        graphicsView_2 = new QGraphicsView(ModelerApp);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(1050, 50, 251, 621));
        pushButton = new QPushButton(ModelerApp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1070, 60, 75, 24));

        retranslateUi(ModelerApp);

        QMetaObject::connectSlotsByName(ModelerApp);
    } // setupUi

    void retranslateUi(QDialog *ModelerApp)
    {
        ModelerApp->setWindowTitle(QCoreApplication::translate("ModelerApp", "Dialog", nullptr));
        actionContact_Us->setText(QCoreApplication::translate("ModelerApp", "Contact Us", nullptr));
#if QT_CONFIG(tooltip)
        actionContact_Us->setToolTip(QCoreApplication::translate("ModelerApp", "The Qties", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_readParser->setText(QCoreApplication::translate("ModelerApp", "Read Parser", nullptr));
        pushButton->setText(QCoreApplication::translate("ModelerApp", "Contact Us", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelerApp: public Ui_ModelerApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELERAPP_H
