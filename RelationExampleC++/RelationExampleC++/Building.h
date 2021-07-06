#pragma once
#include "Room.h";
#include <string>;
#include <iostream>;
#include <vector>;


class Building
{
private:
	int m_numberOfRooms;
	std::vector<Room> m_rooms;

public:
	Building(std::vector<Room> rooms);

	/*void AddRoom(Room room[])
	{ 
		Room* m_room = room;
	}*/

	float CalculateVolume(); 

	void PrintRoomSize(float size);

};

