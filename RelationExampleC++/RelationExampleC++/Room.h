#pragma once
class Room
{
private:
	int m_area;
	float m_height;

public:
	Room(){}

	Room(int area, float height) : m_area(area), m_height(height)
	{}

	int GetArea() 
	{ 
		return m_area; 
	}

	void SetArea(int area) 
	{
		m_area = area;
	}

	float GetHeight()
	{
		return m_height;
	}

	void SetHeight(float height)
	{
		m_height = height;
	}
};

