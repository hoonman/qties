#include "serializer.h"

Serializer::Serializer()
{

}

//     myFile << "";

void Serializer::serializeLine(QPoint qPoint1,
                   QPoint qPoint2,
                    Qt::GlobalColor penColor,
                   int penWidth,
                   Qt::PenStyle penStyle,
                   Qt::PenCapStyle penCap,
                   Qt::PenJoinStyle penJoin)
{

    std::ofstream myFile;

    myFile.open("shapes.txt", std::ios::app);
    if (myFile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }

    myFile << std::endl;
    myFile << "ShapeId: 1\n";
    myFile << "ShapeType: Line\n";
    myFile << "ShapeDimensions: " << qPoint1.x() << " , " << qPoint1.y() << " , " << qPoint2.x() << " , " << qPoint2.y() << std::endl;
    myFile << "PenColor: " << convertPenColor(penColor) << std::endl;
    myFile << "PenWidth: " << penWidth << std::endl;
    myFile << "PenStyle: " << convertPenStyle(penStyle) << std::endl;
    myFile << "PenCapStyle: " << convertPenCapStyle(penCap) << std::endl;
    myFile << "PenJoinStyle: " << convertPenJoinStyle(penJoin) << std::endl;

    myFile.flush();
    myFile.close();
}

void Serializer::serializePolyline(QPoint qPoint1,
                       QPoint qPoint2,
                       QPoint qPoint3,
                       QPoint qPoint4,
                       Qt::GlobalColor penColor,
                       int penWidth,
                       Qt::PenStyle penStyle,
                       Qt::PenCapStyle penCap,
                       Qt::PenJoinStyle penJoin)
{
    std::ofstream myFile;

    myFile.open("shapes.txt", std::ios::app);
    if (myFile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }

    myFile << std::endl;
    myFile << "ShapeId: 2\n";
    myFile << "ShapeType: Polyline\n";
    myFile << "ShapeDimensions: " << qPoint1.x() << " , " << qPoint1.y() << " , " << qPoint2.x() << " , " << qPoint2.y() << " , ";
    myFile << "ShapeDimensions: " << qPoint3.x() << " , " << qPoint3.y() << " , " << qPoint4.x() << " , " << qPoint4.y() << std::endl;
    myFile << "PenColor: " << convertPenColor(penColor) << std::endl;
    myFile << "PenWidth: " << penWidth << std::endl;
    myFile << "PenStyle: " << convertPenStyle(penStyle) << std::endl;
    myFile << "PenCapStyle: " << convertPenCapStyle(penCap) << std::endl;
    myFile << "PenJoinStyle: " << convertPenJoinStyle(penJoin) << std::endl;

    myFile.flush();
    myFile.close();
}

void Serializer::serializePolygon(QPoint qPoint1,
                      QPoint qPoint2,
                      QPoint qPoint3,
                      QPoint qPoint4,
                      Qt::GlobalColor penColor,
                      int penWidth,
                      Qt::PenStyle penStyle,
                      Qt::PenCapStyle penCap,
                      Qt::PenJoinStyle penJoin,
                      Qt::GlobalColor brushColor,
                      Qt::BrushStyle brushStyle)
{
    std::ofstream myFile;

    myFile.open("shapes.txt", std::ios::app);
    if (myFile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }

    myFile << std::endl;
    myFile << "ShapeId: 3\n";
    myFile << "ShapeType: Polygon\n";
    myFile << "ShapeDimensions: " << qPoint1.x() << " , " << qPoint1.y() << " , " << qPoint2.x() << " , " << qPoint2.y() <<  " , ";
    myFile << qPoint1.x() << " , " << qPoint3.y() << " , " << qPoint3.x() << " , " << qPoint4.y();
    myFile << "PenColor: " << convertPenColor(penColor) << std::endl;
    myFile << "PenWidth: " << penWidth << std::endl;
    myFile << "PenStyle: " << convertPenStyle(penStyle) << std::endl;
    myFile << "PenCapStyle: " << convertPenCapStyle(penCap) << std::endl;
    myFile << "PenJoinStyle: " << convertPenJoinStyle(penJoin) << std::endl;
    myFile << "BrushColor: " << converBrushColor(brushColor) << std::endl;
    myFile << "BrushStyle:  " << convertBrushStyle(brushStyle) << std::endl;

    myFile.flush();
    myFile.close();
}

