#include "canvas.h"
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "parser2.h"
#include "text.h"

canvas::canvas(QWidget *parent)
    : QWidget{parent}
{

}


void canvas::paintEvent(QPaintEvent *event)
{

    Line* line = new Line;
    QPoint point(20, 90);
    QPoint point2(100, 20);
    line->setLine(point, point2);
    line->setPen(Qt::blue, 4, Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin);

    vector<Shape*> test;
    test.push_back(line);
    test[0]->draw(this);

    Parser yesTest;
    yesTest.readFile();
}
