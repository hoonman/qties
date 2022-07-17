#include "modelerapp.h"
#include "ui_modelerapp.h"
#include "Shape.h"
#include "line.h"

ModelerApp::ModelerApp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModelerApp)
{
    ui->setupUi(this);
}

ModelerApp::~ModelerApp()
{
    delete ui;
}

void ModelerApp::paintEvent(QPaintEvent *event)
{
    Shape* shape = new Line;
    QPoint point(10, 10);
    QPoint point2(22, 22);
    shape->setPoints(point, point2);
    shape->setPen(Qt::blue, 4, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    shape->draw(this);
}
