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
using namespace std;
#include <string>
#include <limits>
#include <QColor>
//#include <QGlobalColor>

//#include "Shape.h"
//#include "line.h"
//#include "rectangle.h"
//#include "polyline.h"
//#include "polygon.h"
//#include "ellipse.h"
//#include "text.h"


void serializeLine(int x1,
                   int y1,
                   string mycolor,
                   int penWidth,
                   string penStyle,
                   string penCap,
                   string penJoinStyle,
                   Qt::GlobalColor qtGColor,
                   Qt::PenStyle qtPStyle,
                   Qt::PenCapStyle qtPCStyle,
                   Qt::PenJoinStyle qtJStyle)
{

}

void serializePolyline(int x1,
                       int y1,
                       int x2,
                       int y2,
                       int x3,
                       int y3,
                       int x4,
                       int y4,
                       string color,
                       int penWidth,
                       string penStyle,
                       string penCap,
                       string penJoinStyle,
                       Qt::GlobalColor qtGColor,
                       Qt::PenStyle qtPStyle,
                       Qt::PenCapStyle qtPCStyle,
                       Qt::PenJoinStyle qtJStyle)
{

}

void serializePolygon(int x1,
                      int y1,
                      int x2,
                      int y2,
                      int x3,
                      int y3,
                      int x4,
                      int y4,
                      string color,
                      int penWidth,
                      string penStyle,
                      string penCap,
                      string penJoinStyle,
                      string brushColor,
                      string brushStyle,
                      Qt::GlobalColor qtGColor,
                      Qt::PenStyle qtPStyle,
                      Qt::PenCapStyle qtPCStyle,
                      Qt::PenJoinStyle qtJStyle)
{

}

void serializeRectangle(int x1,
                        int y1,
                        int x2,
                        int y2,
                        string color,
                        int penWidth,
                        string penStyle,
                        string penCap,
                        string penJoinStyle,
                        string brushColor,
                        string brushStyle,
                        Qt::GlobalColor qtGColor,
                        Qt::PenStyle qtPStyle,
                        Qt::PenCapStyle qtPCStyle,
                        Qt::PenJoinStyle qtJStyle)
{

}

void serializeSquare(int x1,
                     int y1,
                     int x2,
                     string color,
                     int penWidth,
                     string penStyle,
                     string penCap,
                     string penJoinStyle,
                     string brushColor,
                     string brushStyle,
                     Qt::GlobalColor qtGColor,
                     Qt::PenStyle qtPStyle,
                     Qt::PenCapStyle qtPCStyle,
                     Qt::PenJoinStyle qtJStyle)
{

}

void serializeCircle(int x1,
                     int y1,
                     int x2,
                     string color,
                     int penWidth,
                     string penStyle,
                     string penCap,
                     string penJoinStyle,
                     string brushColor,
                     string brushStyl,
                     Qt::GlobalColor qtGColor,
                     Qt::PenStyle qtPStyle,
                     Qt::PenCapStyle qtPCStyle,
                     Qt::PenJoinStyle qtJStyle)
{

}

void serializeElipse(int x1,
                     int y1,
                     int x2,
                     int y2,
                     string color,
                     int penWidth,
                     string penStyle,
                     string penCap,
                     string penJoinStyle,
                     string brushColor,
                     string brushStyle,
                     Qt::GlobalColor qtGColor,
                     Qt::PenStyle qtPStyle,
                     Qt::PenCapStyle qtPCStyle,
                     Qt::PenJoinStyle qtJStyle)
{

}

void serializeText(int x1,
                   int y1,
                   int x2,
                   int y2,
                   string textString,
                   string Textcolor,
                   string textAllignment, //aka flag
                   int PointSize,
                   string textFont,
                   string fontStyle,
                   string fontWeight,
                   Qt::AlignmentFlag qtAFlag,
                   Qt::GlobalColor fontColor,
                   QFont::Style qtfontStyle,
                   QFont::Weight qtfontWeight)
{

}

