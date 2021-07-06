#include "Computer.h"


Computer::Computer(CPU cpu, GraphicCard graphicCard) : m_cpu(cpu), m_graphicCard(graphicCard)
{}

void Computer::PrintCPUCores()
{
	std::cout << "The CPU of the computer has " << m_cpu.GetNumberOfCores() << " cores \n";
}

void Computer::PrintDRam()
{
	std::cout << "The graphic card of the computer has " << m_graphicCard.GetDRam() << " gb dRam \n";
}