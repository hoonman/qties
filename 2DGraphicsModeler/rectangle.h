#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <QPoint>
#include "Shape.h"

class Rectangle : public Shape
{
public:

    Rectangle(QPaintDevice* device = nullptr, int id = -1) :
        Shape{device, id, ShapeType::Rectangle} {}
    ~Rectangle() override {}
    //void setDimension(int x, int y, int width, int height);
    void setPoints(const QPoint& point, const QPoint& point2) override;
    void draw(ModelerApp* model) override;
    void move() override;
    void perimeter() override;
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
