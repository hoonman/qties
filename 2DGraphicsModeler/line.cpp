// ========================================================================
// line.cpp
// ========================================================================

#include "line.h"

// setPoints Function
void Line::setPoints(const QPoint &p1, const QPoint &p2)
{
    //Instantiate Line mmembers
    Point1 = p1;
    Point2 = p2;
}

// draw Function
void Line::draw(ModelerApp *model)
{
    painter = new QPainter;
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawLine(Point1, Point2);
    painter->end();
}

//needs implementation
void Line::move(){}
void Line::perimeter(){}
void Line::area(){ }


