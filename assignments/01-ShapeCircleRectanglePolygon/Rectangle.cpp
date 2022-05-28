#include "Rectangle.hpp"

Rectangle::Rectangle() : Shape{}
{
    x1 = 0;
    y1 = 0;
}

Rectangle::Rectangle(int valX, int valY, int valX1, int valY1) : Shape{valX, valY}
{
    x1 = valX1;
    y1 = valY1;
}

int Rectangle::getValueX1()
{
    return x1;
}

int Rectangle::getValueY1()
{
    return y1;
}