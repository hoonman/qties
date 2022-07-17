#ifndef POLYGON_H
#define POLYGON_H
#include <QPoint>
#include "Shape.h"

class Polygon : public Shape
{
    public:
        Polygon(QPaintDevice* device = nullptr, int id = -1,
        ShapeType shape = ShapeType::Polygon) : Shape{device, id, shape} {}
};

#endif // POLYGON_H
