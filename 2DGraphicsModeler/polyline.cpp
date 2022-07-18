#include "polyline.h"


void Polyline::setPoints(const QPoint &p1, const QPoint &p2)
{
    points.push_back(p1);
    points.push_back(p2);

}

void Polyline::draw(ModelerApp *model)
{
    QPoint *start = points.begin();
    painter = new QPainter;
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawPolyline(start, points.size());
    painter->end();
}

//implementation
void Polyline::move(){}
void Polyline::perimeter(){}
void Polyline::area() {}

