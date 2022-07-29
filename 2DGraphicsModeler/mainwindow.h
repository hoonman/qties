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
#include "Shape.h"
#include "serializer.h"

class login;
class AboutUs;
class canvas;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//!  A MainWindow
/*!
 *  represents a MainWindow object
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //! Default constructor
    /*!
     * \param parent is assigned nullptr
     */
    MainWindow(QWidget *parent = nullptr);

    //! Destructor
    /*!
     * Destroys the MainWindow
     */
    ~MainWindow();

    //! void function
    /*!
     * \param settingAdmin is assigned to userIsAdmin
     */
    void setAdmin(bool settingAdmin){userIsAdmin = settingAdmin;}

    //! void function
    /*!
     * \param isAdmin tells if the user is admin or not
     */
    void updateStuff(bool isAdmin);

    //! bool function
    /*!
     * \return userIsAdmin
     */
    bool isAdmin(bool userIsAdmin){return this->userIsAdmin;}

private slots:

    //! void function
    /*!
     * on_actionContact_Us_triggered a new window opens with our team's contact information
     */
    void on_actionContact_Us_triggered();

    //! void function
    /*!
     * on_actionLogout_triggered the user's admin powers will be set to false, and a message will appear telling the user that the user has successfully logged out
     */
    void on_actionLogout_triggered();

    //! void funcion
    /*!
     * on_actionExit_triggered the program will close
     */
    void on_actionExit_triggered();

    //void on_actionLogin_triggered();


    //void on_moveButton_clicked();

    //! void funcion
    /*!
     * selectLine
     */
//    void selectLine();

    //! void funcion
    /*!
     * changedShape will allow a user to change the shape they desire to add to the canvas
     */
    void changedShape();

    //! void funcion
    /*!
     * innitProperties initializes the functions for the Add tab
     */
    void innitProperties();

    //! void funcion
    /*!
     * \param index used in switch statement to decide which shapes to pick to add
     */
    void on_ShapeComboBox_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param index used in switch statement to decide which pen color to add
     */
    void on_PenColorCB_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param index used in switch statement to decide which pen style to add
     */
    void on_PenStyleCB_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param index used in switch statement to decide which pen cap to add
     */
    void on_PenCapCB_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param index used in switch statement to decide which pen join to add
     */
    void on_PenJoinCB_currentIndexChanged(int index);


    //! void funcion
    /*!
     * \param index used in switch statement to decide which brush color to add
     */
    void on_BrushColorCB_currentIndexChanged(int index);


    //! void funcion
    /*!
     * \param index used in switch statement to decide which brush style to add
     */
    void on_BrushStyleCB_currentIndexChanged(int index);


    //! void funcion
    /*!
     * \param index used in switch statement to decide which text alignment to use
     */
    void on_TextAlignCB_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param index used in switch statement to decide which text color to use
     */
    void on_TextColorCB_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param index used in switch statement to decide which text font to use
     */
    void on_TextFontType_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param index used in switch statement to decied which text style to use
     */
    void on_TextStyle_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param index used in switch statement to decide which text weight to use
     */
    void on_TextWeight_currentIndexChanged(int index);

    //! void funcion
    /*!
     * \param arg1 will change a point size based on user input
     */
    void on_spinBox_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change a text string based on user input
     */
    void on_lineEdit_textChanged(const QString &arg1);


    //! void funcion
    /*!
     * on_remove_clicked shapes will popback off the canvas
     */
    void on_remove_clicked();

    //! void funcion
    /*!
     * \param arg1 will change a pen's width based on user input
     */
    void on_spinBox_2_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change the first x-coordinate based on user input
     */
    void on_spinBox_3_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change the first y-coordinate based on user input
     */
    void on_spinBox_4_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change the second x-coordinate based on user input
     */
    void on_spinBox_5_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change the second y-coordinate based on user input
     */
    void on_spinBox_6_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change the third x-coordinate based on user input
     */
    void on_spinBox_16_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change the third y-coordinate based on user input
     */
    void on_spinBox_15_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change the fourth x-coordinate based on user input
     */
    void on_spinBox_14_valueChanged(int arg1);

    //! void funcion
    /*!
     * \param arg1 will change the fourth y-coordinate based on user input
     */
    void on_spinBox_13_valueChanged(int arg1);

    //! void funcion
    /*!
     * on_pushButton_clicked will add a shape to the canvas based on the user edits
     */
    void on_pushButton_clicked();

    //! void funcion
    /*!
     * on_moveShape_clicked will move a shape on the canvas based on user inputs
     */
    void on_moveShape_clicked();


    //! void funcion
    /*!
     * \param arg1 is assigned to x1
     */
    void on_x1Move_valueChanged(int arg1){x1 = arg1;}

    //! void funcion
    /*!
     * \param arg1 is assigned to x2
     */
    void on_x2Move_valueChanged(int arg1){x2 = arg1;}

    //! void funcion
    /*!
     * \param arg1 is assigned to x3
     */
    void on_x3Move_valueChanged(int arg1){x3 = arg1;}

    //! void funcion
    /*!
     * \param arg1 is assigned to x4
     */
    void on_x4Move_valueChanged(int arg1){x4 = arg1;}

    //! void funcion
    /*!
     * \param arg1 is assigned to y1
     */
    void on_y1Move_valueChanged(int arg1){y1 = arg1;}

    //! void funcion
    /*!
     * \param arg1 is assigned to y2
     */
    void on_y2Move_valueChanged(int arg1){y2 = arg1;}

    //! void funcion
    /*!
     * \param arg1 is assigned to y3
     */
    void on_y3Move_valueChanged(int arg1){y3 = arg1;}

    //! void funcion
    /*!
     * \param arg1 is assigned to y4
     */
    void on_y4Move_valueChanged(int arg1){y4 = arg1;}

    //! void funcion
    /*!
     * on_actionLogin_triggered the old main window will close and a log in prompt will open for the user
     */
    void on_actionLogin_triggered();

private:

    Ui::MainWindow *ui;
 //   void paintEvent(QPaintEvent *event) override;
    AboutUs *aboutUs;
    login *Login;
    Serializer serializer;

    bool userIsAdmin = false;

//    void openFile();
    std::string item;
    std::string text;
    int shapeID;
    std::string shape;
    int point1, point2, point3, point4;

    int width;

    vector<Shape*> Shapes;
    int index = 0;

    QPoint qPoint1, qPoint2 , qPoint3 , qPoint4;

    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textAlign;
    Qt::GlobalColor penColor;
    Qt::PenStyle penStyle;
    Qt::PenCapStyle penCap;
    Qt::PenJoinStyle penJoin;
    int penWidth;
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

    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

};
#endif // MAINWINDOW_H
