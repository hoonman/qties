// ========================================================================
// polygon.h
// ========================================================================

#ifndef POLYGON_H
#define POLYGON_H
#include <QPoint>
#include "Shape.h"

class Polygon : public Shape
{
public:
    // Constructor
    Polygon(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Polygon)
        : Shape{device, id, shape} {}

    // Destructor
    ~Polygon() override {}

    //Override from the base class

    // draw function
    void draw(ModelerApp *model) override;

    // move Function
    void move() override;

    // perimeter Function
    void perimeter() override;

    // area Function
    void area() override;

    // setPoints Function
    void setPoints(const QPoint &p1, const QPoint &p2) override;

private:
    vector<QPoint> points;

};

#endif // POLYGON_H
