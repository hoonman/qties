// ========================================================================
// ellipse.h
// ========================================================================

#include "ellipse.h"

// setEllipse Function
void Ellipse::setEllipse(const QPoint &p1, int x, int y)
{
    point1 = p1;
    xAxis = x;
    yAxis = y;
}

// draw Function
void Ellipse::draw(ModelerApp *model)
{
    painter = new QPainter;
    painter->begin(model);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawEllipse(point1, xAxis, yAxis);
    painter->end();
}

// move Function
void Ellipse::move(){}

// perimeter Function
void Ellipse::perimeter(){}

// area Function
void Ellipse::area() {}

// setPoints Function
void Ellipse::setPoints(const QPoint &p1, const QPoint &p2){}
