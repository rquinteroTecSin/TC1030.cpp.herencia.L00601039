#pragma once

#include "Shape.hpp"

class Rectangle : public Shape 
{
private:
    int x1;
    int y1;
public:
    Rectangle();
    Rectangle(int, int, int, int);

    int getValueX1();
    int getValueY1();
};