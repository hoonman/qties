#include "canvas.h"
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "parser2.h"
#include "text.h"
#include "mainwindow.h"
#include "storage.h"
#include "vector.h"

canvas::canvas(QWidget *parent)
    : QWidget{parent}
{

}


void canvas::paintEvent(QPaintEvent *event)
{
    Parser parse;
    vector<Shape*> myShapes = parse.manualDraw();

    for(int i = 0; i < myShapes.size(); i++)
    {
        myShapes[i]->draw(this);
    }
}
