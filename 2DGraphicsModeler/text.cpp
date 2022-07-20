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


void Text::draw(ModelerApp *model)
{
    painter = new QPainter;
    QRect boundingRect(x, y, width, length);
    painter->begin(model);
    painter->setPen(getPen());
    painter->setFont(getFont());
    painter->drawText(x, y, width, length, AllignmentFlag, text, &boundingRect);
    painter->end();
//drawText(int x, int y, int width, int height, int flags, const QString &text, QRect *boundingRect = nullptr)
}
void Text::move(){}
void Text::perimeter() {}
void Text::area() {}

