#include "../stdheader.h"
#include "duree.h"

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
	while (m_secondes >= 60)
	{
		m_secondes -= 60;
		m_minutes++;
	}
	while (m_minutes >= 60)
	{
		m_minutes -= 60;
		m_heures++;
	}
}

bool Duree::egal(Duree const& b) const
{
	return (b.m_heures == m_heures && b.m_minutes == m_minutes && b.m_secondes == m_secondes);
}

bool operator==(Duree const& a, Duree const& b)
{
	return (a.egal(b));
}

bool operator!=(Duree const& a, Duree const& b)
{
	return (!(a == b));
}
