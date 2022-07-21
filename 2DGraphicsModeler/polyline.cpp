// ========================================================================
// polyline.cpp
// ========================================================================

#include "polyline.h"

// setPoints Function
void Polyline::setPolyline(const QPoint &p1, const QPoint &p2)
{
    points.push_back(p1);
    points.push_back(p2);

}

// draw Function
void Polyline::draw(ModelerApp *model)
{
    QPoint *start = points.begin();
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawPolyline(start, points.size());
    painter->end();
}

//implementation
void Polyline::move(){}
void Polyline::perimeter(){}
void Polyline::area() {}

