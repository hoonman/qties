#include "parser2.h"
parser2::parser2()
{

}

void parser2::openFile()
{
    infile.open("C:/Users/jh020/OneDrive/Desktop/demo2/qties/2DGraphicsModeler/shapes.txt");
    if (infile.fail())
    {
        std::cout << "Opening failed" << std::endl;
        return;
    }
}

void parser2::openAndDraw()
{
    std::ifstream infile("C:/Users/jh020/OneDrive/Desktop/demo2/qties/2DGraphicsModeler/shapes.txt", std::ios::in);
    if (infile.fail())
    {
        std::cout << "Opening failed" << std::endl;
        return;
    }
    //Shape ID
    if (getline(infile, line))
    {
        std::stringstream ss(line);
        getline(ss, text, ' ');
        getline(ss, item, '\n');
        std::cout << "Text: " << text << std::endl;
        std::cout << "Item: " << item << std::endl;

    }
    //Shape Type
    if (getline(infile, line))
    {
        std::stringstream ss(line);
        getline(ss, text, ' ');
        getline(ss, item, '\n');
        std::cout << "Text: " << text << std::endl;
        std::cout << "Item: " << item << std::endl;
    }
    //Shape Dimensions
    if (getline(infile, line))
    {
        std::stringstream ss(line);
        getline(ss, text, ' ');
        getline(ss, item, '\n');
        std::cout << "Text: " << text << std::endl;
        std::cout << "Item: " << item << std::endl;
    }


}

int parser2::getID()
{
    openFile();
    if (getline(infile, line))
    {
        std::stringstream ss(line);
        getline(ss, text, ' ');
        getline(ss, item, '\n');
        id = std::stoi(item);
    }
    return id;
}

