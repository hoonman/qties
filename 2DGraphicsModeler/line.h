// ========================================================================
// line.h
// ========================================================================

#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include <QPoint>
#include "modelerapp.h"

class Line : public Shape
{
public:

    // Constructor
    Line(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Line)
        : Shape{device, id, shape} {}

    //New derive member
    //Needs Qpoint objects passed - So pass QPoint(x-coord, y-coord) to p1 and QPoint(x-coord, y-coord) to p2


    // Destructor
    ~Line() override {}

    // setPoints Function
    void setPoints(const QPoint &p1, const QPoint &p2) override;

    // Overridden Functions

    // draw function
    void draw(ModelerApp *model) override;

    // move function
    void move() override;

    // perimeter function
    void perimeter() override;

    // area function
    void area() override;

private:
    QPoint Point1;
    QPoint Point2;
};

#endif




