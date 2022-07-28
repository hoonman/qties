#include "text.h"


void Text::setText(int x, int y, int width, int length, int AllignmentFlag, QString text)
{
    this->x = x;
    this->y = y;
    this->length = length;
    this->width = width;
    this->text = text;
    this->AllignmentFlag = AllignmentFlag;
}


void Text::draw(QPaintDevice* device)
{
    painter->begin(device);
    QRect boundingRect(x, y, width, length);
    painter->setPen(getPen());
    painter->setFont(getFont());
    painter->drawText(x, y, width, length, AllignmentFlag, text, &boundingRect);

//drawText(int x, int y, int width, int height, int flags, const QString &text, QRect *boundingRect = nullptr)

    //ID text
    setID(8);
    painter->setFont(QFont("Times", 12, QFont::Bold));
    painter->drawText(QPoint(x + 80, y), "ID: 8");
    painter->save();
    painter->end();

}

// move function
void Text::move(vector<int> dimensions)
{
    x = dimensions[0];
    y = dimensions[1];
}

double Text::perimeter()
{
    return 0;
}

double Text::area()
{
    return 0;
}

