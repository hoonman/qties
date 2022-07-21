// ========================================================================
// parser2.cpp
// ========================================================================

#include "parser2.h"

// Constructor
parser2::parser2(){}

// openFile Function
void parser2::readFile()
{
    std::ifstream infile("C:/Users/jh020/OneDrive/Desktop/demo2/qties/2DGraphicsModeler/shapes.txt", std::ios::in);
    if (infile.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return;
    }
    std::string color, penStyle, penCap, penJoin;
    //getline(infile, text, '\n');
    getline(infile, text, ' ');
    getline(infile, item, '\n');
    shapeID = std::stoi(item);
    getline(infile, text, ' ');
    getline(infile, shape, '\n');
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

    this->color = Qt::red;
    this->penStyle = Qt::DashDotDotLine;
    this->penCap = Qt::FlatCap;
    this->penJoin = Qt::MiterJoin;

    infile.close();
}
