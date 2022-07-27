// ========================================================================
// parser2.cpp
// ========================================================================

#include "parser2.h"
/*
void Parser::changeCoordinates()
{
    pt2 = 900;
    pt4 = 200;
    pt2 = pt2 + 1000;
    pt4 = pt4 + 1000;

}
*/

vector<Shape*> Parser::readFile()
{

    //file variable
    ifstream myFile;

    myFile.open("shapes.txt");
    if (myFile.fail())
    {
        cout << "file could not be opened." << std::endl;
        return 1;
    }

    int hello = 0;
    cout << endl << endl << "STARTING..." << endl;

    std::string line;
    while(myFile.peek() != EOF)
    {
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> id;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, ShapeType, '\n');
        //myFile >> ShapeType;
        hello = hello + 1;
        std::cout << endl << endl << hello << endl;

        if(ShapeType == "Line")
        {
           readLine(myFile);
            std:: cout << endl << endl << "Reading line!!!" << endl;

        }
        else if(ShapeType == "Polyline")
        {
            readPolyline(myFile);
             std:: cout << endl << endl << "WE DID IT!!!" << endl;

        }
        else if(ShapeType == "Polygon")
        {
           readPolygon(myFile);
            std:: cout << endl << endl << "WE DID IT!!!" << endl;

        }
        else if(ShapeType == "Rectangle")
        {
           readRectangle(myFile);
            std:: cout << endl << endl << "WE DID IT!!!" << endl;

        }
        else if(ShapeType == "Square")
        {
           readSquare(myFile);
            std:: cout << endl << endl << "WE DID IT!!!" << endl;

        }
        else if(ShapeType == "Ellipse")
        {
           readEllipse(myFile);
            std:: cout << endl << endl << "WE DID IT!!!" << endl;

        }
        else if(ShapeType == "Circle")
        {
           readCircle(myFile);
            std:: cout << endl << endl << "WE DID IT!!!" << endl;

        }
        else if(ShapeType == "Text")
        {
           readText(myFile);
            std:: cout << endl << endl << "WE DID IT!!!" << endl;

        }

        std::cout << endl << endl << "END OF FILE!!" << endl;

    }
    myFile.close();

    std::cout << endl << endl << "END OF Function!!" << endl;

    return myVector;
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
    Qt::GlobalColor qtGColor;
    Qt::PenStyle qtPStyle;
    Qt::PenCapStyle qtPCStyle;
    Qt::PenJoinStyle qtJStyle;

        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> x1;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> y1;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> x2;
        myFile.ignore(numeric_limits<streamsize>::max(), ',');
        myFile >> y2;

        QPoint point1(x1,y1);
        QPoint point2(x2,y2);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, mycolor, '\n');
        qtGColor = convertPenColor(mycolor);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\n');
        qtPStyle = convertPenStyle(penStyle);
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\n');
        qtPCStyle = convertPenCapStyle(penCap);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\n');
        qtJStyle = convertPenJoinStyle(penJoinStyle);
        std::cout << mycolor << endl;
        std::cout << penWidth << endl;
        std::cout << penStyle << endl;
        std::cout << penCap << endl;
        std::cout << penJoinStyle << endl;

        std::cout << qtGColor << endl;
        std::cout << qtPStyle << endl;
        std::cout << qtPCStyle << endl;
        std::cout << qtJStyle << endl;

        Line* tempLine = new Line;
        tempLine->setLine(point1, point2);
        tempLine->setPen(qtGColor, penWidth, qtPStyle, qtPCStyle, qtJStyle);
        myVector.push_back(tempLine);
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
    Qt::GlobalColor qtGColor;
    Qt::PenStyle qtPStyle;
    Qt::PenCapStyle qtPCStyle;
    Qt::PenJoinStyle qtJStyle;
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
        QPoint point1(x1,y1);
        QPoint point2(x2,y2);
        QPoint point3(x3,y3);
        QPoint point4(x4,y4);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\n');
        qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\n');
        qtPStyle = convertPenStyle(penStyle);
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\n');
        qtPCStyle = convertPenCapStyle(penCap);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        //getline(myFile, penJoinStyle, '/n');
        qtJStyle = convertPenJoinStyle(penJoinStyle);

        std::cout << color << endl;
        std::cout << penWidth << endl;
        std::cout << penStyle << endl;
        std::cout << penCap << endl;
        std::cout << penJoinStyle << endl;

        std::cout << qtGColor << endl;
        std::cout << qtPStyle << endl;
        std::cout << qtPCStyle << endl;
        std::cout << qtJStyle << endl;
        myPolyline* tempPoly = new myPolyline;
        tempPoly->setmyPolyline(point1, point2);
        tempPoly->setmyPolyline(point3, point4);
        tempPoly->setPen(qtGColor, penWidth, qtPStyle, qtPCStyle, qtJStyle);
        myVector.push_back(tempPoly);
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
    Qt::GlobalColor qtGColor;
    Qt::PenStyle qtPStyle;
    Qt::PenCapStyle qtPCStyle;
    Qt::PenJoinStyle qtJStyle;

    Qt::GlobalColor qtBcolor;
    Qt::BrushStyle qtBstyle;
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
        QPoint point1(x1,y1);
        QPoint point2(x2,y2);
        QPoint point3(x3,y3);
        QPoint point4(x4,y4);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\n');
        qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\n');
        qtPStyle = convertPenStyle(penStyle);
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\n');
        qtPCStyle = convertPenCapStyle(penCap);
        //penJstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\n');
        qtJStyle = convertPenJoinStyle(penJoinStyle);
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\n');
        qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\n');
        qtBstyle = convertBrushStyle(brushStyle);
        std::cout << color << endl;
        std::cout << penWidth << endl;
        std::cout << penStyle << endl;
        std::cout << penCap << endl;
        std::cout << penJoinStyle << endl;

        std::cout << qtGColor << endl;
        std::cout << qtPStyle << endl;
        std::cout << qtPCStyle << endl;
        std::cout << qtJStyle << endl;

        std::cout << qtBcolor << endl;
        std::cout << qtBstyle << endl;


        myPolygon* tempPolygon = new myPolygon;
        tempPolygon->setmyPolygon(point1, point2);
        tempPolygon->setmyPolygon(point3, point4);
        tempPolygon->setPen(qtGColor, penWidth, qtPStyle, qtPCStyle, qtJStyle);
        tempPolygon->setBrush(qtBcolor, qtBstyle);
        myVector.push_back(tempPolygon);
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
    Qt::GlobalColor qtGColor;
    Qt::PenStyle qtPStyle;
    Qt::PenCapStyle qtPCStyle;
    Qt::PenJoinStyle qtJStyle;

    Qt::GlobalColor qtBcolor;
    Qt::BrushStyle qtBstyle;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        myFile.ignore();
        myFile >> y2;
        QPoint point1(x1,y1);
        QPoint point2(x2,y2);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\n');
        qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\n');
        qtPStyle = convertPenStyle(penStyle);
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\n');
        qtPCStyle = convertPenCapStyle(penCap);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\n');
        qtJStyle = convertPenJoinStyle(penJoinStyle);
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\n');
        qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\n');
        qtBstyle = convertBrushStyle(brushStyle);

        myRectangle* tempRect = new myRectangle;
        tempRect->setmyRectangle(point1, point2);
        tempRect->setPen(qtGColor, penWidth, qtPStyle, qtPCStyle, qtJStyle);
        tempRect->setBrush(qtBcolor, qtBstyle);
        myVector.push_back(tempRect);
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
    Qt::GlobalColor qtGColor;
    Qt::PenStyle qtPStyle;
    Qt::PenCapStyle qtPCStyle;
    Qt::PenJoinStyle qtJStyle;

    Qt::GlobalColor qtBcolor;
    Qt::BrushStyle qtBstyle;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        QPoint point1(x1,y1);
        QPoint point2(x2,x2);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\n');
        qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\n');
        qtPStyle = convertPenStyle(penStyle);
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\n');
        qtPCStyle = convertPenCapStyle(penCap);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\n');
        qtJStyle = convertPenJoinStyle(penJoinStyle);
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\n');
        qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\n');
        qtBstyle = convertBrushStyle(brushStyle);

        myRectangle* tempRect = new myRectangle;
        tempRect->setmyRectangle(point1, point2);
        tempRect->setPen(qtGColor, penWidth, qtPStyle, qtPCStyle, qtJStyle);
        tempRect->setBrush(qtBcolor, qtBstyle);
        myVector.push_back(tempRect);
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
    Qt::GlobalColor qtGColor;
    Qt::PenStyle qtPStyle;
    Qt::PenCapStyle qtPCStyle;
    Qt::PenJoinStyle qtJStyle;

    Qt::GlobalColor qtBcolor;
    Qt::BrushStyle qtBstyle;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        myFile.ignore();
        myFile >> y2;
        QPoint point1(x1,y1);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\n');
        qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\n');
        qtPStyle = convertPenStyle(penStyle);
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\n');
        qtPCStyle = convertPenCapStyle(penCap);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\n');
        qtJStyle = convertPenJoinStyle(penJoinStyle);
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\n');
        qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\n');
        qtBstyle = convertBrushStyle(brushStyle);

        myEllipse* tempEllipse = new myEllipse;
        tempEllipse->setmyEllipse(point1, x2, y2);
        tempEllipse->setPen(qtGColor, penWidth, qtPStyle, qtPCStyle, qtJStyle);
        tempEllipse->setBrush(qtBcolor, qtBstyle);
        myVector.push_back(tempEllipse);
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
    Qt::GlobalColor qtGColor;
    Qt::PenStyle qtPStyle;
    Qt::PenCapStyle qtPCStyle;
    Qt::PenJoinStyle qtJStyle;

    Qt::GlobalColor qtBcolor;
    Qt::BrushStyle qtBstyle;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> x1;
        myFile.ignore();
        myFile >> y1;
        myFile.ignore();
        myFile >> x2;
        QPoint point1(x1,y1);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\n');
        qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> penWidth;
        //penstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penStyle, '\n');
        qtPStyle = convertPenStyle(penStyle);
        //penCapstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penCap, '\n');
        qtPCStyle = convertPenCapStyle(penCap);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\n');
        qtJStyle = convertPenJoinStyle(penJoinStyle);
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\n');
        qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\n');
        qtBstyle = convertBrushStyle(brushStyle);

        myEllipse* tempEllipse = new myEllipse;
        tempEllipse->setmyEllipse(point1, x2, x2);
        tempEllipse->setPen(qtGColor, penWidth, qtPStyle, qtPCStyle, qtJStyle);
        tempEllipse->setBrush(qtBcolor, qtBstyle);
        myVector.push_back(tempEllipse);
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
    Qt::AlignmentFlag qtAFlag;
    Qt::GlobalColor fontColor;
    QFont::Style qtfontStyle;
    QFont::Weight qtfontWeight;
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
        getline(myFile, textString, '\n');
        QString mystring = QString::fromStdString(textString);
        //text color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, Textcolor, '\n');
        fontColor = converTextColor(Textcolor);
        //text allignment
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, textAllignment, '\n');
        qtAFlag = convertAlignment(textAllignment);
        //text pointsize
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> PointSize;
        //text font;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, textFont, '\n');
        QString fontString = QString::fromStdString(textFont);
        //text fontstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, fontStyle, '\n');
        qtfontStyle = convertStyle(fontStyle);
        //text fontstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, fontWeight, '\n');
        getline(myFile, blank, '\n');
        qtfontWeight = convertWeight(fontWeight);
        std::cout << textString << endl;
        std::cout << Textcolor << endl;
        std::cout << textAllignment << endl;
        std::cout << textFont << endl;
        std::cout << fontStyle << endl;
        std::cout << fontWeight << endl;


        Text* tempText = new Text;
        tempText->setText(x1, y1, x2, y2, qtAFlag, mystring);
        tempText->setFont(fontColor,PointSize, fontString, qtfontStyle, qtfontWeight);




        myVector.push_back(tempText);
}


