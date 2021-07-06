#include "Building.h"

Building::Building(std::vector<Room> rooms)
{
	m_rooms = rooms;
}

float Building::CalculateVolume()
{
	float volume = 0;
	for (int i = 0; i < m_rooms.size(); i++)
	{
		volume += m_rooms[i].GetArea() * m_rooms[i].GetHeight();
	}
	return volume;
}

void Building::PrintRoomSize(float size)
{
	std::cout << "The volume of the room of the building is : " << size;
}