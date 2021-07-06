#pragma once
class GraphicCard
{
private:
	int m_dRam;

public:
	GraphicCard(int dRam);

	int GetDRam();

	void SetDRam(int dRam);
};
