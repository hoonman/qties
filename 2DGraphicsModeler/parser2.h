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
//using namespace std;

class parser2
{
public:
    parser2();
    ~parser2() {}
    void readFile();
    int getShapeID() {return shapeID;}
    std::string getShape() {return shape;}
    int getPoint1() {return point1;}
    int getPoint2() {return point2;}
    int getPoint3() {return point3;}
    int getPoint4() {return point4;}
    Qt::GlobalColor getColor() {return color;}
    int getWidth() {return width;}
    Qt::PenStyle getPenStyle() {return penStyle;}
    Qt::PenCapStyle getPenCap() {return penCap;}
    Qt::PenJoinStyle getPenJoinStyle() {return penJoin;}

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
};

#endif // PARSER_H
