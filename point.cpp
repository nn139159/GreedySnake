#include "point.h"
#include <iostream>
#include "function.h"

void Point::PrintSquare()
{
	SetCursorPosition(x, y);
	std::cout << "¡½";
}

void Point::PrintCircular()
{
	SetCursorPosition(x, y);
	std::cout << "¡´";
}

void Point::Clear()
{
	SetCursorPosition(x, y);
	std::cout << "  ";
}

void Point::ChangePosition(const int x, const int y)
{
	this->x = x;
	this->y = y;
}