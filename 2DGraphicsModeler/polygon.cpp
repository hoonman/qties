// ========================================================================
// polygon.cpp
// ========================================================================

#include "polygon.h"

// setPoints Function
void Polygon::setPolygon(const QPoint &p1, const QPoint &p2)
{
    points.push_back(p1);
    points.push_back(p2);
}

// draw Function
void Polygon::draw(ModelerApp *model)
{
    QPoint *start = points.begin();
    painter->begin(model);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawPolygon(start, points.size(), Qt::OddEvenFill);
    painter->end();
}

// move Function
void Polygon::move(){}

// perimeter Function
void Polygon::perimeter(){}

// area Function
void Polygon::area() {}
