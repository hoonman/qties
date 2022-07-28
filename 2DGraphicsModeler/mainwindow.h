#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QDialog>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QStatusBar>
#include <QMouseEvent>
#include <QtCore>
#include <QtGui>
#include "vector.h"
#include "Shape.h"

class login;
class AboutUs;
class canvas;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSave_All_triggered();

    void on_actionLoad_triggered();

    void on_actionText_triggered();

    void on_actionLine_triggered();

    void on_actionRectangle_triggered();

    void on_actionElipse_triggered();

    void on_actionPolygon_triggered();

    void on_actionPolyline_triggered();

    void on_actionSelected_Shape_triggered();

    void on_actionContact_Us_triggered();

    void on_actionLogout_triggered();

    void on_actionExit_triggered();

    void on_actionLogin_triggered();


    void on_moveButton_clicked();

    void selectLine();
    void changedShape();

    void innitProperties();

    void on_ShapeComboBox_currentIndexChanged(int index);

    void on_PenColorCB_currentIndexChanged(int index);

    void on_PenStyleCB_currentIndexChanged(int index);

    void on_PenCapCB_currentIndexChanged(int index);

    void on_PenJoinCB_currentIndexChanged(int index);

    void on_BrushColorCB_currentIndexChanged(int index);

    void on_BrushStyleCB_currentIndexChanged(int index);



    void on_TextAlignCB_currentIndexChanged(int index);

    void on_TextColorCB_currentIndexChanged(int index);

    void on_TextFontType_currentIndexChanged(int index);

    void on_TextStyle_currentIndexChanged(int index);

    void on_TextWeight_currentIndexChanged(int index);

    void on_spinBox_valueChanged(int arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_add_clicked();

    void on_remove_clicked();

private:
    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textAlign;
    Ui::MainWindow *ui;
 //   void paintEvent(QPaintEvent *event) override;
    AboutUs *aboutUs;
    login *Login;

//    void openFile();
    std::string item;
    std::string text;
    int shapeID;
    std::string shape;
    int point1, point2, point3, point4;

    int width;

    vector<Shape*> Shapes;
    int index;

    Qt::GlobalColor penColor;
    Qt::PenStyle penStyle;
    Qt::PenCapStyle penCap;
    Qt::PenJoinStyle penJoin;
    //brush
    Qt::GlobalColor brushColor;
    Qt::BrushStyle brushStyle;
    int textPointsize;
    QString fontFamily;
    QString TextString;
    QFont::Style fontStyle;
    QFont::Weight fontWeight;
    std::string allshape;
//    Qt::GlobalColor textColor;



};
#endif // MAINWINDOW_H
