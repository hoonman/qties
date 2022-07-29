// ========================================================================
// myPolyline.h
// ========================================================================

#ifndef myPolyline_H
#define myPolyline_H
#include <QPoint>
#include "Shape.h"

//!  A myPolyline class inherit from the class shape
/*!
 *  represent a polyline object
 */
class myPolyline : public Shape
{
public:

    //! Default constructor
    /*!
     *  \param *device initialized to nullptr
     *  \param id initialized to -1
     *  \param shape initialized to enum polyline
     *  \sa enum class ShapeType
     */
    myPolyline(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Polyline)
        : Shape{device, id, shape} {}

    //! override the destructor
    /*!
     *  perform nothing
     */
    ~myPolyline() override {}

    //! Copy constructor
    /*!
     *  \param &myPolyline copy the data from the &myPolyline and store into the polyline object
     */
        myPolyline(myPolyline& myPolyline);

    //! Copy assignement
    /*!
     *  \param &myPolyline copy the data in the &myPolyline and store into the polyline object
        \return *this
     */
    virtual myPolyline& operator=(myPolyline& myPolyline);


    //! A function that will set the myPolyline
    /*!
     * \param &p1 the coordinate where the polyline start
     * \param &p2 the coordinate where the polyline end
     */
    void setmyPolyline(const QPoint &p1, const QPoint &p2);

    //! override the draw function
    /*!
     * draw the polyline and output the polyline's id
     * \param device
     */
    void draw(QPaintDevice* device) override;

    //! override the move function
    /*!
     * move the polyline to the new coordinate
     * \param vector<int>
     */
    void move(vector<int>) override;


    //! override the perimeter function
    /*!
     * calculate the perimeter of the polyline
     * \return 0 since the polyline has no perimeter
     */
    double perimeter() override;

    //! override the area function
    /*!
     * \return 0 since the polyline has no area
     */
    double area() override;



private:
    vector<QPoint> points;
    QPoint *start;
};


#endif // myPolyline_H
