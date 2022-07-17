#include "line.h"

void Line::setPoints(const QPoint &p1, const QPoint &p2)
{
    //Instantiate Line mmembers
    Point1 = p1;
    Point2 = p2;
}

void Line::draw(const int translate_x, const int translate_y)
{

    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawLine(Point1, Point2);

}

//needs implementation
void Line::move(){}
void Line::perimeter(){}
void Line::area(){ }
