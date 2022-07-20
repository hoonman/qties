// ========================================================================
// polyline.h
// ========================================================================

#ifndef POLYLINE_H
#define POLYLINE_H
#include <QPoint>
#include "Shape.h"

class Polyline : public Shape
{
public:

    // Constructor
    Polyline(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Polyline)
        : Shape{device, id, shape} {}

    // Destructor
    ~Polyline() override {}


    //set polyline
    void setPolyline(const QPoint &p1, const QPoint &p2);

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
    vector<QPoint> points;
};

#endif // POLYLINE_H