void Serializer::serializeRectangle(QPoint qPoint1,
                        QPoint qPoint2,
                        Qt::GlobalColor penColor,
                        int penWidth,
                        Qt::PenStyle penStyle,
                        Qt::PenCapStyle penCap,
                        Qt::PenJoinStyle penJoin,
                        Qt::GlobalColor brushColor,
                        Qt::BrushStyle brushStyle)
{
    std::ofstream myFile;

    myFile.open("shapes.txt", std::ios::app);
    if (myFile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }

    myFile << std::endl;
    myFile << "ShapeId: 4\n";
    myFile << "ShapeType: Rectangle\n";
    myFile << "ShapeDimensions: " << qPoint1.x() << " , " << qPoint1.y() << " , " << qPoint2.x() << " , " << qPoint2.y() << std::endl;
    myFile << "PenColor: " << convertPenColor(penColor) << std::endl;
    myFile << "PenWidth: " << penWidth << std::endl;
    myFile << "PenStyle: " << convertPenStyle(penStyle) << std::endl;
    myFile << "PenCapStyle: " << convertPenCapStyle(penCap) << std::endl;
    myFile << "PenJoinStyle: " << convertPenJoinStyle(penJoin) << std::endl;
    myFile << "BrushColor: " << converBrushColor(brushColor) << std::endl;
    myFile << "BrushStyle: " << convertBrushStyle(brushStyle) << std::endl;

    myFile.flush();
    myFile.close();
}

void Serializer::serializeSquare(QPoint qPoint1,
                     QPoint qPoint2,
                     Qt::GlobalColor penColor,
                     int penWidth,
                     Qt::PenStyle penStyle,
                     Qt::PenCapStyle penCap,
                     Qt::PenJoinStyle penJoin,
                     Qt::GlobalColor brushColor,
                     Qt::BrushStyle brushStyle)
{
    std::ofstream myFile;

    myFile.open("shapes.txt", std::ios::app);
    if (myFile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }

    myFile << std::endl;
    myFile << "ShapeId: 5\n";
    myFile << "ShapeType: Square\n";
    myFile << "ShapeDimensions: " << qPoint1.x() << " , " << qPoint1.y() << " , " << qPoint2.x() << " , " << qPoint2.y() << std::endl;
    myFile << "PenColor: " << convertPenColor(penColor) << std::endl;
    myFile << "PenWidth: " << penWidth << std::endl;
    myFile << "PenStyle: " << convertPenStyle(penStyle) << std::endl;
    myFile << "PenCapStyle: " << convertPenCapStyle(penCap) << std::endl;
    myFile << "PenJoinStyle: " << convertPenJoinStyle(penJoin) << std::endl;
    myFile << "BrushColor: " << converBrushColor(brushColor) << std::endl;
    myFile << "BrushStyle: " << convertBrushStyle(brushStyle) << std::endl;

    myFile.flush();
    myFile.close();
}

void Serializer::serializeCircle(QPoint qPoint1,
                     int x2,
                     int y2,
                     Qt::GlobalColor penColor,
                     int penWidth,
                     Qt::PenStyle penStyle,
                     Qt::PenCapStyle penCap,
                     Qt::PenJoinStyle penJoin,
                     Qt::GlobalColor brushColor,
                     Qt::BrushStyle brushStyle)
{
    std::ofstream myFile;

    myFile.open("shapes.txt", std::ios::app);
    if (myFile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }

    myFile << std::endl;
    myFile << "ShapeId: 6\n";
    myFile << "ShapeType: Circle\n";
    myFile << "ShapeDimensions: " << qPoint1.x() << " , " << qPoint1.y() << " , " << x2 << " , " << y2;
    myFile << "PenColor: " << convertPenColor(penColor) << std::endl;
    myFile << "PenWidth: " << penWidth << std::endl;
    myFile << "PenStyle: " << convertPenStyle(penStyle) << std::endl;
    myFile << "PenCapStyle: " << convertPenCapStyle(penCap) << std::endl;
    myFile << "PenJoinStyle: " << convertPenJoinStyle(penJoin) << std::endl;
    myFile << "BrushColor: " << converBrushColor(brushColor) << std::endl;
    myFile << "BrushStyle: " << convertBrushStyle(brushStyle) << std::endl;

    myFile.flush();
    myFile.close();
}

