#include "polyline.h"
#include <QVector>

void Polyline::setPoints(vector<QPoint> pointVector, int pointAmount)
{
    points = pointVector;
    this->pointAmount = pointAmount;

}

void Polyline::draw(ModelerApp *test)
{
    painter->setPen(getPen());
    painter->setBrush(getBrush());
}

//implementation
void Polyline::move(){}
void Polyline::perimeter(){}
void Polyline::area() {}
