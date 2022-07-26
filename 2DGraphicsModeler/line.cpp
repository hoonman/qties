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
void Line::draw(MainWindow *model)
{
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawLine(Point1, Point2);
    painter->end();
}

// move Function
void Line::move(vector<int> dimensions)
{
    Point1.setX(dimensions[0]);
    Point1.setY(dimensions[1]);
    Point2.setX(dimensions[2]);
    Point2.setY(dimensions[3]);

}

// perimeter
double Line::perimeter()
{
    double perimeter = 0.0;

    perimeter = sqrt(pow((Point2.x() - Point1.y()), 2)  + pow(Point2.y() - Point1.y(), 2)) ;

    return perimeter;
}

// area
double Line::area()
{
    return 0;
}



