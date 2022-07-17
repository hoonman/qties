#ifndef POLYLINE_H
#define POLYLINE_H
#include <QPoint>
#include "Shape.h"


class Polyline : public Shape
{
    public:
        Polyline(QPaintDevice* device = nullptr, int id = -1,
                ShapeType shape = ShapeType::Polyline) : Shape{device, id, shape} {}
        void setPoints(vector<QPoint> pointVector, int pointAmount);


        //Override from the base class
        void draw(const int translate_x, const int translate_y) override;
        void move() override;
        void perimeter() override;
        void area() override;

    private:
        QVector<QPoint> points;
        int pointAmount;

};

#endif // POLYLINE_H
