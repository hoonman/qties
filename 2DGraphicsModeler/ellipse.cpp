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
void Ellipse::draw(ModelerApp *model)
{
    painter->begin(model);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawEllipse(point1, xAxis, yAxis);
    painter->end();
}

// move Function
void Ellipse::move(){}

// perimeter Function
void Ellipse::perimeter(){}

// area Function
void Ellipse::area() {}