Qt::GlobalColor Parser::convertPenColor(string incolor)
{
    if(incolor == "white")
    {
        return Qt::white;
    }
    else if(incolor == "black")
    {
        return Qt::black;
    }
    else if(incolor == "red")
    {
        return Qt::red;
    }
    else if(incolor == "blue")
    {
        return Qt::blue;
    }
    else if(incolor == "cyan")
    {
        return Qt::cyan;
    }
    else if(incolor == "magenta")
    {
        return Qt::magenta;
    }
    else if(incolor == "yellow")
    {
        return Qt::yellow;
    }
    else
        return Qt::green;
}

Qt::PenStyle Parser::convertPenStyle(string pStyle)
{
    if(pStyle == "SolidLine")
    {
        return Qt::SolidLine;
    }
    else if(pStyle == "DashLine")
    {
        return Qt::DashLine;
    }
    else if(pStyle == "DotLine")
    {
        return Qt::DotLine;
    }
    else if(pStyle == "DashDotLine")
    {
        return Qt::DashDotLine;
    }
    else if(pStyle == "DashDotDotLine")
    {
        return Qt::DashDotDotLine;
    }
    else
        return Qt::NoPen;
}

Qt::PenJoinStyle Parser::convertPenJoinStyle(string pJStyle)
{
    if(pJStyle == "MiterJoin")
    {
        return Qt::MiterJoin;
    }
    else if(pJStyle == "BevelJoin")
    {
        return Qt::BevelJoin;
    }
    else
        return Qt::RoundJoin;

}

