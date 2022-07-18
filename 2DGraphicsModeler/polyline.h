#ifndef POLYLINE_H
#define POLYLINE_H
#include <QPoint>
#include "Shape.h"


class Polyline : public Shape
{
    public:
        Polyline(QPaintDevice* device = nullptr, int id = -1,
                ShapeType shape = ShapeType::Polyline) : Shape{device, id, shape} {}
        ~Polyline() override {}

        //Override from the base class
        void draw(ModelerApp *model) override;
        void move() override;
        void perimeter() override;
        void area() override;
        void setPoints(const QPoint &p1, const QPoint &p2) override;

    private:
        vector<QPoint> points;


};

#endif // POLYLINE_H
