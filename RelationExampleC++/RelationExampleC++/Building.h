#pragma once
#include "Room.h";
#include <string>;
#include <iostream>;
class Building
{
private:
	int m_numberOfRooms;
	Room *m_room;

public:
	Building(Room room[]) 
	{		
		 Room* m_room = room;
	}

	void SetRoom(Room room[])
	{ 
		Room* m_room = room;
	}

	float CalculateVolume() {
		float volume = 0;
		for (int i = 0; i < m_numberOfRooms; i++)
		{
			volume += m_room[i].GetArea() * m_room[i].GetHeight();
		}
		return volume;
	}

	void PrintRoomSize(float size)
	{
		std :: cout << "The volume of the room of the building is : " << size;
	}
};

