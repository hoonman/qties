// ========================================================================
// modelerapp.cpp
// ========================================================================

#include "modelerapp.h"
#include "ui_modelerapp.h"
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "parser2.h"
#include "text.h"

ModelerApp::ModelerApp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModelerApp)
{
    ui->setupUi(this);

      statusBar = new QStatusBar(this);
      menuBar = new QMenuBar(this);

      act[0] = new QAction("Open",this);
      act[0]->setShortcut(Qt::CTRL | Qt::Key_O );

      menu[0] = new QMenu("File");
     // menu[0]->addSeparator(); //add a dividing line
      menu[0]->addAction("New");
      menu[0]->addAction("Print");
      menu[0]->addAction("Save");


      menu[1] = new QMenu("Edit");
      menu[1]->addAction("Copy");
      menu[1]->addAction("Cut");
      menu[1]->addAction("Paste");

      menu[2] = new QMenu("Help");
      menu[2]->addAction("Contact us");

      //menuBar->setGeometry(0,0,this->width(),23);//Start from the upper left coordinate,
                                                    //set the width, height;
                                                    //set the menu bar position
      menuBar->addMenu(menu[0]);
      menuBar->addMenu(menu[1]);
      menuBar->addMenu(menu[2]);

  }



ModelerApp::~ModelerApp()
{
    delete ui;
}

void ModelerApp::openFile()
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


void ModelerApp::paintEvent(QPaintEvent *event)
{
    //notes: when the program first runs, entry point for qwidget application
    //qobject is created, store pointers to the shapes
    //
    openFile();
    //color = Qt::cyan;
    Line* line = new Line;
    QPoint point(point1, point2);
    QPoint point2(point3, point4);
    line->setLine(point, point2);
    line->setPen(color, 4, Qt::DashDotLine, Qt::FlatCap, penJoin);
    line->draw(this);
//    Shape* line = new Line;
//    QPoint point(point1, point2);
//    QPoint point2(point3, point4);
//    line->setPoints(point, point2);
//    line->setPen(color, 4, penStyle, penCap, penJoin);
//    line->draw(this);
    Rectangle* rect = new Rectangle;
    rect->setRectangle(QPoint(20,200), QPoint(170, 100));
    rect->setPen(Qt::cyan, 5, Qt::DashLine, Qt::RoundCap, Qt::RoundJoin);
    rect->draw(this);

    //testing polyline
    Polyline* polyL = new Polyline;
  //  460, 90, 470, 20, 530, 40, 540, 80
    polyL->setPolyline(QPoint(460, 90), QPoint(470, 20));
    polyL->setPolyline(QPoint(530, 40), QPoint(540, 80));
    polyL->setPen(Qt::green, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    polyL->draw(this);

    //testing polgon
    Polygon* polyG = new Polygon;
    polyG->setPolygon(QPoint(900, 90), QPoint(910, 20));
    polyG->setPolygon(QPoint(970, 40), QPoint(980, 80));
    polyG->setPen(Qt::cyan, 5, Qt::DashDotDotLine, Qt::FlatCap, Qt::MiterJoin);
    polyG->setBrush(Qt::yellow, Qt::SolidPattern);
    polyG->draw(this);

    Ellipse* ellip = new Ellipse;
    ellip->setEllipse(QPoint(520,200), 170, 100);
    ellip->setPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    ellip->setBrush(Qt::white, Qt::NoBrush);
    ellip->draw(this);

    Rectangle* square = new Rectangle;
    square->setRectangle(QPoint(800, 150), QPoint(200, 200));
    square->setPen(Qt::red, 5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    square->setBrush(Qt::blue, Qt::HorPattern);
    //rect->setPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    square->draw(this);

    Ellipse* circle = new Ellipse;
    circle->setEllipse(QPoint(120,450), 100, 100);
    circle->setPen(Qt::black, 12, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    circle->setBrush(Qt::magenta, Qt::SolidPattern);
    circle->draw(this);

    Text* text = new Text;
    text->setText(250, 425, 500, 50, Qt::AlignCenter, "Class Project 2 - 2D Graphics Modeler");
    text->setFont(Qt::blue, 10, "Comic Sans MS", QFont::StyleItalic, QFont::Normal);
    text->draw(this);
}


