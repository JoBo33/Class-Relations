#include "Square.h"

Square::Square(float sideLengthA) : Quadrangle(sideLengthA, sideLengthA, sideLengthA, sideLengthA)
{}

float Square::CalculateArea()
{
	return m_sideLengthA * m_sideLengthA;
}

void Square::PrintPerimeter(float perimeter)
{
	std::cout << "The perimeter of the square is: " << perimeter << "\n";
}

void Square::PrintArea(float area)
{
	std::cout << "The area of the square is: " << area << "\n";
}