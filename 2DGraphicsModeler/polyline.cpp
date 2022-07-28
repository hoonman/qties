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
    for (int i = 0; i < dimensions.size(); i++)
    {
        if (i % 2 != 0)
        {
            points[i].setX(dimensions[i]);
        }
        else
        {
            points[i].setY(dimensions[i]);
        }
    }
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
