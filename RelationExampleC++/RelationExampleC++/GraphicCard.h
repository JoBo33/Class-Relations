#pragma once
class GraphicCard
{
private:
	int m_dRam;

public:
	GraphicCard(int dRam): m_dRam(dRam)
	{}

	int GetDRam() 
	{
		return m_dRam;
	}

	void SetDRam(int dRam)
	{
		m_dRam = dRam;
	}
};
