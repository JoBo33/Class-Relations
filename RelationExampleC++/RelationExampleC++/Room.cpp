#include "Room.h"


Room::Room(int area, float height) : m_area(area), m_height(height)
{}

int Room::GetArea()
{
	return m_area;
}

void Room::SetArea(int area)
{
	m_area = area;
}

float Room::GetHeight()
{
	return m_height;
}

void Room::SetHeight(float height)
{
	m_height = height;
}