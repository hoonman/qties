#ifndef MODELERAPP_H
#define MODELERAPP_H

#include <QDialog>

namespace Ui {
class ModelerApp;
}

class ModelerApp : public QDialog
{
    Q_OBJECT

public:
    explicit ModelerApp(QWidget *parent = nullptr);
    ~ModelerApp();

private:
    Ui::ModelerApp *ui;
};

#endif // MODELERAPP_H
