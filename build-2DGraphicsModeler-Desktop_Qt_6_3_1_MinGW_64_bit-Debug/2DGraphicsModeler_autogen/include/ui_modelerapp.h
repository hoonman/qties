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

QT_BEGIN_NAMESPACE

class Ui_ModelerApp
{
public:
    QAction *actionContact_Us;

    void setupUi(QDialog *ModelerApp)
    {
        if (ModelerApp->objectName().isEmpty())
            ModelerApp->setObjectName(QString::fromUtf8("ModelerApp"));
        ModelerApp->resize(1305, 680);
        actionContact_Us = new QAction(ModelerApp);
        actionContact_Us->setObjectName(QString::fromUtf8("actionContact_Us"));

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
    } // retranslateUi

};

namespace Ui {
    class ModelerApp: public Ui_ModelerApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELERAPP_H
