#pragma once
class CPU
{
private:
	int m_numberOfCores;

public:
	CPU(int cores);

	int GetNumberOfCores();

	void SetNumberOfCores(int cores);
};

