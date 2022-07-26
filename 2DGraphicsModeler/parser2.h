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
#include "Shape.h"
#include "line.h"
#include <QApplication>
#include <QString>
//using namespace std;
#include <vector>
#include <string>
#include <limits>
#include <QColor>


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
        void readFile();
        void readLine(std::ifstream& infile);
        void readPolyline(std::ifstream& infile);
        void readPolygon(std::ifstream& infile);
        void readRectangle(std::ifstream& infile);
        void readSquare(std::ifstream& infile);
        void readEllipse(std::ifstream& infile);
        void readCircle(std::ifstream& infile);
        void readText(std::ifstream& infile);
        void setApplication(QPaintDevice* device);

        Qt::GlobalColor convertPenColor(string incolor);
        Qt::PenStyle convertPenStyle(string pStyle);
        Qt::PenJoinStyle convertPenJoinStyle(string pJStyle);
        Qt::PenCapStyle convertPenCapStyle(string pCStyle);

        Qt::GlobalColor converBrushColor(string brushColor);
        Qt::BrushStyle convertBrushStyle(string bStyle);
        vector<Shape*> returnParser();

        Qt::AlignmentFlag convertAlignment(string allign);
        Qt::GlobalColor converTextColor(string textcolor);
        QFont::Style convertStyle(string style);
        QFont::Weight convertWeight(string weight);


    private:
        int id;
        string ShapeType;
        vector<Shape*> test;
        Qt::GlobalColor qtGColor;
        Qt::PenStyle qtPStyle;
        Qt::PenCapStyle qtPCStyle;
        Qt::PenJoinStyle qtJStyle;
};


#endif // PARSER_H
