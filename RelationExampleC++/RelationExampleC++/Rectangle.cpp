#include "Rectangle.h"

Rectangle::Rectangle(float sideLengthA, float sideLengthB) : Quadrangle(sideLengthA, sideLengthB, sideLengthA, sideLengthB)
{}

float Rectangle::CalculateArea()
{
	return m_sideLengthA * m_sideLengthB;
}

void Rectangle::PrintPerimeter(float perimeter)
{
	std::cout << "The perimeter of the rectangle is: " << perimeter << "\n";
}

void Rectangle::PrintArea(float area)
{
	std::cout << "The area of the rectangle is: " << area << "\n";
}