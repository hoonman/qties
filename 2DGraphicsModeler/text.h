#ifndef TEXT_H
#define TEXT_H
#include <QPoint>
#include "Shape.h"

class Text : public Shape
{
    public:
    Text(QPaintDevice* device = nullptr, int id = -1,
            ShapeType shape = ShapeType::Text) : Shape{device, id, shape} {}
    void setText(int x, int y, int length, int width, int flag, QString text);
    //Override from the base class
    void draw(ModelerApp *model) override;
    void move() override;
    void perimeter() override;
    void area() override;
    void setPoints(const QPoint &p1, const QPoint &p2) override;

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
