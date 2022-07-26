// ========================================================================
// parser2.cpp
// ========================================================================

#include "parser2.h"

void Parser::readFile()
{
    //file variable
    ifstream myFile;

    myFile.open("shapes.txt");
    if (myFile.fail())
    {
        cout << "file could not be opened." << std::endl;
        return;
    }

    std::string line;
    while(getline(myFile,line))
    {
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> id;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, ShapeType, '\r');
        cout << id;
        cout << ShapeType;

        if(ShapeType == "Line")
        {
            readLine(myFile);

        }
        else if(ShapeType == "Polyline")
        {
            readPolyline(myFile);

        }
        else if(ShapeType == "Polygon")
        {
            readPolygon(myFile);

        }
        else if(ShapeType == "Rectangle")
        {
            readRectangle(myFile);

        }
        else if(ShapeType == "Square")
        {
            readSquare(myFile);

        }
        else if(ShapeType == "Ellipse")
        {
            readEllipse(myFile);

        }
        else if(ShapeType == "Circle")
        {
            readCircle(myFile);

        }
        else if(ShapeType == "Text")
        {
            readText(myFile);

        }

    }
    myFile.close();
}

void Parser::readLine(std::ifstream& myFile)
{
    //dimensions
    int x1,y1;
    int x2,y2;
    string mycolor;
    int penWidth;
    string penStyle;
    string penCap;
    string penJoinStyle;


        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> x1;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> y1;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> x2;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> y2;

      //  QPoint point1(x1,y1);
       // QPoint point2(x2,y2);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, mycolor, '\r');
        this->qtGColor = convertPenColor(mycolor);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\r');
        this->qtPStyle = convertPenStyle(penStyle);
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\r');
        this->qtPCStyle = convertPenCapStyle(penCap);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\r');
        this->qtJStyle = convertPenJoinStyle(penJoinStyle);


}


void Parser::readPolyline(std::ifstream& myFile)
{
    //dimensions
    int x1,y1;
    int x2,y2;
    int x3,y3;
    int x4,y4;
    string color;
    int penWidth;
    string penStyle;
    string penCap;
    string penJoinStyle;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> x1;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> y1;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> x2;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> y2;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> x3;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> y3;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> x4;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> y4;
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\r');
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\r');
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\r');

}

void Parser::readPolygon(std::ifstream& myFile)
{
    //dimensions
    int x1,y1;
    int x2,y2;
    int x3,y3;
    int x4,y4;
    string color;
    int penWidth;
    string penStyle;
    string penCap;
    string penJoinStyle;
    string brushColor;
    string brushStyle;

        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        myFile.ignore();
        myFile >> y2;
        myFile.ignore();
        myFile >> x3;
        myFile.ignore();
        myFile >> y3;
        myFile.ignore();
        myFile >> x4;
        myFile.ignore();
        myFile >> y4;
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\r');
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\r');
        //penJstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\r');
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');

}

void Parser::readRectangle(std::ifstream& myFile)
{
    //dimensions
    int x1,y1;
    int x2,y2;
    string color;
    int penWidth;
    string penStyle;
    string penCap;
    string penJoinStyle;
    string brushColor;
    string brushStyle;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        myFile.ignore();
        myFile >> y2;
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\r');
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\r');
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\r');
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');

}
void Parser::readSquare(std::ifstream& myFile)
{
    //dimensions
    int x1,y1;
    int x2;
    string color;
    int penWidth;
    string penStyle;
    string penCap;
    string penJoinStyle;
    string brushColor;
    string brushStyle;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\r');
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\r');
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\r');
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');

}

void Parser::readEllipse(std::ifstream& myFile)
{
    //dimensions
    int x1,y1;
    int x2,y2;
    string color;
    int penWidth;
    string penStyle;
    string penCap;
    string penJoinStyle;
    string brushColor;
    string brushStyle;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        myFile.ignore();
        myFile >> y2;
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\r');
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\r');
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\r');
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');

}

void Parser::readCircle(std::ifstream& myFile)
{
    //dimensions
    int x1,y1;
    int x2;
    string color;
    int penWidth;
    string penStyle;
    string penCap;
    string penJoinStyle;
    string brushColor;
    string brushStyle;

        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\r');
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\r');
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\r');
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');

}

void Parser::readText(std::ifstream& myFile)
{
    //dimensions
    int x1,y1;
    int x2,y2;
    string textString;
    string Textcolor;
    string textAllignment; //aka flag
    int PointSize;
    string textFont;
    string fontStyle;
    string fontWeight;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        myFile.ignore();
        myFile >> y2;
        //text string
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, textString, '\r');
        //text color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, Textcolor, '\r');
        //text allignment
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, textAllignment, '\r');
        //text pointsize
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> PointSize;
        //text font;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, textFont, '\r');
        //text fontstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, fontStyle, '\r');
        //text fontstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, fontWeight, '\r');

}


