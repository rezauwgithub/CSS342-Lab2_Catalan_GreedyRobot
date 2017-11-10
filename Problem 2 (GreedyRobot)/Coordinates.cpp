// #include "stdafx.h"
#include "Coordinates.h"

Coordinates::Coordinates()
{
        point.x = 0;
        point.y = 0;
}

Coordinates::Coordinates(int x, int y)
{
	point.x = x;
	point.y = y;
}

Coordinates::~Coordinates()
{
}

int Coordinates::getX() const
{
	return point.x;
}

int Coordinates::getY() const
{
	return point.y;
}

