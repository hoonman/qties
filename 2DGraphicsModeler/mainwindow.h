#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QDialog>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QStatusBar>
#include <QMouseEvent>
#include <QtCore>
#include <QtGui>
#include "vector.h"
#include "Shape.h"

class login;
class AboutUs;
class canvas;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSave_All_triggered();

    void on_actionLoad_triggered();

    void on_actionText_triggered();

    void on_actionLine_triggered();

    void on_actionRectangle_triggered();

    void on_actionElipse_triggered();

    void on_actionPolygon_triggered();

    void on_actionPolyline_triggered();

    void on_actionSelected_Shape_triggered();

    void on_actionContact_Us_triggered();

    void on_actionLogout_triggered();

    void on_actionExit_triggered();

    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

    void on_actionLogin_triggered();


private:
    Ui::MainWindow *ui;
 //   void paintEvent(QPaintEvent *event) override;
    AboutUs *aboutUs;
    login *Login;

//    void openFile();
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
    vector<Shape*> Shapes;
};
#endif // MAINWINDOW_H
