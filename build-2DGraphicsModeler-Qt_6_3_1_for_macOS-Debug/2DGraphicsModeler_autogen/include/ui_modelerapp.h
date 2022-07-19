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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModelerApp
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton_readParser;

    void setupUi(QDialog *ModelerApp)
    {
        if (ModelerApp->objectName().isEmpty())
            ModelerApp->setObjectName(QString::fromUtf8("ModelerApp"));
        ModelerApp->resize(1313, 672);
        graphicsView = new QGraphicsView(ModelerApp);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 590, 401, 81));
        pushButton_readParser = new QPushButton(ModelerApp);
        pushButton_readParser->setObjectName(QString::fromUtf8("pushButton_readParser"));
        pushButton_readParser->setGeometry(QRect(320, 590, 80, 24));

        retranslateUi(ModelerApp);

        QMetaObject::connectSlotsByName(ModelerApp);
    } // setupUi

    void retranslateUi(QDialog *ModelerApp)
    {
        ModelerApp->setWindowTitle(QCoreApplication::translate("ModelerApp", "Dialog", nullptr));
        pushButton_readParser->setText(QCoreApplication::translate("ModelerApp", "Read Parser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelerApp: public Ui_ModelerApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELERAPP_H
