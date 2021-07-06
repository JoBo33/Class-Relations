#include "GraphicCard.h"


GraphicCard::GraphicCard(int dRam) : m_dRam(dRam)
{}

int GraphicCard::GetDRam()
{
	return m_dRam;
}

void GraphicCard::SetDRam(int dRam)
{
	m_dRam = dRam;
}