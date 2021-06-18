#pragma once
#include "Quadrangle.h"
#include <iostream>
class Square :
	public Quadrangle
{

public:
	Square(float sideLengthA) : Quadrangle(sideLengthA, sideLengthA, sideLengthA, sideLengthA)
	{}

	float CalculateArea()
	{
		return m_sideLengthA * m_sideLengthA;
	}

	void PrintPerimeter(float perimeter)
	{
		std::cout << "The perimeter of the square is: " << perimeter << "\n";
	}

	void PrintArea(float area)
	{
		std::cout << "The area of the square is: " << area << "\n";
	}
};