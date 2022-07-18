#ifndef POLYGON_H
#define POLYGON_H
#include <QPoint>
#include "Shape.h"

class Polygon : public Shape
{
public:
    Polygon(QPaintDevice* device = nullptr, int id = -1,
        ShapeType shape = ShapeType::Polygon) : Shape{device, id, shape} {}
    ~Polygon() override {}
    //Override from the base class
    void draw(ModelerApp *model) override;
    void move() override;
    void perimeter() override;
    void area() override;
    void setPoints(const QPoint &p1, const QPoint &p2) override;

private:
    vector<QPoint> points;

};

#endif // POLYGON_H
