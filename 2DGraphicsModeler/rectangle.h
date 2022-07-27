// ========================================================================
// myRectangle.h
// ========================================================================

#ifndef myRectangle_H
#define myRectangle_H
#include <QPoint>
#include "Shape.h"

class myRectangle : public Shape
{
public:
    // Constructor
    myRectangle(QPaintDevice* device = nullptr, int id = -1)
        : Shape{device, id, ShapeType::Rectangle} {}

    // Destructor
    ~myRectangle() override {}

    //copy constructor
    myRectangle(const myRectangle& myRectangle);

    //copy assignment
    virtual myRectangle& operator=(const myRectangle& myRectangle);

    //void setDimension(int x, int y, int width, int height);

    // setPoints Function
    void setmyRectangle(const QPoint& point, const QPoint& point2);

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

#endif // myRectangle_H
