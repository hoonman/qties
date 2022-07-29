// ========================================================================
// text.h
// ========================================================================

#ifndef TEXT_H
#define TEXT_H
#include <QPoint>
#include "Shape.h"

//!  A Text class inherit from the class shape represent a text object
class Text : public Shape
{
public:

    //! Default constructor
    /*!
     *  \param *device initialized to nullptr
     *  \param id initialized to -1
     *  \param shape initialized to enum Polygon
     *  \sa enum class ShapeType
     */
    Text(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Text)
        : Shape{device, id, shape} {}
    //! override the destructor
    /*!
     *  perform nothing
     */
    ~Text() override {delete painter;}

    //! A function that will set the myPolygon
    /*!
     * \param x
     * \param y
     * \param length
     * \param width
     * \param flag
     * \param text
     */
    void setText(int x, int y, int length, int width, int flag, QString text);

    //! override the draw function
    /*!
     * draw the text and output the text's id
     * \param device
     */
    void draw(QPaintDevice* device) override;

    //! override the move function
    /*!
     * move the text to the new coordinate
     * \param vector<int>
     */
    void move(vector<int>) override;

    //! override the perimeter function
    /*!
     * calculate the perimeter of the text
     * \return 0 since text has no perimeter
     */
    double perimeter() override;

    //! override the area function
    /*!
     * \return 0 since the area has no area
     */
    double area() override;



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
