#pragma once
class Room
{
private:
	int m_area;
	float m_height;

public:
	Room(){}

	Room(int area, float height);

	int GetArea();

	void SetArea(int area);

	float GetHeight();

	void SetHeight(float height);
};

