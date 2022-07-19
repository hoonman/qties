// ========================================================================
// parser.cpp
// ========================================================================

#include "parser.h"
using namespace std;

// Constructor
Parser::Parser(){}

// openFile Function
void Parser::openFile()
{
         // Opens shapes.txt file
         QFile file("shapes.txt");

         if (!file.exists())
         {
             qCritical() << "File does not exist";
         }

         // Checks for errors
         if(!file.open(QIODevice::OpenModeFlag::ReadOnly))
         {
             qCritical() << "Could not open file!";
             qCritical() << file.errorString();
             return;
         }

        // Reads the file
        readingFile(file);
}

// readingFile Function
void Parser::readingFile(QFile &file)
{
    qCritical() << "YOU MADE IT!";


    //qInfo() << "Reading file...";
    QTextStream stream(&file);

    // boolean to help us determine if we are at the end of the file
    bool isAtEnd = false;

    // This variable holds irrelevant text
    QString shapeIDText = "";

    // this variable holds IMPORTANT text
    QString ID = "";

    // The file while be read as long as we are not at the end of the file
    while(!isAtEnd)
    {
        qCritical() << "Read Something?!";
        // Reading input from file
        stream >> shapeIDText;
        stream >> ID;

        if(ID == "1")
        {
            //readLine();
        }
        else if(ID == "2")
        {
            //readPolyline();
        }
        else if(ID == "3")
        {
            //readPolygon();
        }
        else if(ID == "4")
        {
            //readRectangle();
        }
        else if(ID == "5")
        {
            //readSquare();
        }
        else if(ID == "6")
        {
            //readElipse();
        }
        else if(ID == "7")
        {
            //readCircle();
        }
        else if(ID == "8")
        {
            //readText();
        }
        else
        {
            qCritical() << "Cannot find the correct place for file input:parser";
        }

        // Flips if end of the file
        if(file.atEnd())
        {
            isAtEnd = true;
        }
    }

    // Closes the file
    file.close();
}


