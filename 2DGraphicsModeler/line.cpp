// ========================================================================
// line.cpp
// ========================================================================

#include "line.h"

//copy constructor
Line::Line(const Line& line) : Shape(line), Point1(line.Point1), Point2{line.Point2} {}

//copy assignment
Line& Line::operator=(const Line& line) {
    this->Shape::operator=(line);
    this->Point1 = line.Point1;
    this->Point2 = line.Point2;
    return *this;
}

// setPoints Function
void Line::setLine(const QPoint &p1, const QPoint &p2)
{
    //Instantiate Line mmembers
    Point1 = p1;
    Point2 = p2;
}

// draw Function
void Line::draw(ModelerApp *model)
{
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawLine(Point1, Point2);
    painter->end();
}

//needs implementation
void Line::move(){}
void Line::perimeter(){}
void Line::area(){ }


