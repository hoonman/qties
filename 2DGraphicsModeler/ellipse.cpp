// ========================================================================
// myEllipse.h
// ========================================================================

#include "ellipse.h"

//copy constructor
myEllipse::myEllipse(const myEllipse& myEllipse) : Shape(myEllipse), point1{myEllipse.point1}, xAxis{myEllipse.xAxis}, yAxis{myEllipse.yAxis} {}

//copy assignment
myEllipse& myEllipse::operator=(myEllipse & myEllipse) {
    this->Shape::operator=(myEllipse);
    this->point1 = myEllipse.point1;
    this->xAxis = myEllipse.xAxis;
    this->yAxis = myEllipse.yAxis;
    return *this;
}

// setmyEllipse Function
void myEllipse::setmyEllipse(const QPoint &p1, int x, int y)
{
    point1 = p1;
    xAxis = x;
    yAxis = y;
}

// draw Function
void myEllipse::draw(QPaintDevice* device)
{
    painter = new QPainter(device);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawEllipse(point1, xAxis, yAxis);
    painter->end();

    QPainter *idText = new QPainter(device);
    idText->setFont(QFont("Times", 12, QFont::Bold));
    idText->drawText(QPoint(point1), "ID: 6");
}

// move Function
void myEllipse::move(vector<int> dimensions)
{
    point1.setX(dimensions[0]);
    point1.setY(dimensions[1]);
}

// perimeter Function
double myEllipse::perimeter()
{
    double perimeter = 0.0;

    perimeter = 2 * M_PI * sqrt((pow(xAxis, 2) + pow(yAxis, 2)) / 2 );

    return perimeter;
}

// area Function
double myEllipse::area()
{
    return M_PI * xAxis * yAxis;
}