Qt::GlobalColor Parser::convertPenColor(string incolor)
{
    if(incolor == "white")
    {
        return Qt::white;
    }
    else if(incolor == "black")
    {
        return Qt::GlobalColor::black;
    }
    else if(incolor == "red")
    {
        return Qt::GlobalColor::red;
    }
    else if(incolor == "blue")
    {
        return Qt::GlobalColor::blue;
    }
    else if(incolor == "cyan")
    {
        return Qt::GlobalColor::cyan;
    }
    else if(incolor == "magenta")
    {
        return Qt::GlobalColor::magenta;
    }
    else if(incolor == "yellow")
    {
        return Qt::GlobalColor::yellow;
    }
    else
        return Qt::GlobalColor::gray;
}

Qt::PenStyle Parser::convertPenStyle(string pStyle)
{
    if(pStyle == "SolidLine")
    {
        return Qt::PenStyle::SolidLine;
    }
    else if(pStyle == "DashLine")
    {
        return Qt::PenStyle::DashLine;
    }
    else if(pStyle == "DotLine")
    {
        return Qt::PenStyle::DotLine;
    }
    else if(pStyle == "DashDotLine")
    {
        return Qt::PenStyle::DashDotLine;
    }
    else if(pStyle == "DashDotDotLine")
    {
        return Qt::PenStyle::DashDotDotLine;
    }
    else
        return Qt::PenStyle::NoPen;
}

Qt::PenJoinStyle Parser::convertPenJoinStyle(string pJStyle)
{
    if(pJStyle == "MiterJoin")
    {
        return Qt::PenJoinStyle::MiterJoin;
    }
    else if(pJStyle == "BevelJoin")
    {
        return Qt::PenJoinStyle::BevelJoin;
    }
    else
        return Qt::PenJoinStyle::RoundJoin;

}

Qt::PenCapStyle Parser::convertPenCapStyle(string pCStyle)
{
    if(pCStyle == "FlatCap")
    {
        return Qt::PenCapStyle::FlatCap;
    }
    else if(pCStyle == "SquareCap")
    {
        return Qt::PenCapStyle::SquareCap;
    }
    else
        return Qt::PenCapStyle::RoundCap;
}

Qt::GlobalColor Parser::converBrushColor(string brushColor)
{
    if(brushColor == "white")
    {
        return Qt::GlobalColor::white;
    }
    else if(brushColor == "black")
    {
        return Qt::GlobalColor::black;
    }
    else if(brushColor == "red")
    {
        return Qt::GlobalColor::red;
    }
    else if(brushColor == "blue")
    {
        return Qt::GlobalColor::blue;
    }
    else if(brushColor == "cyan")
    {
        return Qt::GlobalColor::cyan;
    }
    else if(brushColor == "magenta")
    {
        return Qt::GlobalColor::magenta;
    }
    else if(brushColor == "yellow")
    {
        return Qt::GlobalColor::yellow;
    }
    else
    {
        return Qt::GlobalColor::gray;
    }
}

Qt::BrushStyle Parser::convertBrushStyle(string bStyle)
{
    if(bStyle == "SolidPattern")
    {
        return Qt::BrushStyle::SolidPattern;
    }
    else if(bStyle == "HorPattern")
    {
        return Qt::BrushStyle::HorPattern;
    }
    else if(bStyle == "VerPattern")
    {
        return Qt::BrushStyle::VerPattern;
    }
    else
    {
        return Qt::BrushStyle::NoBrush;
    }
}


Qt::AlignmentFlag Parser::convertAlignment(string allign)
{
    if(allign == "AlignLeft")
    {
        return Qt::AlignmentFlag::AlignLeft;
    }
    else if(allign == "AlignRight")
    {
        return Qt::AlignmentFlag::AlignRight;
    }
    else if(allign == "AlignTop")
    {
        return Qt::AlignmentFlag::AlignTop;
    }
    else if(allign == "AlignBottom")
    {
        return Qt::AlignmentFlag::AlignBottom;
    }
    else
    {
        return Qt::AlignmentFlag::AlignCenter;
    }
}

Qt::GlobalColor Parser::converTextColor(string textcolor)
{
    if(textcolor == "white")
    {
        return Qt::GlobalColor::white;
    }
    else if(textcolor == "black")
    {
        return Qt::GlobalColor::black;
    }
    else if(textcolor == "red")
    {
        return Qt::GlobalColor::red;
    }
    else if(textcolor == "blue")
    {
        return Qt::GlobalColor::blue;
    }
    else if(textcolor == "cyan")
    {
        return Qt::GlobalColor::cyan;
    }
    else if(textcolor == "magenta")
    {
        return Qt::GlobalColor::magenta;
    }
    else if(textcolor == "yellow")
    {
        return Qt::GlobalColor::yellow;
    }
    else
    {
        return Qt::GlobalColor::gray;
    }
}


QFont::Style Parser::convertStyle(string style)
{
    if(style == "StyleNormal")
    {
        return QFont::Style::StyleNormal;
    }
    else if(style == "StyleItalic")
    {
        return QFont::Style::StyleItalic;
    }
    else
    {
        return QFont::Style::StyleOblique;
    }
}

QFont::Weight Parser::convertWeight(string weight)
{
    if(weight == "Thin")
    {
        return QFont::Weight::Thin;
    }
    else if(weight == "Light")
    {
        return QFont::Weight::Light;
    }
    else if(weight == "Normal")
    {
        return QFont::Weight::Normal;
    }
    else
    {
        return QFont::Weight::Bold;
    }
}

        vector<Shape*> Parser::returnParser()
        {
            return test;
        }