string convertPenColor(Qt::GlobalColor incolor)
{
    if(incolor == Qt::white)
    {
        return "white";
    }
    else if(incolor == Qt::black)
    {
        return "black";
    }
    else if(incolor == Qt::red)
    {
        return "red";
    }
    else if(incolor == Qt::blue)
    {
        return "blue";
    }
    else if(incolor == Qt::cyan)
    {
        return "cyan";
    }
    else if(incolor == Qt::magenta)
    {
        return "magenta";
    }
    else if(incolor == Qt::yellow)
    {
        return "yellow";
    }
    else
        return "green";
}

string convertPenStyle(Qt::PenStyle pStyle)
{
    if(pStyle == Qt::SolidLine)
    {
        return "SolidLine";
    }
    else if(pStyle == Qt::DashLine)
    {
        return "DashLine";
    }
    else if(pStyle == Qt::DotLine)
    {
        return "DotLine";
    }
    else if(pStyle == Qt::DashDotLine)
    {
        return "DashDotLine";
    }
    else if(pStyle == Qt::DashDotDotLine)
    {
        return "DashDotDotLine";
    }
    else
        return "No Pen";
}

string convertPenJoinStyle(Qt::PenJoinStyle pJStyle)
{
    if(pJStyle == Qt::MiterJoin)
    {
        return "MiterJoin";
    }
    else if(pJStyle ==  Qt::BevelJoin)
    {
        return"BevelJoin";
    }
    else
        return "RoundJoin";
}

string convertPenCapStyle(Qt::PenCapStyle pCStyle)
{
    if(pCStyle == Qt::FlatCap)
    {
        return "FlatCap";
    }
    else if(pCStyle == Qt::SquareCap)
    {
        return "SquareCap";
    }
    else
        return "RoundCap";
}

string converBrushColor(Qt::GlobalColor brushColor)
{
    if(brushColor == Qt::white)
    {
        return "white";
    }
    else if(brushColor == Qt::black)
    {
        return "black";
    }
    else if(brushColor == Qt::red)
    {
        return "red";
    }
    else if(brushColor == Qt::blue)
    {
        return "blue";
    }
    else if(brushColor == Qt::cyan)
    {
        return "cyan";
    }
    else if(brushColor == Qt::magenta)
    {
        return "magenta";
    }
    else if(brushColor == Qt::yellow)
    {
        return "yellow";
    }
    else
    {
        return "green";
    }
}

string convertBrushStyle(Qt::BrushStyle bStyle)
{
    if(bStyle == Qt::SolidPattern)
    {
        return "SolidPattern";
    }
    else if(bStyle == Qt::HorPattern)
    {
        return "HorPattern";
    }
    else if(bStyle == Qt::VerPattern)
    {
        return "VerPattern";
    }
    else
    {
        return "NoBrush";
    }
}

string convertAlignment(Qt::AlignmentFlag allign)
{
    if(allign == Qt::AlignLeft)
    {
        return "AlignLeft";
    }
    else if(allign == Qt::AlignRight)
    {
        return "AlignRight";
    }
    else if(allign == Qt::AlignTop)
    {
        return "AlignTop";
    }
    else if(allign == Qt::AlignBottom)
    {
        return "AlignBottom";
    }
    else
    {
        return "AlignCenter";
    }
}

string converTextColor(Qt::GlobalColor textcolor)
{
    if(textcolor == Qt::white)
    {
        return "white";
    }
    else if(textcolor == Qt::black)
    {
        return "black";
    }
    else if(textcolor ==  Qt::red)
    {
        return"red";
    }
    else if(textcolor == Qt::blue)
    {
        return "blue";
    }
    else if(textcolor == Qt::cyan)
    {
        return "cyan";
    }
    else if(textcolor == Qt::magenta)
    {
        return "magenta";
    }
    else if(textcolor == Qt::yellow)
    {
        return "yellow";
    }
    else
    {
        return "green";
    }
}

string convertStyle(QFont::Style style)
{
    if(style == QFont::StyleNormal)
    {
        return "StyleNormal";
    }
    else if(style == QFont::StyleItalic)
    {
        return  "StyleItalic";
    }
    else
    {
        return "StyleOblique";
    }
}

string convertWeight(QFont::Weight weight)
{
    if(weight == QFont::Thin)
    {
        return "Thin";
    }
    else if(weight == QFont::Light)
    {
        return "Light";
    }
    else if(weight == QFont::Normal)
    {
        return "Normal";
    }
    else
    {
        return "Bold";
    }
}
