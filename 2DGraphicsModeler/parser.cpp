#include "parser.h"
using namespace std;
parser::parser()
{

}

// This opens the file, and we start reading the process of reading it
void parser::openFile()
{
         // We open the shapes.txt file to read it
         QFile file("shapes.txt");
         if (!file.exists())
         {
             qCritical() << "File does not exist";
         }
         // If there is an error with the file this will tell us
         if(!file.open(QIODevice::OpenModeFlag::ReadOnly))
         {
             qCritical() << "Could not open file!";
             qCritical() << file.errorString();
             return;
         }

        // Reading file function...
        readingFile(file);
}


void parser::readingFile(QFile &file)
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


        // if ID is 1, then go to function that will read the Line characteristics, ect...
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


        // If we have reached the end of the file, flip boolean
        if(file.atEnd())
        {
            isAtEnd = true;
        }
    }

    // file is closed if everything has been read
    file.close();
}


