#ifndef TEXT_H
#define TEXT_H
#include <QPoint>
#include "Shape.h"

class Text : public Shape
{
    public:
    Text(QPaintDevice* device = nullptr, int id = -1,
            ShapeType shape = ShapeType::Text) : Shape{device, id, shape} {}
};

#endif // TEXT_H
