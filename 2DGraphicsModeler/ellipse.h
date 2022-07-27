// ========================================================================
// myEllipse.h
// ========================================================================

#ifndef myEllipse_H
#define myEllipse_H
#include <QPoint>
#include "Shape.h"

class myEllipse : public Shape
{
public:

    // Constructor
    myEllipse(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Ellipse)
        : Shape{device, id, shape} {}

    // Destructor
    ~myEllipse() override {}

    //copy constructor
    myEllipse(const myEllipse& myEllipse);

    //copy assignment
    virtual myEllipse& operator=(myEllipse & myEllipse);

    // setmyEllipse Function
    void setmyEllipse(const QPoint &p1, int x, int y);

    //Override from the base class

    // draw Function
    void draw(QPaintDevice* device) override;

    // move Function
    void move(vector<int>) override;

    // perimeter Function
    double perimeter() override;

    // area Function
    double area() override;



private:
    QPoint point1;
    int xAxis;
    int yAxis;
};

#endif // POLYLINE_H
