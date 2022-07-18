
#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include <QPoint>
#include "modelerapp.h"

class Line : public Shape
{
    public:
    Line(QPaintDevice* device = nullptr, int id = -1,
         ShapeType shape = ShapeType::Line) : Shape{device, id, shape} {}
    //New derive member
    //Needs Qpoint objects passed - So pass QPoint(x-coord, y-coord) to p1 and QPoint(x-coord, y-coord) to p2
    ~Line() override {}
    void setPoints(const QPoint &p1, const QPoint &p2) override;

    //Override from the base class
    void draw(ModelerApp *model) override;
    void move() override;
    void perimeter() override;
    void area() override;

    private:
        QPoint Point1;
        QPoint Point2;
};

#endif




