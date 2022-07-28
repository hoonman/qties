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

    ui->spinBox_3->setMaximum(1500);
    ui->spinBox_4->setMaximum(1500);
    ui->spinBox_5->setMaximum(1500);
    ui->spinBox_6->setMaximum(1500);
    ui->spinBox_16->setMaximum(1500);
    ui->spinBox_15->setMaximum(1500);
    ui->spinBox_14->setMaximum(1500);
    ui->spinBox_13->setMaximum(1500);
/*
    if(Login->getUserIsAdmin() == false)
    {
        ui->moveButton->setEnabled(false);
        ui->add->setEnabled(false);
        ui->remove->setEnabled(false);
    }
    else
    {
        ui->moveButton->setEnabled(true);
        ui->add->setEnabled(true);
        ui->remove->setEnabled(true);
    }
    */
//    ui->plainTextEdit->insertPlainText("20");
//    ui->plainTextEdit_2->insertPlainText("90");

    //ui->treeWidget->setColumnCount(2);
    Parser parse;
    this->Shapes = parse.readFile();
    ui->widget->setShape(Shapes);

    //innitProperties
    innitProperties();
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


void MainWindow::on_moveButton_clicked()
{

 //       if(Login->getUserIsAdmin() == true)
 //       {
            ui->moveButton->setEnabled(true);
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
  //      }
  //      else
  //      {
  //          QMessageBox::information(this, "Requires Admin", "User is not an admin.");
  //     }


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

void MainWindow::innitProperties()
{
    //Shape combobox
    ui->ShapeComboBox->addItem("Line");
    ui->ShapeComboBox->addItem("Polyline");
    ui->ShapeComboBox->addItem("Polygon");
    ui->ShapeComboBox->addItem("Rectangle");
    ui->ShapeComboBox->addItem("Square");
    ui->ShapeComboBox->addItem("Ellipse");
    ui->ShapeComboBox->addItem("Circle");
    ui->ShapeComboBox->addItem("Text");
    //PenColors
    ui->PenColorCB->addItem("white");
    ui->PenColorCB->addItem("black");
    ui->PenColorCB->addItem("red");
    ui->PenColorCB->addItem("green");
    ui->PenColorCB->addItem("blue");
    ui->PenColorCB->addItem("cyan");
    ui->PenColorCB->addItem("magenta");
    ui->PenColorCB->addItem("yellow");
    ui->PenColorCB->addItem("gray");
    //PenStyle
    ui->PenStyleCB->addItem("NoPen");
    ui->PenStyleCB->addItem("SolidLine");
    ui->PenStyleCB->addItem("DashLine");
    ui->PenStyleCB->addItem("DotLine");
    ui->PenStyleCB->addItem("DashDotLine");
    ui->PenStyleCB->addItem("DashDotDotLine");
    //PenCap
    ui->PenCapCB->addItem("FlatCap");
    ui->PenCapCB->addItem("SquareCap");
    ui->PenCapCB->addItem("RoundCap");

    //PenJoin
    ui->PenJoinCB->addItem("MiterJoin");
    ui->PenJoinCB->addItem("BevelJoin");
    ui->PenJoinCB->addItem("RoundJoin");

    //Brush color
    ui->BrushColorCB->addItem("white");
    ui->BrushColorCB->addItem("black");
    ui->BrushColorCB->addItem("red");
    ui->BrushColorCB->addItem("green");
    ui->BrushColorCB->addItem("blue");
    ui->BrushColorCB->addItem("cyan");
    ui->BrushColorCB->addItem("magenta");
    ui->BrushColorCB->addItem("yellow");
    ui->BrushColorCB->addItem("gray");

    //BrushStyle
    ui->BrushStyleCB->addItem("SolidPattern");
    ui->BrushStyleCB->addItem("HorPattern");
    ui->BrushStyleCB->addItem("VerPattern");
    ui->BrushStyleCB->addItem("NoBrush");

    //TextColor
    ui->TextColorCB->addItem("white");
    ui->TextColorCB->addItem("black");
    ui->TextColorCB->addItem("red");
    ui->TextColorCB->addItem("green");
    ui->TextColorCB->addItem("blue");
    ui->TextColorCB->addItem("cyan");
    ui->TextColorCB->addItem("magenta");
    ui->TextColorCB->addItem("yellow");
    ui->TextColorCB->addItem("gray");

    //Text Alignment
    ui->TextAlignCB->addItem("AlignLeft");
    ui->TextAlignCB->addItem("AlignRight");
    ui->TextAlignCB->addItem("AlignTop");
    ui->TextAlignCB->addItem("AlignBottom");
    ui->TextAlignCB->addItem("AlignCenter");
    //FontFamily
    ui->TextFontType->addItem("ComicSansMS");
    ui->TextFontType->addItem("Courier");
    ui->TextFontType->addItem("Helvetica");
    ui->TextFontType->addItem("Times");
    //Font Style
    ui->TextStyle->addItem("StyleNormal");
    ui->TextStyle->addItem("StyleItalic");
    ui->TextStyle->addItem("StyleOblique");

    ui->TextWeight->addItem("Thin");
    ui->TextWeight->addItem("Light");
    ui->TextWeight->addItem("Normal");
    ui->TextWeight->addItem("Bold");
}

void MainWindow::on_ShapeComboBox_currentIndexChanged(int index)
{
    switch(index){
     case 0:
        this->allshape = "Line"; std::cout << allshape << endl;
        break;
     case 1:
        this->allshape = "Polyline";std::cout << allshape << endl;
        break;
     case 2:
        this->allshape = "Polygon";std::cout << allshape << endl;
        break;
     case 3:
        this->allshape = "Rectangle";std::cout << allshape << endl;
        break;
     case 4:
        this->allshape = "Square";std::cout << allshape << endl;
        break;
     case 5:
        this->allshape = "Ellipse";std::cout << allshape << endl;
        break;
     case 6:
        this->allshape = "Circle";std::cout << allshape << endl;
        break;
     case 7:
        this->allshape = "Text";std::cout << allshape << endl;
        break;
    }
}


void MainWindow::on_PenColorCB_currentIndexChanged(int index)
{
    switch(index){
     case 0:
        this->penColor = Qt::white;
        break;
     case 1:
        this->penColor = Qt::black;
        break;
     case 2:
        this->penColor = Qt::red;
        break;
     case 3:
        this->penColor = Qt::green;
        break;
     case 4:
        this->penColor = Qt::blue;
        break;
     case 5:
        this->penColor = Qt::cyan;
        break;
     case 6:
        this->penColor = Qt::magenta;
        break;
     case 7:
        this->penColor = Qt::yellow;
        break;
     case 8:
       this->penColor = Qt::gray;
       break;
    }
}


void MainWindow::on_PenStyleCB_currentIndexChanged(int index)
{
    switch(index){
     case 0:
        this->penStyle = Qt::NoPen;
        break;
     case 1:
        this->penStyle = Qt::SolidLine;
        break;
     case 2:
        this->penStyle = Qt::DashLine;
        break;
     case 3:
        this->penStyle = Qt::DotLine;
        break;
     case 4:
        this->penStyle = Qt::DashDotLine;
        break;
     case 5:
        this->penStyle = Qt::DashDotDotLine;
        break;
    }
}


void MainWindow::on_PenCapCB_currentIndexChanged(int index)
{
    switch(index){
     case 0:
        this->penCap = Qt::FlatCap;
        break;
     case 1:
        this->penCap = Qt::SquareCap;
        break;
     case 2:
        this->penCap = Qt::RoundCap;
        break;
    }
}


void MainWindow::on_PenJoinCB_currentIndexChanged(int index)
{
    switch(index){
     case 0:
        this->penJoin = Qt::MiterJoin;
        break;
     case 1:
        this->penJoin = Qt::BevelJoin;
        break;
     case 2:
        this->penJoin = Qt::RoundJoin;
        break;
    }
}


void MainWindow::on_BrushColorCB_currentIndexChanged(int index)
{
    switch(index){
    case 0:
       this->brushColor = Qt::white;
       break;
    case 1:
       this->brushColor = Qt::black;
       break;
    case 2:
       this->brushColor = Qt::red;
       break;
    case 3:
       this->brushColor = Qt::green;
       break;
    case 4:
       this->brushColor = Qt::blue;
       break;
    case 5:
       this->brushColor = Qt::cyan;
       break;
    case 6:
       this->brushColor = Qt::magenta;
       break;
    case 7:
       this->brushColor = Qt::yellow;
       break;
    case 8:
       this->brushColor = Qt::gray;
      break;
   }
}


void MainWindow::on_BrushStyleCB_currentIndexChanged(int index)
{
    switch(index){
    case 0:
       this->brushStyle = Qt::SolidPattern;
       break;
    case 1:
       this->brushStyle = Qt::HorPattern;
       break;
    case 2:
       this->brushStyle = Qt::VerPattern;
       break;
    case 3:
       this->brushStyle = Qt::NoBrush;
       break;
    }
}

void MainWindow::on_TextColorCB_currentIndexChanged(int index)
{
    switch(index){
    case 0:
       this->textColor = Qt::white;
       break;
    case 1:
       this->textColor = Qt::black;
       break;
    case 2:
       this->textColor = Qt::red;
       break;
    case 3:
       this->textColor = Qt::green;
       break;
    case 4:
       this->textColor = Qt::blue;
       break;
    case 5:
       this->textColor = Qt::cyan;
       break;
    case 6:
       this->textColor = Qt::magenta;
       break;
    case 7:
       this->textColor = Qt::yellow;
       break;
    case 8:
       this->textColor = Qt::gray;
      break;
   }
}




void MainWindow::on_TextAlignCB_currentIndexChanged(int index)
{
    switch(index){
    case 0:
       this->textAlign = Qt::AlignLeft;std::cout << textAlign << endl;
       break;
    case 1:
       this->textAlign = Qt::AlignRight;std::cout << textAlign << endl;
       break;
    case 2:
       this->textAlign = Qt::AlignTop;std::cout << textAlign << endl;
       break;
    case 3:
       this->textAlign = Qt::AlignBottom;std::cout << textAlign << endl;
       break;
    case 4:
       this->textAlign = Qt::AlignCenter;std::cout << textAlign << endl;
       break;
     }
}





void MainWindow::on_TextFontType_currentIndexChanged(int index)
{
    switch(index){
    case 0:
       this->fontFamily = "Comic Sans MS";
       break;
    case 1:
       this->fontFamily = "Courier";
       break;
    case 2:
       this->fontFamily = "Helvetica";
       break;
    case 3:
       this->fontFamily = "Times";
       break;
     }
}


void MainWindow::on_TextStyle_currentIndexChanged(int index)
{
    switch(index){
    case 0:
       this->fontStyle = QFont::StyleNormal; std::cout << fontStyle << endl;
       break;
    case 1:
       this->fontStyle = QFont::StyleItalic; std::cout << fontStyle << endl;
       break;
    case 2:
       this->fontStyle = QFont::StyleOblique; std::cout << fontStyle << endl;
       break;
     }
}


void MainWindow::on_TextWeight_currentIndexChanged(int index)
{    switch(index){
    case 0:
       this->fontWeight = QFont::Thin; std::cout << fontWeight<< endl;
       break;
    case 1:
       this->fontWeight = QFont::Light; std::cout << fontWeight << endl;
       break;
    case 2:
       this->fontWeight = QFont::Normal; std::cout << fontWeight << endl;
       break;
    case 3:
       this->fontWeight = QFont::Bold; std::cout << fontWeight << endl;
       break;
     }

}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    if(arg1 <= 50 && arg1 > -1)
    {
        this->textPointsize = arg1;
        std::cout << textPointsize << endl;
    }
    else
    {
        QMessageBox::information(this, "Enter a number", "Between -1 to 50");
    }

}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    TextString = arg1; qDebug() << TextString << " ";
}