void Serializer::serializeElipse(QPoint qPoint1,
                     int x2,
                     int y2,
                     Qt::GlobalColor penColor,
                     int penWidth,
                     Qt::PenStyle penStyle,
                     Qt::PenCapStyle penCap,
                     Qt::PenJoinStyle penJoin,
                     Qt::GlobalColor brushColor,
                     Qt::BrushStyle brushStyle)
{
    std::ofstream myFile;

    myFile.open("shapes.txt", std::ios::app);
    if (myFile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }

    myFile  << std::endl;
    myFile << "ShapeId: 7\n";
    myFile << "ShapeType: Elipse\n";
    myFile << "ShapeDimensions: " << qPoint1.x() << " , " << qPoint1.y() << " , " << x2 << " , " << y2;
    myFile << "PenColor: " << convertPenColor(penColor) << std::endl;
    myFile << "PenWidth: " << penWidth << std::endl;
    myFile << "PenStyle: " << convertPenStyle(penStyle) << std::endl;
    myFile << "PenCapStyle: " << convertPenCapStyle(penCap) << std::endl;
    myFile << "PenJoinStyle: " << convertPenJoinStyle(penJoin) << std::endl;
    myFile << "BrushColor: " << converBrushColor(brushColor) << std::endl;
    myFile << "BrushStyle: " << convertBrushStyle(brushStyle) << std::endl;

    myFile.flush();
    myFile.close();
}

void Serializer::serializeText(int x1,
                   int y1,
                   int x2,
                   int y2,
                   Qt::AlignmentFlag textAlign,
                   QString TextString,
                   Qt::GlobalColor textColor,
                   int textPointsize,
                   QString fontFamily,
                   QFont::Style fontStyle,
                   QFont::Weight fontWeight)
{
    std::ofstream myFile;

    myFile.open("shapes.txt", std::ios::app);
    if (myFile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }

    myFile << std::endl;
    myFile << "ShapeId: 8\n";
    myFile << "ShapeType: Text\n";
    myFile << "ShapeDimensions: " << x1 << " , " << y1 << " , " << x2 << " , " << y2;
    myFile << "TextString: " << TextString.toStdString() << std::endl;
    myFile << "TextColor: " << converTextColor(textColor) << std::endl;
    myFile << "TextAlignment: " << convertAlignment(textAlign) << std::endl;
    myFile << "TextPointSize: " << textPointsize << std::endl;
    myFile << "TextFontFamily: " << fontFamily.toStdString() << std::endl;
    myFile << "TextFontStyle: " << convertStyle(fontStyle) << std::endl;
    myFile << "TextFontWeight: " << convertWeight(fontWeight) << std::endl;

    myFile.flush();
    myFile.close();
}


// CONVERT PEN STYLE FUNCTIONS -----------------------------------------------

std::string Serializer::convertPenColor(Qt::GlobalColor incolor){

    if(incolor == Qt::white)
        {
            return "white";
        }
        else if(incolor == Qt::black)
        {
            return "black";
        }
        else if(incolor == Qt::red)
        {
            return "red";
        }
        else if(incolor == Qt::blue)
        {
            return "blue";
        }
        else if(incolor == Qt::cyan)
        {
            return "cyan";
        }
        else if(incolor == Qt::magenta)
        {
            return "magenta";
        }
        else if(incolor == Qt::yellow)
        {
            return "yellow";
        }
        else
            return "green";
}