Qt::PenCapStyle Parser::convertPenCapStyle(string pCStyle)
{
    if(pCStyle == "FlatCap")
    {
        return Qt::FlatCap;
    }
    else if(pCStyle == "SquareCap")
    {
        return Qt::SquareCap;
    }
    else
        return Qt::RoundCap;
}

Qt::GlobalColor Parser::converBrushColor(string brushColor)
{
    if(brushColor == "white")
    {
        return Qt::white;
    }
    else if(brushColor == "black")
    {
        return Qt::black;
    }
    else if(brushColor == "red")
    {
        return Qt::red;
    }
    else if(brushColor == "blue")
    {
        return Qt::blue;
    }
    else if(brushColor == "cyan")
    {
        return Qt::cyan;
    }
    else if(brushColor == "magenta")
    {
        return Qt::magenta;
    }
    else if(brushColor == "yellow")
    {
        return Qt::yellow;
    }
    else
    {
        return Qt::green;
    }
}

Qt::BrushStyle Parser::convertBrushStyle(string bStyle)
{
    if(bStyle == "SolidPattern")
    {
        return Qt::SolidPattern;
    }
    else if(bStyle == "HorPattern")
    {
        return Qt::HorPattern;
    }
    else if(bStyle == "VerPattern")
    {
        return Qt::VerPattern;
    }
    else
    {
        return Qt::NoBrush;
    }
}


