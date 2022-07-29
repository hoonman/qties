// ========================================================================
// myRectangle.h
// ========================================================================

#ifndef myRectangle_H
#define myRectangle_H
#include <QPoint>
#include "Shape.h"

//!  A myRectangle class inherit from the class shape represent a rectangle object
class myRectangle : public Shape
{
public:
    //! Default constructor
    /*!
     *  \param *device initialized to nullptr
     *  \param id initialized to -1
     *  \param shape initialized to enum initial
     *  \sa enum class ShapeType
     */
    myRectangle(QPaintDevice* device = nullptr, int id = -1)
        : Shape{device, id, ShapeType::Rectangle} {}

    //! override the destructor
    /*!
     *  perform nothing
     */
    ~myRectangle() override {delete painter;}

    //! Copy constructor
    /*!
     *  \param &myRectangle copy the data from the &myRectangle and store into the rectangle object
     */
    myRectangle(const myRectangle& myRectangle);

    //! Copy assignement
    /*!
     *  \param &myRectangle copy the data in the &myRectangle and store into the rectangle object
        \return *this
     */
    virtual myRectangle& operator=(const myRectangle& myRectangle);

    //! A function that will set the myRectangle
    /*!
     * \param &point the coordinate where the rectangle start
     * \param &point2 the coordinate where the rectangle end
     */
    void setmyRectangle(const QPoint& point, const QPoint& point2);

    //! override the draw function
    /*!
     * draw the rectangle and output the rectangle's id
     * \param device
     */
    void draw(QPaintDevice* device) override;

    //! override the move function
    /*!
     * move the rectangle to the new coordinate
     * \param vector<int>
     */
    void move(vector<int>) override;

    //! override the perimeter function
    /*!
     * calculate the perimeter of the rectangle
     * \return (2*width)+(2*height) the perimeter of the rectangle
     */
    double perimeter() override;

    //! override the area function
    /*!
     * \return width*height the area of the rectangle
     */
    double area() override;


private:
    QPoint point1;
    QPoint point2;
    int x;
    int y;
    int width;
    int height;
};

#endif // myRectangle_H