void MainWindow::on_add_clicked()
{

 //   if(Login->getUserIsAdmin() == true)
 //   {
        QMessageBox::information(this, "Title", ui->comboBox->currentText());
        Line* tempLine = new Line;

        tempLine->setLine(QPoint(10, 10), QPoint(30, 10));
        tempLine->setPen(Qt::blue, 2, Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin);
        Shapes.push_back(tempLine);
        ui->widget->setShape(Shapes);
        ui->widget->update();
 //   }
 //   else
 //   {
  //      QMessageBox::information(this, "Requires Admin", "User is not an admin.");
 //   }

}


void MainWindow::on_remove_clicked()
{

 //   if(Login->getUserIsAdmin() == true)
   // {
        this->Shapes.pop_back();
        ui->widget->setShape(this->Shapes);
        ui->widget->update();
  //  }
 //   else
 //   {
   //     QMessageBox::information(this, "Requires Admin", "User is not an admin.");
  //  }

}


void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    if(arg1 <= 20 && arg1 > 0)
    {
        this->penWidth = arg1;
        std::cout << penWidth << endl;
    }
    else
    {
        QMessageBox::information(this, "Enter a number", "Between -1 to 20");
    }
}




void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    x1 = arg1;std::cout << x1<< endl;
}


void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    y1 = arg1; std::cout << y1 << endl;
}


