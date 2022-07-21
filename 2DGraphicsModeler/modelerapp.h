// ========================================================================
// modelerapp.h
// ========================================================================

#ifndef MODELERAPP_H
#define MODELERAPP_H

#include <QDialog>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QStatusBar>


namespace Ui
{
    class ModelerApp;
}

class ModelerApp : public QDialog
{
    Q_OBJECT

public:

    explicit ModelerApp(QWidget *parent = nullptr);
    QMenu* menu[10];
    QAction* act[10];
    QMenuBar* menuBar ;
    QStatusBar* statusBar;

    // Destructor
    ~ModelerApp();



private slots:
    void on_pushButton_readParser_clicked(QPaintEvent *event);

    void on_pushButton_clicked();

private:
    Ui::ModelerApp *ui;
    void paintEvent(QPaintEvent *event);

};

#endif // MODELERAPP_H
