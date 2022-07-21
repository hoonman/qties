// ========================================================================
// Shape.h
// ========================================================================

#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>
#include <QColor>
#include <QPoint>
#include "vector.h"
#include "modelerapp.h"
#include <QFont>

class Shape
{
public:

    enum class ShapeType {Initial, Line, Polyline, Polygon, Rectangle, Ellipse, Text};
    // Constructor
    Shape(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Initial){painter = new QPainter;};


    // Destructor
    virtual ~Shape() {delete painter;}

    //add copy operations here

    //copy constructor
    Shape(const Shape& shape);

    //copy assignment
    virtual Shape& operator=(const Shape& shape);

    // Getter Functions

    // getShape Function
    ShapeType getShape() const{return shape;}


    // getPen Function
    const QPen& getPen() const{return pen;}


    // getBrush Function
    const QBrush& getBrush() const{return brush;}


    // getFont Function
    const QFont& getFont() const{return font;}


    // Setter Functions

    // setShape Function
    void setShape(ShapeType shape){this->shape = shape;}


    // setPen Function
    void setPen(Qt::GlobalColor color, int width, Qt::PenStyle p, Qt::PenCapStyle pc, Qt::PenJoinStyle pj);


    // setBrush Function
    void setBrush(Qt::GlobalColor color, Qt::BrushStyle bs);


    // setFont Function
    void setFont(Qt::GlobalColor color, int pointSize, QString family, QFont::Style style, QFont::Weight weight);


    // Virtual Functions



    // draw Function
    virtual void draw(ModelerApp *mainPaint) = 0;

    // move Function
    virtual void move() = 0;

    // perimeter Function
    virtual void perimeter() = 0;

    // area Function
    virtual void area() = 0;

protected:
    QPainter* painter;
//    QPainter& getQPainter();

private:
    QFont font;
    int id;
    ShapeType shape;
    QPen pen;
    QBrush brush;
};

#endif // SHAPE_H

