// ========================================================================
// parser2.cpp
// ========================================================================

#include "parser2.h"

// Constructor
parser2::parser2(){}

// openFile Function
//void parser2::openFile()
//{
//    std::ifstream infile("shapes.txt", std::ios::in);
//}

void parser2::setFilePath(QString newFilePath){
    filePathName = newFilePath;
    pathNameSet = true;
}

void parser2::readFile()
{
    std::ifstream infile("shapes.txt", std::ios::in);
    if (infile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }



    getline(infile, text, ' ');
    getline(infile, item, '\n');
    shapeID = std::stoi(item);
    getline(infile, text, ' ');
    getline(infile, shape, '\n');
//    if (shape == "Line")
//    {
//        readLine(infile);
//        readPen(infile);
//    }
//    if (shape == "Polyline")
//    {
//        readPolyLine(infile);
//        readPen(infile);
//    }
    readLine(infile);
    readPen(infile);

    getline(infile, text, ' ');
    getline(infile, item, '\n');
    shapeID = std::stoi(item);
    getline(infile, text, ' ');
    getline(infile, shape, '\n');

    readPolyLine(infile);
    readPen(infile);
    infile.close();
}

void parser2::readPen(std::ifstream& infile)
{
    std::string color, penStyle, penCap, penJoin;
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    color = item;
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    width = std::stoi(item);
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    penStyle = item;
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    penCap = item;
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    penJoin = item;

    if (color == "white")
    {
        this->color = Qt::white;
    }
    if (color == "black")
    {
        this->color = Qt::black;
    }
    if (color == "red")
    {
        this->color = Qt::red;
    }
    if (color == "green")
    {
        this->color = Qt::green;
    }
    if (color == "blue")
    {
        this->color = Qt::blue;
    }
    if (color == "cyan")
    {
        this->color = Qt::cyan;
    }
    if (color == "magenta")
    {
        this->color = Qt::magenta;
    }
    if (color == "yellow")
    {
        this->color = Qt::yellow;
    }
    if (color == "gray")
    {
        this->color = Qt::gray;
    }

    if (penStyle == "NoPen")
    {
        this->penStyle = Qt::NoPen;
    }
    if (penStyle == "SolidLine")
    {
        this->penStyle = Qt::SolidLine;
    }
    if (penStyle == "DashLine")
    {
        this->penStyle = Qt::DashLine;
    }
    if (penStyle == "DotLine")
    {
        this->penStyle = Qt::DotLine;
    }
    if (penStyle == "NoPen")
    {
        this->penStyle = Qt::DashDotLine;
    }
    if (penStyle == "DashDotDotLine")
    {
        this->penStyle = Qt::DashDotDotLine;
    }

    if (penCap == "FlatCap")
    {
        this->penCap = Qt::FlatCap;
    }
    if (penCap == "SquareCap")
    {
        this->penCap = Qt::SquareCap;
    }
    if (penCap == "RoundCap")
    {
        this->penCap = Qt::RoundCap;
    }

    if (penJoin == "MiterJoin")
    {
        this->penJoin = Qt::MiterJoin;
    }
    if (penJoin == "BevelJoin")
    {
        this->penJoin = Qt::BevelJoin;
    }
    if (penJoin == "RoundJoin")
    {
        this->penJoin = Qt::RoundJoin;
    }

}

void parser2::readLine(std::ifstream &infile)
{
    getline(infile, text, ' ');
    getline(infile, item, ',');
    point1 = std::stoi(item);
    getline(infile, text, ' ');
    getline(infile, item, ',');
    point2 = std::stoi(item);
    getline(infile, text, ' ');
    getline(infile, item, ',');
    point3 = std::stoi(item);
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    point4 = std::stoi(item);
}

void parser2::readPolyLine(std::ifstream &infile)
{
    getline(infile, text, ' ');
    getline(infile, item, ',');
    intVector.push_back(std::stoi(item));
    getline(infile, text, ' ');
    getline(infile, item, ',');
    intVector.push_back(std::stoi(item));
    getline(infile, text, ' ');
    getline(infile, item, ',');
    intVector.push_back(std::stoi(item));
    getline(infile, text, ' ');
    getline(infile, item, ',');
    intVector.push_back(std::stoi(item));
    getline(infile, text, ' ');
    getline(infile, item, ',');
    intVector.push_back(std::stoi(item));
    getline(infile, text, ' ');
    getline(infile, item, ',');
    intVector.push_back(std::stoi(item));
    getline(infile, text, ' ');
    getline(infile, item, ',');
    intVector.push_back(std::stoi(item));
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    intVector.push_back(std::stoi(item));


    std::cout << intVector.size() << std::endl;
}

void parser2::readBrush(std::ifstream& infile)
{
    std::string brushColor, brushStyle;
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    brushColor = item;

    if (brushColor == "white")
    {
        this->brushColor = Qt::white;
    }
    if (brushColor == "black")
    {
        this->brushColor = Qt::black;
    }
    if (brushColor == "red")
    {
        this->brushColor = Qt::red;
    }
    if (brushColor == "green")
    {
        this->brushColor = Qt::green;
    }
    if (brushColor == "blue")
    {
        this->brushColor = Qt::blue;
    }
    if (brushColor == "cyan")
    {
        this->brushColor = Qt::cyan;
    }
    if (brushColor == "magenta")
    {
        this->brushColor = Qt::magenta;
    }
    if (brushColor == "yellow")
    {
        this->brushColor = Qt::yellow;
    }
    if (brushColor == "gray")
    {
        this->brushColor = Qt::gray;
    }

    getline(infile, text, ' ');
    getline(infile, item, '\n');
    brushStyle = item;

    if (brushStyle == "SolidPattern")
    {
        this->brushStyle = Qt::SolidPattern;
    }
    if (brushStyle == "HorPattern")
    {
        this->brushStyle = Qt::HorPattern;
    }
    if (brushStyle == "VerPattern")
    {
        this->brushStyle = Qt::VerPattern;
    }
    if (brushStyle == "NoBrush")
    {
        this->brushStyle = Qt::NoBrush;
    }

}
