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
    painter = new QPainter(device);
    QRect boundingRect(x, y, width, length);
    painter->setPen(getPen());
    painter->setFont(getFont());
    painter->drawText(x, y, width, length, AllignmentFlag, text, &boundingRect);
    painter->end();
//drawText(int x, int y, int width, int height, int flags, const QString &text, QRect *boundingRect = nullptr)

    //ID text
    QPainter *idText = new QPainter(device);
    idText->setFont(QFont("Times", 12, QFont::Bold));
    idText->drawText(QPoint(x + 80, y), "ID: 8");
    idText->end();
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

