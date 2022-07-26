// ========================================================================
// ellipse.h
// ========================================================================

#include "ellipse.h"

//copy constructor
Ellipse::Ellipse(const Ellipse& ellipse) : Shape(ellipse), point1{ellipse.point1}, xAxis{ellipse.xAxis}, yAxis{ellipse.yAxis} {}

//copy assignment
Ellipse& Ellipse::operator=(Ellipse & ellipse) {
    this->Shape::operator=(ellipse);
    this->point1 = ellipse.point1;
    this->xAxis = ellipse.xAxis;
    this->yAxis = ellipse.yAxis;
    return *this;
}

// setEllipse Function
void Ellipse::setEllipse(const QPoint &p1, int x, int y)
{
    point1 = p1;
    xAxis = x;
    yAxis = y;
}

// draw Function
void Ellipse::draw(QPaintDevice* device)
{
    painter = new QPainter(device);
    painter->begin(device);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawEllipse(point1, xAxis, yAxis);
    painter->end();
}

// move Function
void Ellipse::move(vector<int> dimensions)
{
    point1.setX(dimensions[0]);
    point1.setY(dimensions[1]);
}

// perimeter Function
double Ellipse::perimeter()
{
    double perimeter = 0.0;

    perimeter = 2 * M_PI * sqrt((pow(xAxis, 2) + pow(yAxis, 2)) / 2 );

    return perimeter;
}

// area Function
double Ellipse::area()
{
    return M_PI * xAxis * yAxis;
}


