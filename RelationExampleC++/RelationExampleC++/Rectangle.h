#pragma once
#include "Quadrangle.h"
#include <iostream>
class Rectangle :
	public Quadrangle
{

public:
	Rectangle(float sideLengthA, float sideLengthB);

	float CalculateArea();

	void PrintPerimeter(float perimeter);

	void PrintArea(float area);
};

