#include "../stdheader.h"
#include "duree.h"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures),
m_minutes(minutes), m_secondes(secondes)
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
	if (b.m_heures == m_heures && b.m_minutes == m_minutes &&
	b.m_secondes == m_secondes)
		return (true);
	else
		return (false);
}

bool Duree::inferior(Duree const&b) const
{
	if (m_heures < b.m_heures)
		return (true);
	else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
		return (true);
	else if (m_heures == b.m_heures && m_minutes == b.m_minutes &&
	m_secondes < b.m_secondes)
		return (true);
	else
		return (false);
}

Duree& Duree::operator+=(Duree const& b)
{
	m_secondes += b.m_secondes;
	m_minutes += m_secondes / 60;
	m_secondes %= 60;
	m_minutes += b.m_minutes;
	m_heures += m_minutes / 60;
	m_minutes %= 60;
	m_heures += b.m_heures;
	return (*this);
}

Duree& Duree::operator-=(Duree const& b)
{
	m_secondes = m_heures * 3600 + m_minutes * 60 + m_secondes - (b.m_heures * 3600 + b.m_minutes * 60 + b.m_secondes);
	m_heures = m_secondes / 60;
	m_secondes = m_secondes % 60;
	m_minutes = m_secondes / 60;
	m_secondes = m_secondes % 60;
	return (*this);
}

void Duree::print_estate(std::ostream &flux) const
{
	flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}

bool operator==(Duree const& a, Duree const& b)
{
	return (a.egal(b));
}

bool operator!=(Duree const& a, Duree const& b)
{
	return (!(a == b));
}

bool operator<(Duree const& a, Duree const& b)
{
	return (a.inferior(b));
}

bool operator>(Duree const& a, Duree const& b)
{
	return (!(a < b));
}

bool operator>=(Duree const& a, Duree const& b)
{
	return (a > b || a == b);
}

bool operator<=(Duree const& a, Duree const& b)
{
	return (a < b || a == b);
}

Duree operator+(Duree const& a, Duree const& b)
{
	Duree	result(a);
	result += b;
	return (result);
}

Duree operator-(Duree const& a, Duree const& b)
{
	Duree	result(a);
	result -= b;
	return (result);
}

ostream& operator<<(ostream &flux, Duree const& duree)
{
	duree.print_estate(flux);
	return (flux);
}
