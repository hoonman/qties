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
      menu[1]->addAction("Delete");
      menu[1]->addAction("Undo Action");
      menu[1]->addAction("Redo Action");

      menu[2] = new QMenu("Help");
      menu[2]->addAction("Contact Us");


      menuBar->setGeometry(0,0,this->width(),23);//Start from the upper left coordinate,
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

void ModelerApp::on_pushButton_readParser_clicked(QPaintEvent *event)
{
//    parser hi;
//    hi.openFile();
    int something;
    parser2 fileName;
    fileName.openAndDraw();
    something = fileName.getID();
    std::cout << "somethign: "<< something << std::endl;
//    Shape* line = new Line;
//    QPoint point(20, 90);
//    QPoint point2(100, 20);
//    line->setPoints(point, point2);
//    line->setPen(Qt::blue, 4, Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin);
//    line->draw(this);

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

//This function will allow the contact us button press to display information
void ModelerApp::on_pushButton_clicked()
{
    QMessageBox::information(this, "Contact Info", "The Qties");
}

