// ========================================================================
// myPolygon.cpp
// ========================================================================

#include "polygon.h"

//copy constructor
myPolygon::myPolygon(myPolygon& myPolygon) : Shape(myPolygon), points{myPolygon.points} {}

//copy assignment
myPolygon& myPolygon::operator=(myPolygon& myPolygon) {
    this->Shape::operator=(myPolygon);
    this->points = myPolygon.points;
    return *this;
}

// setPoints Function
void myPolygon::setmyPolygon(const QPoint &p1, const QPoint &p2)
{
    points.push_back(p1);
    points.push_back(p2);
}

// draw Function
void myPolygon::draw(QPaintDevice* device)
{
    painter = new QPainter(device);
    start = points.begin();
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawPolygon(start, points.size(), Qt::OddEvenFill);
    painter->end();
}

// move Function
void myPolygon::move(vector<int> dimensions)
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

// perimeter Function
double myPolygon::perimeter()
{
    double totalPerimeter = 0.0;
    double perimeter = 0.0;

    for (auto point = points.begin(); point != points.end(); ++point)
    {
        QPoint start = *point;
        QPoint end   = *(point + 1);

        perimeter = sqrt(pow(end.x() - start.x(), 2) - pow(end.y() - start.y(), 2));
        totalPerimeter += perimeter;
    }
    return totalPerimeter;
}


// area Function
// Uses shoelace formula
double myPolygon::area()
{
    double totalArea = 0.0;

    int j = points.size() -1;
    for (int i = 0; i < points.size(); i++)
    {
        totalArea += (points[j].x() + points[i].x()) * (points[j].y() + points[i].y());
        j = i; // j is previous vertex to i
    }

    return abs(totalArea / 2.0);
}
