// ========================================================================
// modelerapp.h
// ========================================================================

#ifndef MODELERAPP_H
#define MODELERAPP_H

#include <QDialog>

namespace Ui
{
    class ModelerApp;
}

class ModelerApp : public QDialog
{
    Q_OBJECT

public:

    explicit ModelerApp(QWidget *parent = nullptr);

    // Destructor
    ~ModelerApp();


private slots:
    void on_pushButton_readParser_clicked(QPaintEvent *event);


private:
    Ui::ModelerApp *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // MODELERAPP_H
