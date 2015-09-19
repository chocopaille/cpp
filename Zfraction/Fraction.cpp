# include "Fraction.h"

using namespace std;

Fraction::Fraction(int numerator, int denominator) : m_numerator(numerator), m_denominator(denominator)
{

}

Fraction& Fraction::operator*=(Fraction const& b)
{
	m_numerator = m_numerator * b.m_numerator;
	m_denominator = m_denominator * b.m_denominator;

	return (*this);
}

Fraction& Fraction::operator+=(Fraction const& b)
{
	m_numerator = m_numerator * b.m_denominator + b.m_numerator * m_denominator;
	m_denominator = m_denominator * b.m_denominator;
	return (*this);
}

void	Fraction::print_estate(ostream &flux) const
{
	if (m_denominator != 1)
		flux << m_numerator << "/" << m_denominator;
	else
		flux << m_numerator;
}

bool	Fraction::egal(Fraction const& b) const
{
	return (m_numerator / m_denominator == b.m_numerator / b.m_denominator && m_numerator % m_denominator == b.m_numerator % b.m_denominator);
}

bool	Fraction::superior(Fraction const& b) const
{
	if (m_numerator / m_denominator > b.m_numerator / b.m_denominator)
		return (true);
	else if (m_numerator / m_denominator == b.m_numerator / b.m_denominator && m_numerator % m_denominator > b.m_numerator % b.m_denominator)
		return (true);
	else
		return (false);
}

Fraction operator*(Fraction const& a, Fraction const& b)
{
	Fraction result(a);
	result *= b;
	return (result);
}

Fraction operator+(Fraction const& a, Fraction const& b)
{
	Fraction result(a);
	result += b;
	return (result);
}

bool operator==(Fraction const& a, Fraction const& b)
{
	return (a.egal(b));
}

bool operator!=(Fraction const& a, Fraction const& b)
{
	return(!(a == b));
}

bool operator>(Fraction const& a, Fraction const& b)
{
	return (a.superior(b));
}

bool operator<(Fraction const& a, Fraction const& b)
{
	return (!(a > b));
}

bool operator<=(Fraction const& a, Fraction const& b)
{
	return (a == b || a < b);
}

bool operator>=(Fraction const& a, Fraction const& b)
{
	return (a == b || a > b);
}

ostream &operator<<(ostream &flux, Fraction const& a)
{
	a.print_estate(flux);
	return (flux);
}
