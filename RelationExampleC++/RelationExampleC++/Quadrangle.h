#pragma once
#include <iostream>
class Quadrangle
{
public:
	Quadrangle(float sideLengthA, float sideLengthB, float sideLengthC, float sideLengthD);

	virtual float CalculatePerimeter();

	virtual void PrintPerimeter(float perimeter);

	virtual void PrintArea(float area);

protected:
	float m_sideLengthA;
	float m_sideLengthB;
	float m_sideLengthC;
	float m_sideLengthD;
};
