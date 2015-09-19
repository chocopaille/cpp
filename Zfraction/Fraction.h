#ifndef FRACTION_H
# define FRACTION_H
# include "../stdheader.h"

class Fraction
{
	public:

	Fraction(int numerator = 0, int denominator = 1);
	//Fraction& operator+=(Fraction const& b);
	void	print_estate(std::ostream &flux) const;
	bool	egal(Fraction const& b) const;
	bool	superior(Fraction const& b) const;
	Fraction& operator*=(Fraction const& b);
	Fraction& operator+=(Fraction const& b);

	private:

	int		m_numerator;
	int		m_denominator;
};

Fraction operator*(Fraction const&a, Fraction const& b);
Fraction operator+(Fraction const& a, Fraction const& b);
bool operator==(Fraction const&a, Fraction const& b);
bool operator!=(Fraction const&a, Fraction const& b);
bool operator>(Fraction const&a, Fraction const& b);
bool operator>=(Fraction const&a, Fraction const& b);
bool operator<=(Fraction const&a, Fraction const& b);
bool operator<(Fraction const&a, Fraction const& b);
std::ostream &operator<<(std::ostream &flux, Fraction const& a);

#endif
