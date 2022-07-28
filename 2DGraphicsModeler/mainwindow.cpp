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
#include "login.h"

vector<Shape*>Shapes;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Line");
    ui->comboBox->addItem("Polyline");
    ui->comboBox->addItem("Polygon");
    ui->comboBox->addItem("Rectangle");
    ui->comboBox->addItem("Ellipse");
    ui->comboBox->addItem("Square");
    ui->comboBox->addItem("Circle");
    ui->comboBox->addItem("Text");

    //ui->treeWidget->setColumnCount(2);
    Parser parse;
    vector<Shape*> myShapes = parse.readFile();
    ui->widget->setShape(myShapes);

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
    aboutUs = new AboutUs(this);
    aboutUs->show();
}

void MainWindow::on_actionLogin_triggered()
{
    Login = new login(this);
    Login->show();
}

void MainWindow::on_actionLogout_triggered()
{
    bool powers = false;
    Login->setUserIsAdmin(powers);
    QMessageBox::information(this, "Logout", "Successfully Logged Out!");
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title", ui->comboBox->currentText());
}



void MainWindow::on_pushButton_2_clicked()
{
//    QPalette pal = QPalette();
//    pal.setColor(QPalette::Window, Qt::gray);
//    canvass->setAutoFillBackground(true);
//    canvass->setPalette(pal);
//    canvass->show();
    //canvass->paintEvent(NULL);
    //canvass->repaint();
//    canvass->repaint();
//    canvass->update();
    ui->widget->setAutoFillBackground(true);

    ui->widget->update();

}


