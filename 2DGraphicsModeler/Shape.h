// ========================================================================
// Shape.h
// ========================================================================

#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>
#include <QColor>
#include <QPoint>
#include "vector.h"
#include <QFont>
#include <math.h>

class Shape
{
public:

    enum class ShapeType {Initial, Line, Polyline, Polygon, Rectangle, Ellipse, Text};
    // Constructor
    Shape(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Initial){};


    // Destructor
    virtual ~Shape() {delete painter;}

    // Overloaded operators

    // operator Overloaded <
    bool operator <(const Shape& shapeObject)
    {
        if(getID() < shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // operator Overloaded >
    bool operator >(const Shape& shapeObject)
    {
        if(getID() > shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // operator Overloaded <=
    bool operator <=(const Shape& shapeObject)
    {
        if(getID() <= shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // operator Overloaded >=
    bool operator >=(const Shape& shapeObject)
    {
        if(getID() < shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // operator Overloaded ==
    bool operator ==(const Shape& shapeObject)
    {
        if(getID() == shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

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


    // getID Function
    const int& getID() const{return shapeID;}


    // Setter Functions

    // setShape Function
    void setShape(ShapeType shape){this->shape = shape;}


    // setPen Function
    void setPen(Qt::GlobalColor color, int width, Qt::PenStyle p, Qt::PenCapStyle pc, Qt::PenJoinStyle pj);


    // setBrush Function
    void setBrush(Qt::GlobalColor color, Qt::BrushStyle bs);


    // setFont Function
    void setFont(Qt::GlobalColor color, int pointSize, QString family, QFont::Style style, QFont::Weight weight);

    // setID Function
    void setID(int incomingID);


    // Virtual Functions



    // draw Function
    virtual void draw(QPaintDevice* device) = 0;

    // move Function
    virtual void move(vector<int>) = 0;

    // perimeter Function
    virtual double perimeter() = 0;

    // area Function
    virtual double area() = 0;

protected:
    QPainter* painter;
//    QPainter& getQPainter();

private:
    QFont font;
    int id;
    ShapeType shape;
    QPen pen;
    QBrush brush;
    int shapeID;
};

#endif // SHAPE_H

