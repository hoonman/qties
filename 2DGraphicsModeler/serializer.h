#ifndef SERIALIZER_H
#define SERIALIZER_H

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
#include <string>
#include <limits>
#include <QColor>

//using namespace std;

class Serializer
{
public:
    Serializer();

    void serializeLine(QPoint qPoint1,
                       QPoint qPoint2,
                        Qt::GlobalColor penColor,
                       int penWidth,
                       Qt::PenStyle penStyle,
                       Qt::PenCapStyle penCap,
                       Qt::PenJoinStyle penJoin);

    void serializePolyline(QPoint qPoint1,
                           QPoint qPoint2,
                           QPoint qPoint3,
                           QPoint qPoint4,
                           Qt::GlobalColor penColor,
                           int penWidth,
                           Qt::PenStyle penStyle,
                           Qt::PenCapStyle penCap,
                           Qt::PenJoinStyle penJoin);

    void serializePolygon(QPoint qPoint1,
                          QPoint qPoint2,
                          QPoint qPoint3,
                          QPoint qPoint4,
                          Qt::GlobalColor penColor,
                          int penWidth,
                          Qt::PenStyle penStyle,
                          Qt::PenCapStyle penCap,
                          Qt::PenJoinStyle penJoin,
                          Qt::GlobalColor brushColor,
                          Qt::BrushStyle brushStyle);

    void serializeRectangle(QPoint qPoint1,
                            QPoint qPoint2,
                            Qt::GlobalColor penColor,
                            int penWidth,
                            Qt::PenStyle penStyle,
                            Qt::PenCapStyle penCap,
                            Qt::PenJoinStyle penJoin,
                            Qt::GlobalColor brushColor,
                            Qt::BrushStyle brushStyle);

    void serializeSquare(QPoint qPoint1,
                         QPoint qPoint2,
                         Qt::GlobalColor penColor,
                         int penWidth,
                         Qt::PenStyle penStyle,
                         Qt::PenCapStyle penCap,
                         Qt::PenJoinStyle penJoin,
                         Qt::GlobalColor brushColor,
                         Qt::BrushStyle brushStyle);

    void serializeCircle(QPoint qPoint1,
                         int x2,
                         int y2,
                         Qt::GlobalColor penColor,
                         int penWidth,
                         Qt::PenStyle penStyle,
                         Qt::PenCapStyle penCap,
                         Qt::PenJoinStyle penJoin,
                         Qt::GlobalColor brushColor,
                         Qt::BrushStyle brushStyle);

    void serializeElipse(QPoint qPoint1,
                         int x2,
                         int y2,
                         Qt::GlobalColor penColor,
                         int penWidth,
                         Qt::PenStyle penStyle,
                         Qt::PenCapStyle penCap,
                         Qt::PenJoinStyle penJoin,
                         Qt::GlobalColor brushColor,
                         Qt::BrushStyle brushStyle);

    void serializeText(int x1,
                       int y1,
                       int x2,
                       int y2,
                       Qt::AlignmentFlag textAlign,
                       QString TextString,
                       Qt::GlobalColor textColor,
                       int textPointsize,
                       QString fontFamily,
                       QFont::Style fontStyle,
                       QFont::Weight fontWeight);

    std::string convertPenColor(Qt::GlobalColor incolor);
    std::string convertPenStyle(Qt::PenStyle pStyle);
    std::string convertPenJoinStyle(Qt::PenJoinStyle pJStyle);
    std::string convertPenCapStyle(Qt::PenCapStyle pCStyle);
    std::string converBrushColor(Qt::GlobalColor brushColor);
    std::string convertBrushStyle(Qt::BrushStyle bStyle);
    std::string convertAlignment(Qt::AlignmentFlag allign);
    std::string converTextColor(Qt::GlobalColor textcolor);
    std::string convertStyle(QFont::Style style);
    std::string convertWeight(QFont::Weight weight);

private:
    QPoint qPoint1, qPoint2 , qPoint3 , qPoint4;

    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textAlign;
    Qt::GlobalColor penColor;
    Qt::PenStyle penStyle;
    Qt::PenCapStyle penCap;
    Qt::PenJoinStyle penJoin;
    int penWidth;

    Qt::GlobalColor brushColor;
    Qt::BrushStyle brushStyle;
    int textPointsize;
    QString fontFamily;
    QString TextString;
    QFont::Style fontStyle;
    QFont::Weight fontWeight;
    std::string allshape;


    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
};

#endif // SERIALIZER_H
