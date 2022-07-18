#include "modelerapp.h"
#include "ui_modelerapp.h"
#include "Shape.h"
#include "line.h"
#include "parser.h"
#include "rectangle.h"
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

void ModelerApp::on_pushButton_readParser_clicked()
{
    parser hi;
    hi.openFile();
}

void ModelerApp::paintEvent(QPaintEvent *event)
{
    QString color;
    Qt::GlobalColor gColor;
    parser parse;
    parse.setPenColor();
    color = parse.getPenColor();

    gColor = Qt::cyan;


    Shape* line = new Line;
    QPoint point(10, 10);
    QPoint point2(22, 22);
    line->setPoints(point, point2);
    line->setPen(Qt::blue, 4, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    line->draw(this);

    Shape* rect = new Rectangle;
    rect->setPoints(QPoint(10,10), QPoint(200, 200));
    rect->setPen(gColor, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    //rect->setPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    rect->draw(this);

}
