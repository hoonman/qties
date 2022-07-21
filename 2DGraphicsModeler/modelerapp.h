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
    //void on_pushButton_readParser_clicked(QPaintEvent *event);

    void on_pushButton_clicked();

private:
    Ui::ModelerApp *ui;
    void paintEvent(QPaintEvent *event);
//<<<<<<< HEAD

//=======
    void openFile();
    std::string item;
    std::string text;

    int shapeID;
    std::string shape;
    int point1, point2, point3, point4;
    Qt::GlobalColor color;
    int width;
    Qt::PenStyle penStyle;
    Qt::PenCapStyle penCap;
    Qt::PenJoinStyle penJoin;
//>>>>>>> 9f109160e6a2f914cf749f7a48485852770f6fd8
};

#endif // MODELERAPP_H
