// ========================================================================
// Shape.cpp
// ========================================================================

#include "Shape.h"

// setPen Function
void Shape::setPen(Qt::GlobalColor color, int width, Qt::PenStyle p, Qt::PenCapStyle pc, Qt::PenJoinStyle pj)
{
    //QColor color is an object of type Color - QColor(Qt::GlobalColor color)
    pen.setColor(color); //requires an object of Qcolor passed //sets object pen
    pen.setWidth(width); //sets object width
    pen.setStyle(p);     //requires p variable of the enum type PenStyle
    pen.setCapStyle(pc); //pc variable of the enum type PenCapStyle
    pen.setJoinStyle(pj);//pj variable of the enum type PenJoinStyle
}

// setBrush Function
void Shape::setBrush(Qt::GlobalColor color, Qt::BrushStyle bs)
{
    brush.setColor(color);
    brush.setStyle(bs);
}


// setFont Function
void Shape::setFont(Qt::GlobalColor color, int pointSize, QString family, QFont::Style style, QFont::Weight weight)
{
    pen.setColor(color);
    font.setPointSize(pointSize);
    font.setFamily(family);
    font.setStyle(style);
    font.setWeight(weight);
}

