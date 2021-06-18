// RelationExampleC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Square.h"
#include"Room.h"
#include "Rectangle.h"
#include "Quadrangle.h"
#include "GraphicCard.h"
#include "CPU.h"
#include "Computer.h"
#include "CheckingAccount.h"
#include "Building.h"
#include "BankCustomer.h"


int main()
{
    std::cout << "Inheritance\n";
	Quadrangle quadrangle(5,3,9,6);
	quadrangle.PrintPerimeter(quadrangle.CalculatePerimeter());
	//quadrangle.PrintArea(35);
	Rectangle rectangle(5, 10);
	rectangle.PrintPerimeter(rectangle.CalculatePerimeter());
	rectangle.PrintArea(rectangle.CalculateArea());
	Square square(5);
	square.PrintPerimeter(square.CalculatePerimeter());
	square.PrintArea(square.CalculateArea());
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "Composition\n";
	{
		Room room[4] = { Room(10, 2.5f), Room(10, 2.5f), Room(10, 2.5f), Room(10, 2.5f) };
		Building building(room);

		building.SetRoom(room);
		building.PrintRoomSize(building.CalculateVolume()); 
	}
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "Aggregation\n";
	CPU cpu(8);
	GraphicCard rtx(12);
	{
		Computer com1(cpu, rtx);
		com1.PrintCPUCores();
		com1.PrintDRam(); 
		{
			GraphicCard gtx(6);
			Computer com2(cpu, gtx);
			com2.PrintCPUCores();
			com2.PrintDRam();
		}
	}
	Computer com3(cpu, rtx);
	com3.PrintCPUCores();
	com3.PrintDRam();
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "Association\n";
	CheckingAccount account(1234567);
	BankCustomer customer(7654321);
	customer.FindCheckingAccount(account);

}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
