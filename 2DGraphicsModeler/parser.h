#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <Qfile>
#include <QTextStream>
#include <QMessageBox>


class parser
{
public:
    parser();
    void openFile1();
    void readingFile1(QFile &file);
    void readLine();
    void readPolyline();
    void readPolygon();
    void readRectangle();
    void readSquare();
    void readElipse();
    void readCircle();
    void readText();
};

#endif // PARSER_H
