#include "CPU.h"


CPU::CPU(int cores) : m_numberOfCores(cores)
{}

int CPU::GetNumberOfCores()
{
	return m_numberOfCores;
}
void CPU::SetNumberOfCores(int cores)
{
	m_numberOfCores = cores;
}