// ========================================================================
// rectangle.h
// ========================================================================

#include "rectangle.h"

//copy constructor
Rectangle::Rectangle(const Rectangle& rectangle) : Shape(rectangle), point1{rectangle.point1}, point2{rectangle.point2}, x{rectangle.x}, y{rectangle.y}, width{rectangle.width}, height{rectangle.height} {}

//copy assignment
Rectangle& Rectangle::operator=(const Rectangle& rectangle) {
    this->Shape::operator=(rectangle);
    this->point1 = rectangle.point1;
    this->point2 = rectangle.point2;
    this->x = rectangle.x;
    this->y = rectangle.y;
    this->width = rectangle.width;
    this->height = rectangle.height;
    return *this;
}

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
void Rectangle::draw(MainWindow *model)
{

    painter->begin(model);
    painter->setPen(getPen());
    painter->drawRect(x, y, width, height);
    painter->end();
}

// move Function
void Rectangle::move(vector<int> dimensions)
{
    x = dimensions[0];
    y = dimensions[1];
}

// perimeter Function
double Rectangle::perimeter()
{
    return ( 2 * width ) + (2 * height);
}

// area Function
double Rectangle::area()
{
    return width * height;
}
