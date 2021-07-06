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
	Computer(CPU cpu, GraphicCard graphicCard);

	void PrintCPUCores();

	void PrintDRam();
};

