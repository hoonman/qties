// ========================================================================
// polyline.cpp
// ========================================================================

#include "polyline.h"

// setPoints Function
void Polyline::setPolyline(const QPoint &p1, const QPoint &p2)
{
    points.push_back(p1);
    points.push_back(p2);

}

//copy constructor
Polyline::Polyline(Polyline& polyline) : Shape(polyline), points{polyline.points} {}

//copy assignment
Polyline& Polyline::operator=(Polyline& polyline) {
    this->Shape::operator=(polyline);
    this->points = polyline.points;
    return *this;
}

// draw Function
void Polyline::draw(MainApplication *model)
{
    start = points.begin();
    painter->begin(model);
    painter->setPen(getPen());
    painter->drawPolyline(start, points.size());
    painter->end();
}

// move function
void Polyline::move(vector<int> dimensions)
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
double Polyline::perimeter()
{
    return 0;
}

// area
double Polyline::area()
{
    return 0;
}
