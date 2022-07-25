#include "mainapplication.h"
#include "mainwindow.h"
#include "aboutus.h"
#include "ui_mainapplication.h"
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "parser2.h"
#include "text.h"
#include "QFileDialog"

MainApplication::MainApplication(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainApplication)
{
    ui->setupUi(this);

    setWindowTitle("Modeler Paint App");
}

MainApplication::~MainApplication()
{
    delete ui;
}

void MainApplication::paintEvent(QPaintEvent *event)
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

void MainApplication::openFile()
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

void MainApplication::on_actionExit_Program_triggered()
{
    QApplication::quit();
}


void MainApplication::on_actionLogout_triggered()
{
    close();
    mainWindow = new MainWindow(this);
    mainWindow->show();
}


void MainApplication::on_actionContact_Us_triggered()
{
    aboutUs = new AboutUs(this);
    aboutUs->show();
}


void MainApplication::on_actionLoad_triggered()
{
    QString filePathName = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());

    parser2 file;
    file.setFilePath(filePathName);
    file.readFile();
}
// ADD ---------------------------------------------------------------------------------------------
// User must be admin in order to use ALL the functions BELOW this line
// ADD ---------------------------------------------------------------------------------------------


void MainApplication::on_actionCircle_triggered()
{
    if(userIsAdmin == true)
    {

    }
}


void MainApplication::on_actionLine_triggered()
{
    if(userIsAdmin == true)
    {

    }
}


void MainApplication::on_actionRectangle_triggered()
{
    if(userIsAdmin == true)
    {

    }
}


void MainApplication::on_actionPolygon_triggered()
{
    if(userIsAdmin == true)
    {

    }
}


void MainApplication::on_actionPolygon_2_triggered()
{
    if(userIsAdmin == true)
    {

    }
}


void MainApplication::on_actionPolyline_triggered()
{
    if(userIsAdmin == true)
    {

    }
}

// END OF ADD ---------------------------------------------------------------------------------------------
// START OF DELETE ----------------------------------------------------------------------------------------


void MainApplication::on_actionText_triggered()
{
    if(userIsAdmin == true)
    {

    }
}

// END OF DELETE ----------------------------------------------------------------------------------------

