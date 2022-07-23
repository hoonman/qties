// ========================================================================
// line.h
// ========================================================================

#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include <QPoint>
#include "mainapplication.h"

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

    //copy constructor
        Line(const Line& line);

    //copy assignment
    virtual Line& operator=(const Line& line);

    // setLine Function
    void setLine(const QPoint &p1, const QPoint &p2);

    // Overridden Functions

    // draw function
    void draw(MainApplication *model) override;

    // move function
    void move() override;

    // perimeter function
    double perimeter() override;

    // area function
    double area() override;

private:
    QPoint Point1;
    QPoint Point2;
};

#endif




