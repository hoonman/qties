#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>

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

    ShapeType getShape() const;
    const QPen& getPen() const;
    const QBrush& getBrush() const;

    void setShape(ShapeType shape);
    void setPen(Qt::GlobalColor, int width, Qt::PenStyle,
                Qt::PenCapStyle, Qt::PenJoinStyle);
    void setPen(Qt::GlobalColor);
    void setBrush(Qt::GlobalColor, Qt::BrushStyle);

    void defaultStyle();
    void drawRect(int width, int height);

    virtual void draw(const int translate_x, const int translate_y) = 0;
    virtual void move() = 0;
    virtual void perimeter() = 0;
    virtual void area() = 0;

private:
    QPainter* painter;
    int id;
    ShapeType shape;
    QPen pen;
    QBrush brush;
};

#endif // SHAPE_H