Qt::AlignmentFlag Parser::convertAlignment(string allign)
{
    if(allign == "AlignLeft")
    {
        return Qt::AlignLeft;
    }
    else if(allign == "AlignRight")
    {
        return Qt::AlignRight;
    }
    else if(allign == "AlignTop")
    {
        return Qt::AlignTop;
    }
    else if(allign == "AlignBottom")
    {
        return Qt::AlignBottom;
    }
    else
    {
        return Qt::AlignCenter;
    }
}

Qt::GlobalColor Parser::converTextColor(string textcolor)
{
    if(textcolor == "white")
    {
        return Qt::white;
    }
    else if(textcolor == "black")
    {
        return Qt::black;
    }
    else if(textcolor == "red")
    {
        return Qt::red;
    }
    else if(textcolor == "blue")
    {
        return Qt::blue;
    }
    else if(textcolor == "cyan")
    {
        return Qt::cyan;
    }
    else if(textcolor == "magenta")
    {
        return Qt::magenta;
    }
    else if(textcolor == "yellow")
    {
        return Qt::yellow;
    }
    else
    {
        return Qt::green;
    }
}


QFont::Style Parser::convertStyle(string style)
{
    if(style == "StyleNormal")
    {
        return QFont::StyleNormal;
    }
    else if(style == "StyleItalic")
    {
        return QFont::StyleItalic;
    }
    else
    {
        return QFont::StyleOblique;
    }
}