void MainWindow::on_spinBox_5_valueChanged(int arg1)
{
    x2 = arg1;std::cout << x2<< endl;
}


void MainWindow::on_spinBox_6_valueChanged(int arg1)
{
    y2 = arg1;std::cout << y2 << endl;
}


void MainWindow::on_spinBox_16_valueChanged(int arg1)
{
    x3 = arg1;std::cout << x3<< endl;
}


void MainWindow::on_spinBox_15_valueChanged(int arg1)
{
    y3 = arg1;std::cout << y3 << endl;
}


void MainWindow::on_spinBox_14_valueChanged(int arg1)
{
    x4 = arg1;std::cout << x4<< endl;
}


void MainWindow::on_spinBox_13_valueChanged(int arg1)
{
    y4 = arg1;std::cout << y4 << endl;
}


void MainWindow::on_pushButton_clicked()
{
    //SETS UP QPOINTS
    this->qPoint1.setX(x1); this->qPoint1.setY(y1);
    this->qPoint2.setX(x2); this->qPoint2.setY(y2);
    this->qPoint3.setX(x3); this->qPoint3.setY(y3);
    this->qPoint4.setX(x4); this->qPoint4.setY(y4);

    //THIS IS WHERE YOU PASS THE SERIALIZER AND ALL THOSE VARIABLES


}

