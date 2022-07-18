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
    void openFile();
    void readingFile(QFile &file);
    void setPenColor() {ShapeType = "cyan";}
    QString& getShapeType() {return ShapeType;}
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
