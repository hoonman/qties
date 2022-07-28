// ========================================================================
// Shape.h
// ========================================================================

#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>
#include <QColor>
#include <QPoint>
#include "vector.h"
#include <QFont>
#include <math.h>

//!  A shape class
/*!
 *  represent a shape object
 */
class Shape
{
public:

    //! An enum
    /*!
     * This enum represents different shapes
     */
    enum class ShapeType {Initial, /*!< Enum value Initial. */
                          Line, /*!< Enum value Line. */
                          Polyline, /*!< Enum value Polyline. */
                          Polygon, /*!< Enum value Polygon. */
                          Rectangle, /*!< Enum value Rectangle. */
                          Ellipse,/*!< Enum value Ellipse. */
                          Text/*!< Enum value Text. */ };
    //! Default constructor
    /*!
     *  \param *device initialized to nullptr
     *  \param id initialized to -1
     *  \param shape initialized to enum initial
     *  \sa enum class ShapeType
     */
    Shape(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::Initial){painter = new QPainter;};


    //! destructor
    /*!
     *  delete painter
     */
    virtual ~Shape() {delete painter;}

    //! overload operator <
    /*!
     * \param &shapeObject the shape that's being compare
     * \return true when the pass in shape's id is bigger
     * \return false when the pass in shape's id is smaller
     */
    bool operator <(const Shape& shapeObject)
    {
        if(getID() < shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //! overload operator >
    /*!
     * \param &shapeObject the shape that's being compare
     * \return true when the pass in shape's id is smaller
     * \return false when the pass in shape's id is bigger
     */
    bool operator >(const Shape& shapeObject)
    {
        if(getID() > shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //! overload operator <=
    /*!
     * \param &shapeObject the shape that's being compare
     * \return true when the pass in shape's id is bigger or equal
     * \return false when the pass in shape's id is smaller
     */
    bool operator <=(const Shape& shapeObject)
    {
        if(getID() <= shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //! overload operator >=
    /*!
     * \param &shapeObject the shape that's being compare
     * \return true when the pass in shape's id is smaller or equal
     * \return false when the pass in shape's id is bigger
     */
    bool operator >=(const Shape& shapeObject)
    {
        if(getID() < shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //! overload operator ==
    /*!
     * \param &shapeObject the shape that's being compare
     * \return true when the pass in shape's id is equal
     * \return false when the pass in shape's id is not equal
     */
    bool operator ==(const Shape& shapeObject)
    {
        if(getID() == shapeObject.getID())
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    //! Copy constructor
    /*!
     *  \param &shape copy the data from the object passed in into the shape object
     */
    Shape(const Shape& shape);

    //! Copy assignement
    /*!
     *  \param &shape copy the data in the shape object into &shape
        \return *this
     */
    virtual Shape& operator=(const Shape& shape);

    //! A function that will return the shape
    /*!
     * \return shape
     */
    ShapeType getShape() const{return shape;}


    //! A function that will return the pen
    /*!
     * \return pen
     */
    const QPen& getPen() const{return pen;}


    //! A function that will return the brush
    /*!
     * \return brush
     */
    const QBrush& getBrush() const{return brush;}


    //! A function that will return the font
    /*!
     * \return font
     */
    const QFont& getFont() const{return font;}


    //! A function that will return the id
    /*!
     * \return shapeID
     */
    const int& getID() const{return shapeID;}


    //! A function that will set the shape
    /*!
     * \param shape the obj that wll be set into this->shape
     * set this->shape to shape
     */
    void setShape(ShapeType shape){this->shape = shape;}


    //! A function that will set the pen
    /*!
     * \param color the color of the pen
     * \param width the width of the pen
     * \param p the style of the pen
     * \param pc the style of pen cap
     * \param pj the style of koin style
     */
    void setPen(Qt::GlobalColor color, int width, Qt::PenStyle p, Qt::PenCapStyle pc, Qt::PenJoinStyle pj);


    //! A function that will set the brush
    /*!
     * \param color the color of the brush
     * \param bs the style of trhe brush
     */
    void setBrush(Qt::GlobalColor color, Qt::BrushStyle bs);


    //! A function that will set the font
    /*!
     * \param color the color of the font
     * \param pointSize the size of the font
     * \param family
     * \param style the style of the font
     * \param weight
     */
    void setFont(Qt::GlobalColor color, int pointSize, QString family, QFont::Style style, QFont::Weight weight);

    //! A function that will set the id
    /*!
     * \param incomingID the shape id will be set to incomingID
     */
    void setID(int incomingID);

    //! draw function
    /*!
     * does not perform anything in the shape class
     * \param device
     */
    virtual void draw(QPaintDevice* device) = 0;

    //! move function
    /*!
     * does not perform anything in the shape class
     * \param vector<int>
     */
    virtual void move(vector<int>) = 0;

    //! perimeter function
    /*!
     * does not perform anything in the shape class
     */
    virtual double perimeter() = 0;

    //! area function
    /*!
     * does not perform anything in the shape class
     */
    virtual double area() = 0;

protected:
    QPainter* painter;
//    QPainter& getQPainter();

private:
    QFont font;
    int id;
    ShapeType shape;
    QPen pen;
    QBrush brush;
    int shapeID;
};

#endif // SHAPE_H

