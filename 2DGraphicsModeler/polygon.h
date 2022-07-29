// ========================================================================
// myPolygon.h
// ========================================================================

#ifndef myPolygon_H
#define myPolygon_H
#include <QPoint>
#include "Shape.h"

//!  A myPolygon class inherit from the class shape
/*!
 *  represent a polygon object
 */
class myPolygon : public Shape
{
public:

    //! Default constructor
    /*!
     *  \param *device initialized to nullptr
     *  \param id initialized to -1
     *  \param shape initialized to enum Polygon
     *  \sa enum class ShapeType
     */
    myPolygon(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Polygon)
        : Shape{device, id, shape} {}

    //! override the destructor
    /*!
     *  perform nothing
     */
    ~myPolygon() override {}

    //! Copy constructor
    /*!
     *  \param &myPolygon copy the data from the &myPolygon and store into the polygon object
     */
    myPolygon(myPolygon& myPolygon);

    //! Copy assignement
    /*!
     *  \param &myPolygon copy the data in the &myPolygon and store into the polygon object
        \return *this
     */
    virtual myPolygon& operator=(myPolygon& myPolygon);


    //! A function that will set the myPolygon
    /*!
     * \param &p1 the coordinate where the polygon start
     * \param &p2 the coordinate where the polygon end
     */
    void setmyPolygon(const QPoint &p1, const QPoint &p2);

    //! override the draw function
    /*!
     * draw the polygon and output the polygon's id
     * \param device
     */
    void draw(QPaintDevice* device) override;

    //! override the move function
    /*!
     * move the polygon to the new coordinate
     * \param vector<int>
     */
    void move(vector<int>) override;

    //! override the perimeter function
    /*!
     * calculate the perimeter of the polygon
     * \return totalPerimeter the perimeter of the polygon
     */
    double perimeter() override;

    //! override the area function
    /*!
     * \return abs(totalArea/2.0) the area of the polygon
     */
    double area() override;


private:
    vector<QPoint> points;
    QPoint *start;
};

#endif // myPolygon_H
