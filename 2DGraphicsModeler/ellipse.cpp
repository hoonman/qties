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
    painter->begin(device);
    painter->setPen(getPen());
    painter->setBrush(getBrush());
    painter->drawEllipse(point1, xAxis, yAxis);


    if(yAxis == xAxis)
    {
        setID(7);
        painter->setFont(QFont("Times", 12, QFont::Bold));
        painter->drawText(QPoint(point1.x() - 20 , point1.y() - 20 ), "ID: 7");
        painter->save();
    }
    else
    {
        setID(6);
        painter->setFont(QFont("Times", 12, QFont::Bold));
        painter->drawText(QPoint(point1.x() - 20 , point1.y() - 20 ), "ID: 6");
        painter->save();
    }
    painter->end();

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


