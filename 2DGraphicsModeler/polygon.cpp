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
    painter->begin(device);
    start = points.begin();
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawPolygon(start, points.size(), Qt::OddEvenFill);

    setID(3);
    painter->setFont(QFont("Times", 12, QFont::Bold));
    painter->drawText(QPoint(points[0].x() + 90, points[0].y()), "ID: 3");
    painter->save();
    painter->end();
}

// move Function
void myPolygon::move(vector<int> dimensions)
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
