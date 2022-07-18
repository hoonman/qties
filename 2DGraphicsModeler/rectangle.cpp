#include "rectangle.h"

void Rectangle::setPoints(const QPoint &point1, const QPoint &point2)
{
    x = point1.x();
    y = point1.y();
    width = point2.x();
    height = point2.y();
}

//void Rectangle::setDimension(int x, int y, int width, int height)
//{
//    this->x = x;
//    this->y = y;
//    this->width = width;
//    this->height = height;
//}

void Rectangle::draw(ModelerApp *model)
{
    painter = new QPainter;
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawRect(x, y, width, height);
    painter->end();
}

void Rectangle::move(){}
void Rectangle::perimeter(){}
void Rectangle::area(){ }
