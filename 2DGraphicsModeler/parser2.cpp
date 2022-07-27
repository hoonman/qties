// ========================================================================
// parser2.cpp
// ========================================================================

#include "parser2.h"

vector<Shape*> Parser::readFile()
{
    vector<Shape*> myVector;
    //file variable
    ifstream myFile;

    myFile.open("shapes.txt");
    if (myFile.fail())
    {
        cout << "file could not be opened." << std::endl;
        return -1;
    }

    std::string line;
    while(myFile.peek() != EOF)
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
            myVector.push_back(readLine(myFile));

        }
        else if(ShapeType == "Polyline")
        {
             myVector.push_back(readPolyline(myFile));

        }
        else if(ShapeType == "Polygon")
        {
            myVector.push_back(readPolygon(myFile));

        }
        else if(ShapeType == "Rectangle")
        {
            myVector.push_back(readRectangle(myFile));

        }
        else if(ShapeType == "Square")
        {
            myVector.push_back(readSquare(myFile));

        }
        else if(ShapeType == "Ellipse")
        {
            myVector.push_back(readEllipse(myFile));

        }
        else if(ShapeType == "Circle")
        {
            myVector.push_back(readCircle(myFile));

        }
        else if(ShapeType == "Text")
        {
            myVector.push_back(readText(myFile));

        }

    }
    myFile.close();


    return myVector;
}

Line* Parser::readLine(std::ifstream& myFile)
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

        QPoint point1(x1,y1);
        QPoint point2(x2,y2);
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

        Line* tempLine = new Line;
        tempLine->setLine(point1, point2);
        tempLine->setPen(this->qtGColor, penWidth, this->qtPStyle, this->qtPCStyle, this->qtJStyle);
        return tempLine;
}


myPolyline* Parser::readPolyline(std::ifstream& myFile)
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
        QPoint point1(x1,y1);
        QPoint point2(x2,y2);
        QPoint point3(x3,y3);
        QPoint point4(x4,y4);
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        this->qtGColor = convertPenColor(color);
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

        myPolyline* tempPoly = new myPolyline;
        tempPoly->setmyPolyline(point1, point2);
        tempPoly->setmyPolyline(point3, point4);
        tempPoly->setPen(this->qtGColor, penWidth, this->qtPStyle, this->qtPCStyle, this->qtJStyle);
        return tempPoly;
}

myPolygon* Parser::readPolygon(std::ifstream& myFile)
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
        QPoint point1(x1,y1);
        QPoint point2(x2,y2);
        QPoint point3(x3,y3);
        QPoint point4(x4,y4);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        this->qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
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
        //penJstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, penJoinStyle, '\r');
        this->qtJStyle = convertPenJoinStyle(penJoinStyle);
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        this->qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');
        this->qtBstyle = convertBrushStyle(brushStyle);
        myPolygon* tempPolygon = new myPolygon;
        tempPolygon->setmyPolygon(point1, point2);
        tempPolygon->setmyPolygon(point3, point4);
        tempPolygon->setPen(this->qtGColor, penWidth, this->qtPStyle, this->qtPCStyle, this->qtJStyle);
        tempPolygon->setBrush(this->qtBcolor, this->qtBstyle);
        return tempPolygon;
}

myRectangle* Parser::readRectangle(std::ifstream& myFile)
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
        QPoint point1(x1,y1);
        QPoint point2(x2,y2);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        this->qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
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
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        this->qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');
        this->qtBstyle = convertBrushStyle(brushStyle);

        myRectangle* tempRect = new myRectangle;
        tempRect->setmyRectangle(point1, point2);
        tempRect->setPen(this->qtGColor, penWidth, this->qtPStyle, this->qtPCStyle, this->qtJStyle);
        tempRect->setBrush(this->qtBcolor, this->qtBstyle);
        return tempRect;
}
myRectangle* Parser::readSquare(std::ifstream& myFile)
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
        QPoint point1(x1,y1);
        QPoint point2(x2,x2);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        this->qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
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
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        this->qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');
        this->qtBstyle = convertBrushStyle(brushStyle);

        myRectangle* tempRect = new myRectangle;
        tempRect->setmyRectangle(point1, point2);
        tempRect->setPen(this->qtGColor, penWidth, this->qtPStyle, this->qtPCStyle, this->qtJStyle);
        tempRect->setBrush(this->qtBcolor, this->qtBstyle);
        return tempRect;
}

myEllipse* Parser::readEllipse(std::ifstream& myFile)
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
        QPoint point1(x1,y1);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        this->qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
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
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        this->qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');
        this->qtBstyle = convertBrushStyle(brushStyle);

        myEllipse* tempEllipse = new myEllipse;
        tempEllipse->setmyEllipse(point1, x2, y2);
        tempEllipse->setPen(this->qtGColor, penWidth, this->qtPStyle, this->qtPCStyle, this->qtJStyle);
        tempEllipse->setBrush(this->qtBcolor, this->qtBstyle);
        return tempEllipse;
}

myEllipse* Parser::readCircle(std::ifstream& myFile)
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
        QPoint point1(x1,y1);
        //color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, color, '\r');
        this->qtGColor = convertPenColor(color);
        //width
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
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
        //brush color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushColor, '\r');
        this->qtBcolor = converBrushColor(brushColor);
        //brush style
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, brushStyle, '\r');
        this->qtBstyle = convertBrushStyle(brushStyle);

        myEllipse* tempEllipse = new myEllipse;
        tempEllipse->setmyEllipse(point1, x2, x2);
        tempEllipse->setPen(this->qtGColor, penWidth, this->qtPStyle, this->qtPCStyle, this->qtJStyle);
        tempEllipse->setBrush(this->qtBcolor, this->qtBstyle);
        return tempEllipse;
}

Text* Parser::readText(std::ifstream& myFile)
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
        QString mystring = QString::fromStdString(textString);
        //text color
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, Textcolor, '\r');
        this->fontColor = converTextColor(Textcolor);
        //text allignment
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, textAllignment, '\r');
        this->qtAFlag = convertAlignment(textAllignment);
        //text pointsize
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        myFile >> PointSize;
        //text font;
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, textFont, '\r');
        QString fontString = QString::fromStdString(textFont);
        //text fontstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, fontStyle, '\r');
        this->fontStyle = convertStyle(fontStyle);
        //text fontstyle
        myFile.ignore(numeric_limits<streamsize>::max(), ':');
        myFile.ignore();
        getline(myFile, fontWeight, '\r');
        getline(myFile, blank, '\n');
        this->fontWeight = convertWeight(fontWeight);

        Text* tempText = new Text;
        tempText->setText(x1, y1, x2, y2, this->qtAFlag, mystring);
        tempText->setFont(this->fontColor,PointSize, fontString, this->fontStyle, this->fontWeight);

        return tempText;
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
        return Qt::gray;
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
        return Qt::gray;
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
        return Qt::gray;
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
