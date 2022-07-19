// ========================================================================
// parser2.h
// ========================================================================

#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <sstream>
#include <string>
#include <fstream>
#include <QPainter>
#include "Shape.h"
#include "line.h"
//using namespace std;

class parser2
{
public:
    parser2();
    ~parser2() {}
    void openFile();
    void openAndDraw();
    int getID();
    void getShapeType();
    void getShapeDim();
    void getPenColor();
    void getPenWidth();
    void getCapStyle();
    void getPenJoinStyle();

private:
    int id;
    std::string line;
    std::string text;
    std::string item;
    std::ifstream infile;
};

#endif // PARSER_H
