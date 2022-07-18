#include "modelerapp.h"
#include "ui_modelerapp.h"
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "parser2.h"

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
//    parser hi;
//    hi.openFile();
    int something;
    parser2 fileName;
    fileName.openAndDraw();
    something = fileName.getID();
    std::cout << "somethign: "<< something << std::endl;

}

void ModelerApp::paintEvent(QPaintEvent *event)
{
    QString color;
    Qt::GlobalColor gColor;
//    parser parse;
//    parse.setPenColor();
//    color = parse.getPenColor();

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

    //Made a different set function for ellipse dimensions
    Shape* ellip = new Ellipse;
    dynamic_cast<Ellipse*>(ellip)->setEllipse(QPoint(520,200), 170, 100);
    ellip->setPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    ellip->setBrush(Qt::white, Qt::NoBrush);
    ellip->draw(this);

    Shape* square = new Rectangle;
    square->setPoints(QPoint(800, 150), QPoint(200, 200));
    square->setPen(Qt::red, 5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    square->setBrush(Qt::blue, Qt::HorPattern);
    //rect->setPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    square->draw(this);

    Shape* circle = new Ellipse;
    dynamic_cast<Ellipse*>(circle)->setEllipse(QPoint(120,450), 100, 100);
    circle->setPen(Qt::black, 12, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    circle->setBrush(Qt::magenta, Qt::SolidPattern);
    circle->draw(this);
}
