// ========================================================================
// myPolyline.cpp
// ========================================================================

#include "polyline.h"

// setPoints Function
void myPolyline::setmyPolyline(const QPoint &p1, const QPoint &p2)
{
    points.push_back(p1);
    points.push_back(p2);

}

//copy constructor
myPolyline::myPolyline(myPolyline& myPolyline) : Shape(myPolyline), points{myPolyline.points} {}

//copy assignment
myPolyline& myPolyline::operator=(myPolyline& myPolyline) {
    this->Shape::operator=(myPolyline);
    this->points = myPolyline.points;
    return *this;
}

// draw Function
void myPolyline::draw(QPaintDevice* device)
{
    painter->begin(device);
    start = points.begin();
    painter->setPen(getPen());
    painter->drawPolyline(start, points.size());

    setID(2);

    painter->setFont(QFont("Times", 12, QFont::Bold));
    painter->drawText(QPoint(points[0].x() + 10, points[0].y()), "ID: 2");
    painter->save();
    painter->end();
}

// move function
void myPolyline::move(vector<int> dimensions)
{
    points[0].setX(dimensions[0]);
    points[0].setY(dimensions[1]);
    points[1].setX(dimensions[2]);
    points[1].setY(dimensions[3]);
    points[2].setX(dimensions[4]);
    points[2].setY(dimensions[5]);
    points[3].setX(dimensions[6]);
    points[3].setY(dimensions[7]);
}

// perimeter
double myPolyline::perimeter()
{
    return 0;
}

// area
double myPolyline::area()
{
    return 0;
}
