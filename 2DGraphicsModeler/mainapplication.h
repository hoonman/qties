#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H

#include <QMainWindow>
#include <QDialog>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QStatusBar>

namespace Ui {
class MainApplication;
}

class MainApplication : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainApplication(QWidget *parent = nullptr);
    ~MainApplication();

private:
    Ui::MainApplication *ui;
    void paintEvent(QPaintEvent *event);

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
