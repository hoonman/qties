#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <QPoint>
#include "Shape.h"


class Ellipse : public Shape
{
    public:
        Ellipse(QPaintDevice* device = nullptr, int id = -1,
                ShapeType shape = ShapeType::Ellipse) : Shape{device, id, shape} {}
        ~Ellipse() override {}

        //Override from the base class
        void draw(ModelerApp *model) override;
        void move() override;
        void perimeter() override;
        void area() override;
        void setPoints(const QPoint &p1, const QPoint &p2) override;

    private:



};

#endif // POLYLINE_H
