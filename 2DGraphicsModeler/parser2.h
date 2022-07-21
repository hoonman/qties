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
//using namespace std;

class parser2
{
public:
    parser2();
    ~parser2() {}
    void readFile();
    int getShapeID() {return shapeID;}
    void openFile();
    std::string getShape() {return shape;}
    int getPoint1() {return point1;}
    int getPoint2() {return point2;}
    int getPoint3() {return point3;}
    int getPoint4() {return point4;}
    vector<int> getVPoints() {return intVector;}
    Qt::GlobalColor getColor() {return color;}
    int getWidth() {return width;}
    Qt::PenStyle getPenStyle() {return penStyle;}
    Qt::PenCapStyle getPenCap() {return penCap;}
    Qt::PenJoinStyle getPenJoinStyle() {return penJoin;}

    void readPen(std::ifstream& infile);
    void readLine(std::ifstream& infile);
    void readPolyLine(std::ifstream& infile);
    void readBrush(std::ifstream& infile);

private:
    std::string item;
    std::string text;

    int shapeID;
    std::string shape;
    int point1, point2, point3, point4;
    vector<int> intVector;
    Qt::GlobalColor color;
    int width;
    Qt::PenStyle penStyle;
    Qt::PenCapStyle penCap;
    Qt::PenJoinStyle penJoin;
    Qt::BrushStyle brushStyle;
    Qt::GlobalColor brushColor;

};

#endif // PARSER_H
