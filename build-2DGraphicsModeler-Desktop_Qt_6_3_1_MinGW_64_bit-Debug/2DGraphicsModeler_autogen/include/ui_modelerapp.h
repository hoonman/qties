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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModelerApp
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *ModelerApp)
    {
        if (ModelerApp->objectName().isEmpty())
            ModelerApp->setObjectName(QString::fromUtf8("ModelerApp"));
        ModelerApp->resize(400, 300);
        pushButton = new QPushButton(ModelerApp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 160, 83, 29));

        retranslateUi(ModelerApp);

        QMetaObject::connectSlotsByName(ModelerApp);
    } // setupUi

    void retranslateUi(QDialog *ModelerApp)
    {
        ModelerApp->setWindowTitle(QCoreApplication::translate("ModelerApp", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ModelerApp", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelerApp: public Ui_ModelerApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELERAPP_H
