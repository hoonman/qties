// ========================================================================
// rectangle.h
// ========================================================================

#include "rectangle.h"

// setPoints Function
void Rectangle::setRectangle(const QPoint& point1, const QPoint& point2)
{
    x = point1.x();
    y = point1.y();
    width = point2.x();
    height = point2.y();
}

// setDimension Function
//void Rectangle::setDimension(int x, int y, int width, int height)
//{
//    this->x = x;
//    this->y = y;
//    this->width = width;
//    this->height = height;
//}

// draw Function
void Rectangle::draw(ModelerApp *model)
{
    painter = new QPainter;
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawRect(x, y, width, height);
    painter->end();
}

// move Function
void Rectangle::move(){}

// perimeter Function
void Rectangle::perimeter(){}

// area Function
void Rectangle::area(){ }
