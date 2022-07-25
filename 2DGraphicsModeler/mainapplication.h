#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H

#include <QMainWindow>
#include <QDialog>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QStatusBar>
#include <QMouseEvent>

class MainWindow;
class AboutUs;

namespace Ui {
class MainApplication;
}

class MainApplication : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainApplication(QWidget *parent = nullptr);
    ~MainApplication();

    void setAdmin(bool settingAdmin){userIsAdmin = settingAdmin;}
    bool isAdmin(bool userIsAdmin){return this->userIsAdmin;}

protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void onMouseEvent(QPointF qPoint);

private slots:


    void on_actionExit_Program_triggered();

    void on_actionLogout_triggered();

    void on_actionContact_Us_triggered();

    void on_actionLoad_triggered();

    void on_actionCircle_triggered();

    void on_actionLine_triggered();

    void on_actionRectangle_triggered();

    void on_actionPolygon_triggered();

    void on_actionPolygon_2_triggered();

    void on_actionPolyline_triggered();


    void on_actionText_triggered();

private:
    Ui::MainApplication *ui;
    void paintEvent(QPaintEvent *event);

    MainWindow *mainWindow;
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

#endif // MAINAPPLICATION_H
