// ========================================================================
// line.h
// ========================================================================

#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include <QPoint>
#include "mainwindow.h"

//!  A Line class inherit from the class shape
/*!
 *  represent a Line object
 */
class Line : public Shape
{
public:

    //! Default constructor
    /*!
     *  \param *device initialized to nullptr
     *  \param id initialized to -1
     *  \param shape initialized to enum Line
     *  \sa enum class ShapeType
     */
    Line(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Line)
        : Shape{device, id, shape} {}

    //! override the destructor
    /*!
     *  perform nothing
     */
    ~Line() override {}

    //! Copy constructor
    /*!
     *  \param &line copy the data from the &line and store into the line object
     */
    Line(const Line& line);

    //! Copy assignement
    /*!
     *  \param &line copy the data in the &line and store into the line object
        \return *this
     */
    virtual Line& operator=(const Line& line);

    //! A function that will set the line
    /*!
     * \param &p1 the coordinate where the line start
     * \param &p2 the coordinate where the line end
     */
    void setLine(const QPoint &p1, const QPoint &p2);


    //! override the draw function
    /*!
     * draw the line and output the line's id
     * \param device
     */
    void draw(QPaintDevice* device) override;

    //! override the move function
    /*!
     * move the line to the new coordinate
     * \param vector<int>
     */
    void move(vector<int>) override;

    //! override the perimeter function
    /*!
     * calculate the perimeter of the line
     * \return periter the perimeter of the line
     */
    double perimeter() override;

    //! override the area function
    /*!
     * \return 0 since the line has no area, return 0
     */
    double area() override;

private:
    QPoint Point1;
    QPoint Point2;
};

#endif




