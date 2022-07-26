#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "aboutus.h"
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "parser2.h"
#include "text.h"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::openFile()
{
    parser2 file;
    file.readFile();
    shapeID = file.getShapeID();
    shape = file.getShape();
    point1 = file.getPoint1();
    point2 = file.getPoint2();
    point3 = file.getPoint3();
    point4 = file.getPoint4();
    penJoin = file.getPenJoinStyle();
    //std::cout << penJoin << std::endl;
    color = file.getColor();
}
*/
void MainWindow::on_actionSave_All_triggered()
{

}


void MainWindow::on_actionLoad_triggered()
{

}


void MainWindow::on_actionText_triggered()
{

}


void MainWindow::on_actionLine_triggered()
{

}


void MainWindow::on_actionRectangle_triggered()
{

}


void MainWindow::on_actionElipse_triggered()
{

}


void MainWindow::on_actionPolygon_triggered()
{

}


void MainWindow::on_actionPolyline_triggered()
{

}


void MainWindow::on_actionSelected_Shape_triggered()
{

}


void MainWindow::on_actionContact_Us_triggered()
{

}


void MainWindow::on_actionLogout_triggered()
{

}


void MainWindow::on_actionExit_triggered()
{

}

