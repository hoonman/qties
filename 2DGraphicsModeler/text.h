// ========================================================================
// text.h
// ========================================================================

#ifndef TEXT_H
#define TEXT_H
#include <QPoint>
#include "Shape.h"

class Text : public Shape
{
public:

    // Constructor
    Text(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Text)
        : Shape{device, id, shape} {}

    // setText Function
    void setText(int x, int y, int length, int width, int flag, QString text);

    //Override from the base class

    // draw Function
    void draw(MainApplication *model) override;

    // move Function
    void move(vector<int>) override;

    // perimeter Function
    double perimeter() override;

    // area Function
    double area() override;



private:
    QFont font;
    QPoint point1;
    int x;
    int y;
    int length;
    int width;
    int AllignmentFlag;
    QString text;
};

#endif // TEXT_H
