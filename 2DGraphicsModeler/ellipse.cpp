#include "ellipse.h"

void Ellipse::setEllipse(const QPoint &p1, int x, int y)
{
    point1 = p1;
    xAxis = x;
    yAxis = y;
}

void Ellipse::draw(ModelerApp *model)
{
    painter = new QPainter;
    painter->begin(model);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawEllipse(point1, xAxis, yAxis);
    painter->end();
}




void Ellipse::move(){}
void Ellipse::perimeter(){}
void Ellipse::area() {}
void Ellipse::setPoints(const QPoint &p1, const QPoint &p2){}
