// ========================================================================
// myPolyline.h
// ========================================================================

#ifndef myPolyline_H
#define myPolyline_H
#include <QPoint>
#include "Shape.h"

class myPolyline : public Shape
{
public:

    // Constructor
    myPolyline(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Polyline)
        : Shape{device, id, shape} {}

    // Destructor
    ~myPolyline() override {}

    //copy constructor
        myPolyline(myPolyline& myPolyline);

    //copy assignment
    virtual myPolyline& operator=(myPolyline& myPolyline);


    //set myPolyline
    void setmyPolyline(const QPoint &p1, const QPoint &p2);

    //Override from the base class

    // draw Function
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

#endif // myPolyline_H
