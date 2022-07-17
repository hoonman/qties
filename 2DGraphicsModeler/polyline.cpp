#include "polyline.h"
#include <QVector>





void Polyline::setPoints(vector<QPoint> pointVector, int pointAmount)
{
    points = pointVector;
    this->pointAmount = pointAmount;

}

void Polyline::draw(const int translate_x, const int translate_y)
{

    painter->setPen(getPen());
    painter->setBrush(getBrush());
//    painter->drawPolyline(points, pointAmount);

}

//implementation
void Polyline::move(){}
void Polyline::perimeter(){}
void Polyline::area() {}
