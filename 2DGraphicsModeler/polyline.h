// ========================================================================
// polyline.h
// ========================================================================

#ifndef POLYLINE_H
#define POLYLINE_H
#include <QPoint>
#include "Shape.h"

class Polyline : public Shape
{
public:

    // Constructor
    Polyline(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Polyline)
        : Shape{device, id, shape} {}

    // Destructor
    ~Polyline() override {}

    //copy constructor
        Polyline(Polyline& polyline);

    //copy assignment
    virtual Polyline& operator=(Polyline& polyline);


    //set polyline
    void setPolyline(const QPoint &p1, const QPoint &p2);

    //Override from the base class

    // draw Function
    void draw(MainWindow *model) override;

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

#endif // POLYLINE_H
