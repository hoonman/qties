// ========================================================================
// parser2.h
// ========================================================================

#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <sstream>
#include <string>
#include <fstream>
#include <QPainter>
#include <QApplication>
#include <QString>
//using namespace std;
#include <string>
#include <limits>
#include <QColor>
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "text.h"

using std::string;
using std::cout;
using std::ifstream;
using std::numeric_limits;
using std::streamsize;
using std::endl;


//!  A Parser class
class Parser
{

public:
    //! Default constructor
    /*!
    *  empty constructor
    */
    Parser(){}
    //! Destructor
    /*!
    *  does nothing
    */
    ~Parser(){}
    //! A function that will read tne file
    /*!
    * \return vector of Shapes pointer
    */
    vector<Shape*> readFile();
    //! A function that will read the line.
    /*!
     * \param ifstream& infile
     */
    void readLine(std::ifstream& infile);
    //! A function that will read the polyline.
    /*!
     * \param ifstream& infile
     */
    void readPolyline(std::ifstream& infile);
    //! A function that will read the polygon.
    /*!
     * \param ifstream& infile
     */
    void readPolygon(std::ifstream& infile);
    //! A function that will read the rectangle.
    /*!
     * \param ifstream& infile
     */
    void readRectangle(std::ifstream& infile);
    //! A function that will read the square.
    /*!
     * \param ifstream& infile
     */
    void readSquare(std::ifstream& infile);
    //! A function that will read the Ellipse.
    /*!
     * \param ifstream& infile
     */
    void readEllipse(std::ifstream& infile);
    //! A function that will read the circle.
    /*!
     * \param ifstream& infile
     */
    void readCircle(std::ifstream& infile);
    //! A function that will read the text.
    /*!
     * \param ifstream& infile
     */
    void readText(std::ifstream& infile);


    //! A function that will convert string pen color to Qt::GlobalColor
    /*!
     * \param string incolor
     * \return vector of Shapes pointer
     */
    Qt::GlobalColor convertPenColor(string incolor);
    //! A function that will convert string pStyle string to Qt::PenStyle
    /*!
     * \param string pStyle
     * \return Qt::PenStyle variable
     */
    Qt::PenStyle convertPenStyle(string pStyle);
    //! A function that will convert string pJStyle to Qt::PenJoinStyle
    /*!
     * \param string pJStyle
     * \return Qt::PenJoinStyle
     */
    Qt::PenJoinStyle convertPenJoinStyle(string pJStyle);
    //! A function that will convert string pCStyle to Qt::PenCapStyle
    /*!
     * \param string pCStyle
     * \return Qt::PenCapStyle
     */
    Qt::PenCapStyle convertPenCapStyle(string pCStyle);
    //! A function that will convert string brushColor to Qt::GlobalColor
    /*!
     * \param string brushColor
     * \return Qt::GlobalColor
     */
    Qt::GlobalColor converBrushColor(string brushColor);
    //! A function that will convert string bStyle
    /*!
     * \param string bStyle
     * \return Qt::BrushStyle
     */
    Qt::BrushStyle convertBrushStyle(string bStyle);
    //! A function that will convert string allign to Qt::AlignmentFlag
    /*!
     * \param string allign
     * \return Qt::AlignmentFlag
     */
    Qt::AlignmentFlag convertAlignment(string allign);
    //! A function that will convert string textColor to Qt::GlobalColor
    /*!
     * \param string textColor
     * \return Qt::GlobalColor
     */
    Qt::GlobalColor converTextColor(string textcolor);
    //! A function that will convert string style
    /*!
     * \param string style
     * \return QFont::Weight
     */
    QFont::Style convertStyle(string style);
    //! A function that will convert weight
    /*!
     * \param string weight
     * \return QFont::Weight
     */
    QFont::Weight convertWeight(string weight);


    private:
        int id;
        string ShapeType;
        string blank;

        int pt1;
                int pt2;
                int pt3;
                int pt4;

            vector<Shape*> myVector;
};


#endif // PARSER_H
