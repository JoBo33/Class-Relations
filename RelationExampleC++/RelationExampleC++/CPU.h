#pragma once
class CPU
{
private:
	int m_numberOfCores;

public:
	CPU(int cores): m_numberOfCores(cores)
	{}

	int GetNumberOfCores()
	{
		return m_numberOfCores;
	}
	void SetNumberOfCores(int cores)
	{
		m_numberOfCores = cores;
	}
};

