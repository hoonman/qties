// ========================================================================
// ellipse.h
// ========================================================================

#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <QPoint>
#include "Shape.h"

class Ellipse : public Shape
{
public:

    // Constructor
    Ellipse(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Ellipse)
        : Shape{device, id, shape} {}

    // Destructor
    ~Ellipse() override {}

    //copy constructor
    Ellipse(const Ellipse& ellipse);

    //copy assignment
    virtual Ellipse& operator=(Ellipse & ellipse);

    // setEllipse Function
    void setEllipse(const QPoint &p1, int x, int y);

    //Override from the base class

    // draw Function
    void draw(MainApplication *model) override;

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
