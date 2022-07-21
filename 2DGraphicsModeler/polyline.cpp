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

//copy constructor
Polyline::Polyline(Polyline& polyline) : Shape(polyline), points{polyline.points} {}

//copy assignment
Polyline& Polyline::operator=(Polyline& polyline) {
    this->Shape::operator=(polyline);
    this->points = polyline.points;
    return *this;
}

// draw Function
void Polyline::draw(ModelerApp *model)
{
    start = points.begin();
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawPolyline(start, points.size());
    painter->end();
}

//implementation
void Polyline::move(){}
void Polyline::perimeter(){}
void Polyline::area() {}

