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

    // setEllipse Function
    void setEllipse(const QPoint &p1, int x, int y);


    //Override from the base class

    // draw Function
    void draw(ModelerApp *model) override;

    // move Function
    void move() override;

    // perimeter Function
    void perimeter() override;

    // area Function
    void area() override;



private:
    QPoint point1;
    int xAxis;
    int yAxis;
};

#endif // POLYLINE_H
