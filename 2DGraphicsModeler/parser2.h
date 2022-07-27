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


class Parser
{

    public:
        Parser(){}
        ~Parser(){}
        vector<Shape*> readFile();
 //       Line* readLine(std::ifstream& infile);
 //       myPolyline* readPolyline(std::ifstream& infile);
 //       myPolygon* readPolygon(std::ifstream& infile);
//        myRectangle* readRectangle(std::ifstream& infile);
//        myRectangle* readSquare(std::ifstream& infile);
//        myEllipse* readEllipse(std::ifstream& infile);
//        myEllipse* readCircle(std::ifstream& infile);
//        Text* readText(std::ifstream& infile);
        void readLine(std::ifstream& infile);
        void readPolyline(std::ifstream& infile);
        void readPolygon(std::ifstream& infile);
        void readRectangle(std::ifstream& infile);
        void readSquare(std::ifstream& infile);
        void readEllipse(std::ifstream& infile);
        void readCircle(std::ifstream& infile);
        void readText(std::ifstream& infile);
        vector<Shape*> manualDraw();


        Qt::GlobalColor convertPenColor(string incolor);
        Qt::PenStyle convertPenStyle(string pStyle);
        Qt::PenJoinStyle convertPenJoinStyle(string pJStyle);
        Qt::PenCapStyle convertPenCapStyle(string pCStyle);

        Qt::GlobalColor converBrushColor(string brushColor);
        Qt::BrushStyle convertBrushStyle(string bStyle);

        Qt::AlignmentFlag convertAlignment(string allign);
        Qt::GlobalColor converTextColor(string textcolor);
        QFont::Style convertStyle(string style);
        QFont::Weight convertWeight(string weight);

        void changeCoordinates();


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
