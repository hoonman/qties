#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <QPoint>
#include "Shape.h"


class Ellipse : public Shape
{
    public:
        Ellipse(QPaintDevice* device = nullptr, int id = -1,
        ShapeType shape = ShapeType::Ellipse) : Shape{device, id, shape} {}
};

#endif // ELLIPSE_H
