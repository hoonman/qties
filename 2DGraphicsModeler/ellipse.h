// ========================================================================
// myEllipse.h
// ========================================================================

#ifndef myEllipse_H
#define myEllipse_H
#include <QPoint>
#include "Shape.h"

//!  A myEllipse class inherit from the class shape
/*!
 *  represent a Line object
 */
class myEllipse : public Shape
{
public:

    //! Default constructor
    /*!
     *  \param *device initialized to nullptr
     *  \param id initialized to -1
     *  \param shape initialized to enum Line
     *  \sa enum class ShapeType
     */
    myEllipse(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Ellipse)
        : Shape{device, id, shape} {}

    //! override the destructor
    /*!
     *  perform nothing
     */
    ~myEllipse() override {delete painter;}

    //! Copy constructor
    /*!
     *  \param &myEllipse copy the data from the &myEllipse and store into the myEllipse object
     */
    myEllipse(const myEllipse& myEllipse);

    //! Copy assignement
    /*!
     *  \param &myEllipse copy the data in the &myEllipse and store into the myEllipse object
        \return *this
     */
    virtual myEllipse& operator=(myEllipse & myEllipse);

    //! A function that will set the ellipse
    /*!
     * \param &p1 QPoint containing x and y coordinates
     * \param int x - the x value
     * \param int y - the y value
     */
    void setmyEllipse(const QPoint &p1, int x, int y);

    //! override the draw function
    /*!
     * draw the Ellipse and outputs Ellipse ID.
     * \param QPaintDevice* device
     */
    void draw(QPaintDevice* device) override;

    //! override the move function
    /*!
     * move the Ellipse to the new coordinate
     * \param vector<int>
     */
    void move(vector<int>) override;

    //! override the perimeter function
    /*!
     * calculate the perimeter of the Ellipse
     * \return periter the perimeter of the Ellipse
     */
    double perimeter() override;


    //! override the area function
    /*!
     * \return area of Ellipse
     */
    double area() override;



private:
    QPoint point1;
    int xAxis;
    int yAxis;
};

#endif // POLYLINE_H
