#pragma once
#include <iostream>
class Quadrangle
{
public:
	Quadrangle(float sideLengthA,	float sideLengthB, float sideLengthC, float sideLengthD)
		: m_sideLengthA(sideLengthA), m_sideLengthB(sideLengthB), m_sideLengthC(sideLengthC), m_sideLengthD(sideLengthD)
	{}


	virtual float CalculatePerimeter() 
	{
		return  m_sideLengthA +  m_sideLengthB + m_sideLengthC + m_sideLengthD;
	}

	virtual void PrintPerimeter(float perimeter)
	{
		std::cout << "The perimeter of the Quadrangle is: " << perimeter << "\n";
	}
	virtual void PrintArea(float area)
	{
		std::cout << "The Area of the Quadrangle is: " << area << "\n";
	}

protected:
	float m_sideLengthA;
	float m_sideLengthB;
	float m_sideLengthC;
	float m_sideLengthD;
};