QFont::Weight Parser::convertWeight(string weight)
{
    if(weight == "Thin")
    {
        return QFont::Thin;
    }
    else if(weight == "Light")
    {
        return QFont::Light;
    }
    else if(weight == "Normal")
    {
        return QFont::Normal;
    }
    else
    {
        return QFont::Bold;
    }
}

vector<Shape*> Parser::manualDraw()
{
    vector<Shape*> ourShapes;
    Line* tempLine = new Line;

    tempLine->setLine(QPoint(20,90), QPoint(100,20));
    tempLine->setPen(Qt::blue, 2, Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin);
    ourShapes.push_back(tempLine);

    myPolyline* tempPoly = new myPolyline;
    tempPoly->setmyPolyline(QPoint(460,90), QPoint(470,20));
    tempPoly->setmyPolyline(QPoint(530,40),QPoint(540,80));
    tempPoly->setPen(Qt::green, 6, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    ourShapes.push_back(tempPoly);

    myPolygon* tempPolygon = new myPolygon;
    tempPolygon->setmyPolygon(QPoint(900,90), QPoint(910,20));
    tempPolygon->setmyPolygon(QPoint(970,40),QPoint(980,80));
    tempPolygon->setPen(Qt::cyan, 6, Qt::DashDotDotLine, Qt::FlatCap, Qt::MiterJoin);
    tempPolygon->setBrush(Qt::yellow, Qt::SolidPattern);
    ourShapes.push_back(tempPolygon);

    myRectangle* tempRect = new myRectangle;
    tempRect->setmyRectangle(QPoint(20,200), QPoint(170,100));
    tempRect->setPen(Qt::blue, 0, Qt::DashLine, Qt::RoundCap, Qt::RoundJoin);
    tempRect->setBrush(Qt::red, Qt::VerPattern);
    ourShapes.push_back(tempRect);

    myRectangle* tempSquare = new myRectangle;
    tempSquare->setmyRectangle(QPoint(250,150), QPoint(200,200));
    tempSquare->setPen(Qt::red , 0, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    tempSquare->setBrush(Qt::blue, Qt::HorPattern);
    ourShapes.push_back(tempSquare);

    myEllipse* tempEllipse = new myEllipse;
    tempEllipse->setmyEllipse(QPoint(520,200), 170, 100);
    tempEllipse->setPen(Qt::black, 12, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    tempEllipse->setBrush(Qt::white, Qt::NoBrush);
    ourShapes.push_back(tempEllipse);

    myEllipse* tempCircle = new myEllipse;
    tempCircle->setmyEllipse(QPoint(750,150), 200, 200);
    tempCircle->setPen(Qt::black, 12, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
    tempCircle->setBrush(Qt::magenta, Qt::SolidPattern);
    ourShapes.push_back(tempCircle);

    Text* tempText = new Text;
    tempText->setText(250, 425, 500, 50, Qt::AlignCenter, QString("Class Project 2 - 2D Graphics Modeler"));
    tempText->setFont(Qt::blue , 10, QString("Comic Sans MS"), QFont::StyleItalic, QFont::Normal);
    ourShapes.push_back(tempText);

    return ourShapes;
}
