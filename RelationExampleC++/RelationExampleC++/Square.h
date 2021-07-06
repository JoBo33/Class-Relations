#pragma once
#include "Quadrangle.h"
#include <iostream>
class Square :
	public Quadrangle
{

public:
	Square(float sideLengthA);

	float CalculateArea();

	void PrintPerimeter(float perimeter);

	void PrintArea(float area);
};