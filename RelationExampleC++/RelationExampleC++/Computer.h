#pragma once
#include <iostream>
#include "CPU.h"
#include "GraphicCard.h"
class Computer
{
private:
	CPU m_cpu;
	GraphicCard m_graphicCard;

public:
	Computer(CPU cpu, GraphicCard graphicCard) : m_cpu(cpu), m_graphicCard(graphicCard)
	{}

	void PrintCPUCores()
	{
		std::cout << "The CPU of the computer has " << m_cpu.GetNumberOfCores() << " cores \n";
	}

	void PrintDRam()
	{
		std::cout << "The graphic card of the computer has " << m_graphicCard.GetDRam() << " gb dRam \n";
	}
};

