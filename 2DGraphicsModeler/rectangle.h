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

    //copy constructor
    Rectangle(const Rectangle& rectangle);

    //copy assignment
    virtual Rectangle& operator=(const Rectangle& rectangle);

    //void setDimension(int x, int y, int width, int height);

    // setPoints Function
    void setRectangle(const QPoint& point, const QPoint& point2);

    // draw Function
    void draw(QPaintDevice* device) override;

    // move Function
    void move(vector<int>) override;

    // perimeter Function
    double perimeter() override;

    // area Function
    double area() override;

private:
    QPoint point1;
    QPoint point2;
    int x;
    int y;
    int width;
    int height;
};

#endif // RECTANGLE_H
