// ========================================================================
// myPolygon.h
// ========================================================================

#ifndef myPolygon_H
#define myPolygon_H
#include <QPoint>
#include "Shape.h"

class myPolygon : public Shape
{
public:
    // Constructor
    myPolygon(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Polygon)
        : Shape{device, id, shape} {}

    // Destructor
    ~myPolygon() override {delete painter;}

    //copy constructor
        myPolygon(myPolygon& myPolygon);

    //copy assignment
    virtual myPolygon& operator=(myPolygon& myPolygon);


    // setmyPolygon Function
    void setmyPolygon(const QPoint &p1, const QPoint &p2);
    //Override from the base class

    // draw function
    void draw(QPaintDevice* device) override;

    // move Function
    void move(vector<int>) override;

    // perimeter Function
    double perimeter() override;

    // area Function
    double area() override;


private:
    vector<QPoint> points;
    QPoint *start;
};

#endif // myPolygon_H
