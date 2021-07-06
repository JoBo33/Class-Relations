#include "Quadrangle.h"


Quadrangle::Quadrangle(float sideLengthA, float sideLengthB, float sideLengthC, float sideLengthD)
	: m_sideLengthA(sideLengthA), m_sideLengthB(sideLengthB), m_sideLengthC(sideLengthC), m_sideLengthD(sideLengthD)
{}

float Quadrangle::CalculatePerimeter()
{
	return  m_sideLengthA + m_sideLengthB + m_sideLengthC + m_sideLengthD;
}

void Quadrangle::PrintPerimeter(float perimeter)
{
	std::cout << "The perimeter of the Quadrangle is: " << perimeter << "\n";
}
void Quadrangle::PrintArea(float area)
{
	std::cout << "The Area of the Quadrangle is: " << area << "\n";
}