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


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Line");
    ui->comboBox->addItem("Polyline");
    ui->comboBox->addItem("Polygon");
    ui->comboBox->addItem("Rectangle");
    ui->comboBox->addItem("Square");
    ui->comboBox->addItem("Ellipse");
    ui->comboBox->addItem("Circle");
    ui->comboBox->addItem("Text");
    connect(ui->comboBox, &QComboBox::activated, this, &MainWindow::changedShape);


//    ui->plainTextEdit->insertPlainText("20");
//    ui->plainTextEdit_2->insertPlainText("90");

    //ui->treeWidget->setColumnCount(2);
    Parser parse;
    this->Shapes = parse.readFile();
    ui->widget->setShape(Shapes);

}

MainWindow::~MainWindow()
{
    delete ui;
}

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
    Line* tempLine = new Line;

    tempLine->setLine(QPoint(10, 10), QPoint(30, 10));
    tempLine->setPen(Qt::blue, 2, Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin);
    Shapes.push_back(tempLine);
    ui->widget->setShape(Shapes);
    ui->widget->update();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->Shapes.pop_back();
    ui->widget->setShape(this->Shapes);
    ui->widget->update();

}


void MainWindow::on_moveButton_clicked()
{
    QString string;
    QString string2;

    string = ui->plainTextEdit->toPlainText();
    string2 = ui->plainTextEdit_2->toPlainText();


    int coordinate;
    int coordinate2, coordinate3, coordinate4;

    coordinate = string.toInt();
    coordinate2 = string2.toInt();
    vector<int> coords;

    coords.push_back(coordinate);
    coords.push_back(coordinate2);

    Shapes[index]->move(coords);
    qInfo() << "from string: " << string;

    ui->widget->update();
}

void MainWindow::selectLine()
{
    this->index = 0;
}

void MainWindow::changedShape()
{
    QVariant varient;
    //varient = ui->comboBox->itemData(ui->comboBox->currentIndex());
    varient = ui->comboBox->currentIndex();
    qInfo() << "Varient data: " << varient.data();
    qInfo() << "Varient looks like this: " << varient;

    this->index = varient.toInt();
    qInfo() << "Index looks like this: " << this->index;
}
