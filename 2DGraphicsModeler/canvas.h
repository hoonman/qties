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


//!  A canvas class inherit from the class QWidget
class canvas : public QWidget
{
    Q_OBJECT
public:

    //! Default constructor
    /*!
     *  \param *parent initialized to nullptr
     */
    explicit canvas(QWidget *parent = nullptr);

    //! override the paintEvent function
    /*!
     * draw the shape that passed in
     * \param *event
     */
    void paintEvent(QPaintEvent *event) override;

    //! A setShape function
    /*!
     * set up the shape that passed in
     * \param shapes will be set into myShapes
     */
    void setShape(vector<Shape*> shapes) {myShapes = shapes;}

signals:

    private:
    vector<Shape*> myShapes;


};

#endif // CANVAS_H
