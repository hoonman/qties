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

class login;
class AboutUs;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setAdmin(bool settingAdmin){userIsAdmin = settingAdmin;}
    bool isAdmin(bool userIsAdmin){return this->userIsAdmin;}

protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void onMouseEvent(QPointF qPoint);

private slots:




    void on_actionSave_All_triggered();

    void on_actionLoad_triggered();

    void on_actionText_triggered();

    void on_actionLine_triggered();

    void on_actionRectangle_triggered();

    void on_actionElipse_triggered();

    void on_actionPolygon_triggered();

    void on_actionPolyline_triggered();

    void on_actionContact_Us_triggered();

    void on_actionLogout_triggered();

    void on_actionExit_Program_triggered();

private:
    Ui::MainWindow *ui;
    void paintEvent(QPaintEvent *event) override;

        login *Login;
        AboutUs *aboutUs;

        bool userIsAdmin;

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
};

#endif // MAINWINDOW_H
