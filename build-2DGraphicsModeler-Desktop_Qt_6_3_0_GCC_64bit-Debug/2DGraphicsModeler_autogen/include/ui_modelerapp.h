/********************************************************************************
** Form generated from reading UI file 'modelerapp.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELERAPP_H
#define UI_MODELERAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ModelerApp
{
public:

    void setupUi(QDialog *ModelerApp)
    {
        if (ModelerApp->objectName().isEmpty())
            ModelerApp->setObjectName(QString::fromUtf8("ModelerApp"));
        ModelerApp->resize(400, 300);

        retranslateUi(ModelerApp);

        QMetaObject::connectSlotsByName(ModelerApp);
    } // setupUi

    void retranslateUi(QDialog *ModelerApp)
    {
        ModelerApp->setWindowTitle(QCoreApplication::translate("ModelerApp", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelerApp: public Ui_ModelerApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELERAPP_H
