// ========================================================================
// parser.h
// ========================================================================

#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

class Parser
{
public:

    // Constructor
    Parser();

    // openFile Function
    void openFile();

    // readFile Function
    void readingFile(QFile &file);

    // setPenColor Function
    void setPenColor() {ShapeType = "cyan";}

    // getShapeType Function
    QString& getShapeType() {return ShapeType;}

    // getPenColor Function
    QString& getPenColor() {return PenColor;}

private:
    QString ShapeType;
    QString ShapeDimensions;
    QString PenColor;
    QString PenWidth;
    QString PenStyle;
    QString PenCapStyle;
    QString PenJoinStyle;
    QString BrushColor;
    QString BrushStyle;
    QString TextString;
    QString TextColor;
    QString TextAlignment;
    QString TextPointSize;
    QString TextFontFamily;
    QString TextFontStyle;
    QString TextFontWeight;
};

#endif // PARSER_H
