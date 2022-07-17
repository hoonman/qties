#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>
#include <QColor>
#include <QPoint>
#include "vector.h"

class Shape
{
public:
    enum class ShapeType {Initial, Line, Polyline, Polygon,
                          Rectangle, Ellipse, Text};
    //QPaintDevice constructs a painter begins drawing the paint
    //device immediately. constructor calls begin() and
    //QPainter destructor automatically calls end().
    Shape(QPaintDevice* device = nullptr, int id = -1,
          ShapeType shape = ShapeType::Initial) {}
    virtual ~Shape() {}
    //add copy operations here

    ShapeType getShape() const{return shape;}
    const QPen& getPen() const{return pen;}
    const QBrush& getBrush() const{return brush;}

    void setShape(ShapeType shape){this->shape = shape;}
    void setPen(QColor &color, int width, Qt::PenStyle p, Qt::PenCapStyle pc, Qt::PenJoinStyle pj)
    {
        //QColor color is an object of type Color - QColor(Qt::GlobalColor color)
        pen.setColor(color); //requires an object of Qcolor passed //sets object pen
        pen.setWidth(width); //sets object width
        pen.setStyle(p);     //requires p variable of the enum type PenStyle
        pen.setCapStyle(pc); //pc variable of the enum type PenCapStyle
        pen.setJoinStyle(pj);//pj variable of the enum type PenJoinStyle
    }


    void setBrush(QColor &color, Qt::BrushStyle bs)
    {
        brush.setColor(color);
        brush.setStyle(bs);
    }

    void defaultStyle();
    void drawRect(int width, int height);

    virtual void draw(const int translate_x, const int translate_y) = 0;
    virtual void move() = 0;
    virtual void perimeter() = 0;
    virtual void area() = 0;

protected:
    QPainter* painter;
private:

    int id;
    ShapeType shape;
    QPen pen;
    QBrush brush;
};

#endif // SHAPE_H
