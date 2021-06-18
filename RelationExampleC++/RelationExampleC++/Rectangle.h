#pragma once
#include "Quadrangle.h"
#include <iostream>
class Rectangle :
	public Quadrangle
{

public:
	Rectangle(float sideLengthA, float sideLengthB) : Quadrangle(sideLengthA,sideLengthB, sideLengthA, sideLengthB)
	{}

	float CalculateArea()
	{
		return m_sideLengthA * m_sideLengthB;
	}

	void PrintPerimeter(float perimeter)
	{
		std::cout << "The perimeter of the rectangle is: " << perimeter << "\n";
	}

	void PrintArea(float area)
	{
		std::cout << "The area of the rectangle is: " << area << "\n";
	}
};

