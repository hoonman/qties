#include "modelerapp.h"
#include "ui_modelerapp.h"
#include "Shape.h"
#include "line.h"
#include "parser.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"

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
    QPoint point(20, 90);
    QPoint point2(100, 20);
    line->setPoints(point, point2);
    line->setPen(Qt::blue, 4, Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin);
    line->draw(this);

    Shape* rect = new Rectangle;
    rect->setPoints(QPoint(20,200), QPoint(170, 100));
    rect->setPen(gColor, 5, Qt::DashLine, Qt::RoundCap, Qt::RoundJoin);
    //rect->setPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    rect->draw(this);

    //testing polyline
    Shape* polyL = new Polyline;
  //  460, 90, 470, 20, 530, 40, 540, 80
    polyL->setPoints(QPoint(460, 90), QPoint(470, 20));
    polyL->setPoints(QPoint(530, 40), QPoint(540, 80));
    polyL->setPen(Qt::green, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    //rect->setPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    polyL->draw(this);

    //testing polgon
    Shape* polyG = new Polygon;
    polyG->setPoints(QPoint(900, 90), QPoint(910, 20));
    polyG->setPoints(QPoint(970, 40), QPoint(980, 80));
    polyG->setPen(Qt::cyan, 5, Qt::DashDotDotLine, Qt::FlatCap, Qt::MiterJoin);
    polyG->setBrush(Qt::yellow, Qt::SolidPattern);
    polyG->draw(this);



}
