// ========================================================================
// rectangle.h
// ========================================================================

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <QPoint>
#include "Shape.h"

class Rectangle : public Shape
{
public:
    // Constructor
    Rectangle(QPaintDevice* device = nullptr, int id = -1)
        : Shape{device, id, ShapeType::Rectangle} {}

    // Destructor
    ~Rectangle() override {}

    //void setDimension(int x, int y, int width, int height);

    // setPoints Function
    void setRectangle(const QPoint& point, const QPoint& point2);

    // draw Function
    void draw(ModelerApp* model) override;

    // move Function
    void move() override;

    // perimeter Function
    void perimeter() override;

    // area Function
    void area() override;

private:
    QPoint point1;
    QPoint point2;
    int x;
    int y;
    int width;
    int height;
};

#endif // RECTANGLE_H
