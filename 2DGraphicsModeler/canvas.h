#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "parser2.h"
#include "text.h"
#include "storage.h"


class canvas : public QWidget
{
    Q_OBJECT
public:
    explicit canvas(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;
    void erasePaint(QPaintEvent *event);
    void connector();
signals:

    private:
    vector<Shape*> myShapes;

};

#endif // CANVAS_H