std::string Serializer::convertPenStyle(Qt::PenStyle pStyle){

    if(pStyle == Qt::SolidLine)
        {
            return "SolidLine";
        }
        else if(pStyle == Qt::DashLine)
        {
            return "DashLine";
        }
        else if(pStyle == Qt::DotLine)
        {
            return "DotLine";
        }
        else if(pStyle == Qt::DashDotLine)
        {
            return "DashDotLine";
        }
        else if(pStyle == Qt::DashDotDotLine)
        {
            return "DashDotDotLine";
        }
        else
            return "No Pen";
}

std::string Serializer::convertPenJoinStyle(Qt::PenJoinStyle pJStyle){

    if(pJStyle == Qt::MiterJoin)
        {
            return "MiterJoin";
        }
        else if(pJStyle ==  Qt::BevelJoin)
        {
            return"BevelJoin";
        }
        else
            return "RoundJoin";
}

std::string Serializer::convertPenCapStyle(Qt::PenCapStyle pCStyle){

    if(pCStyle == Qt::FlatCap)
        {
            return "FlatCap";
        }
        else if(pCStyle == Qt::SquareCap)
        {
            return "SquareCap";
        }
        else
            return "RoundCap";
}

std::string Serializer::converBrushColor(Qt::GlobalColor brushColor){

    if(brushColor == Qt::white)
        {
            return "white";
        }
        else if(brushColor == Qt::black)
        {
            return "black";
        }
        else if(brushColor == Qt::red)
        {
            return "red";
        }
        else if(brushColor == Qt::blue)
        {
            return "blue";
        }
        else if(brushColor == Qt::cyan)
        {
            return "cyan";
        }
        else if(brushColor == Qt::magenta)
        {
            return "magenta";
        }
        else if(brushColor == Qt::yellow)
        {
            return "yellow";
        }
        else
        {
            return "green";
        }
}

std::string Serializer::convertBrushStyle(Qt::BrushStyle bStyle){

    if(bStyle == Qt::SolidPattern)
        {
            return "SolidPattern";
        }
        else if(bStyle == Qt::HorPattern)
        {
            return "HorPattern";
        }
        else if(bStyle == Qt::VerPattern)
        {
            return "VerPattern";
        }
        else
        {
            return "NoBrush";
        }
}

std::string Serializer::convertAlignment(Qt::AlignmentFlag allign){

    if(allign == Qt::AlignLeft)
        {
            return "AlignLeft";
        }
        else if(allign == Qt::AlignRight)
        {
            return "AlignRight";
        }
        else if(allign == Qt::AlignTop)
        {
            return "AlignTop";
        }
        else if(allign == Qt::AlignBottom)
        {
            return "AlignBottom";
        }
        else
        {
            return "AlignCenter";
        }
}

std::string Serializer::converTextColor(Qt::GlobalColor textcolor){

    if(textcolor == Qt::white)
        {
            return "white";
        }
        else if(textcolor == Qt::black)
        {
            return "black";
        }
        else if(textcolor ==  Qt::red)
        {
            return"red";
        }
        else if(textcolor == Qt::blue)
        {
            return "blue";
        }
        else if(textcolor == Qt::cyan)
        {
            return "cyan";
        }
        else if(textcolor == Qt::magenta)
        {
            return "magenta";
        }
        else if(textcolor == Qt::yellow)
        {
            return "yellow";
        }
        else
        {
            return "green";
        }
}

std::string Serializer::convertStyle(QFont::Style style){

    if(style == QFont::StyleNormal)
        {
            return "StyleNormal";
        }
        else if(style == QFont::StyleItalic)
        {
            return  "StyleItalic";
        }
        else
        {
            return "StyleOblique";
        }
}

std::string Serializer::convertWeight(QFont::Weight weight){

    if(weight == QFont::Thin)
        {
            return "Thin";
        }
        else if(weight == QFont::Light)
        {
            return "Light";
        }
        else if(weight == QFont::Normal)
        {
            return "Normal";
        }
        else
        {
            return "Bold";
        }
}
