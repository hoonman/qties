// ========================================================================
// myRectangle.h
// ========================================================================

#include "rectangle.h"

//copy constructor
myRectangle::myRectangle(const myRectangle& myRectangle) : Shape(myRectangle), point1{myRectangle.point1}, point2{myRectangle.point2}, x{myRectangle.x}, y{myRectangle.y}, width{myRectangle.width}, height{myRectangle.height} {}

//copy assignment
myRectangle& myRectangle::operator=(const myRectangle& myRectangle) {
    this->Shape::operator=(myRectangle);
    this->point1 = myRectangle.point1;
    this->point2 = myRectangle.point2;
    this->x = myRectangle.x;
    this->y = myRectangle.y;
    this->width = myRectangle.width;
    this->height = myRectangle.height;
    return *this;
}

// setPoints Function
void myRectangle::setmyRectangle(const QPoint& point1, const QPoint& point2)
{
    x = point1.x();
    y = point1.y();
    width = point2.x();
    height = point2.y();
}

// setDimension Function
//void myRectangle::setDimension(int x, int y, int width, int height)
//{
//    this->x = x;
//    this->y = y;
//    this->width = width;
//    this->height = height;
//}

// draw Function
void myRectangle::draw(QPaintDevice* device)
{
    painter = new QPainter(device);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawRect(x, y, width, height);
    painter->end();

    QPainter *idText = new QPainter(device);
    if(height == width)
    {
        idText->setFont(QFont("Times", 12, QFont::Bold));
        idText->drawText(QPoint(x + 20, y + 40), "ID: 5");
        idText->end();
    }
    else{
    idText->setFont(QFont("Times", 12, QFont::Bold));
    idText->drawText(QPoint(x + 20, y + 40), "ID: 4");
    idText->end();
    }
}

// move Function
void myRectangle::move(vector<int> dimensions)
{
    x = dimensions[0];
    y = dimensions[1];
}

// perimeter Function
double myRectangle::perimeter()
{
    return ( 2 * width ) + (2 * height);
}

// area Function
double myRectangle::area()
{
    return width * height;
}
