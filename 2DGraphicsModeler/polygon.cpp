#include "polygon.h"



void Polygon::setPoints(const QPoint &p1, const QPoint &p2)
{
    points.push_back(p1);
    points.push_back(p2);

}



void Polygon::draw(ModelerApp *model)
{
    QPoint *start = points.begin();
    painter = new QPainter;
    painter->begin(model);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawPolygon(start, points.size(), Qt::OddEvenFill);
    painter->end();

}
void Polygon::move(){}
void Polygon::perimeter(){}
void Polygon::area() {}
