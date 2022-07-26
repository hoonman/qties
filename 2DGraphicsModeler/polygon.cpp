// ========================================================================
// polygon.cpp
// ========================================================================

#include "polygon.h"

//copy constructor
Polygon::Polygon(Polygon& polygon) : Shape(polygon), points{polygon.points} {}

//copy assignment
Polygon& Polygon::operator=(Polygon& polygon) {
    this->Shape::operator=(polygon);
    this->points = polygon.points;
    return *this;
}

// setPoints Function
void Polygon::setPolygon(const QPoint &p1, const QPoint &p2)
{
    points.push_back(p1);
    points.push_back(p2);
}

// draw Function
void Polygon::draw(MainWindow *model)
{
    start = points.begin();
    painter->begin(model);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawPolygon(start, points.size(), Qt::OddEvenFill);
    painter->end();
}

// move Function
void Polygon::move(vector<int> dimensions)
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
double Polygon::perimeter()
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
double Polygon::area()
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
