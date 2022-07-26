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

    //copy constructor
        Polygon(Polygon& polygon);

    //copy assignment
    virtual Polygon& operator=(Polygon& polygon);


    // setPolygon Function
    void setPolygon(const QPoint &p1, const QPoint &p2);
    //Override from the base class

    // draw function
    void draw(QPaintDevice* device) override;

    // move Function
    void move(vector<int>) override;

    // perimeter Function
    double perimeter() override;

    // area Function
    double area() override;


private:
    vector<QPoint> points;
    QPoint *start;
};

#endif // POLYGON_H
