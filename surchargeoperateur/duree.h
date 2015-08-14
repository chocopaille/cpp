#ifndef DUREE_H
# define DUREE_H
# include "../stdheader.h"

using namespace std;

class Duree
{
	public:

	Duree(int heures = 0, int minutes = 0, int secondes = 0);
	bool egal(Duree const& duree1) const;
	bool inferior(Duree const& b) const;
    Duree& operator+=(Duree const& b);
    Duree& operator-=(Duree const& b);
    void print_estate(void) const;

    private:

	int m_heures;
	int m_minutes;
	int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
bool operator>(Duree const& a, Duree const& b);
bool operator>=(Duree const& a, Duree const& b);
bool operator<=(Duree const& a, Duree const& b);
Duree operator+(Duree const& a, Duree const& b);
Duree operator-(Duree const &a, Duree const& b);

#endif
