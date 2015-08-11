#ifndef DUREE_H
# define DUREE_H
# include "../stdheader.h"

class Duree
{
	public:
	Duree(int heures = 0, int minutes = 0, int secondes = 0);
	bool egal(Duree const& duree1) const;

	private:

	int m_heures;
	int m_minutes;
	int m_secondes;
};

bool operator==(Duree const& duree1, Duree const& duree2)
bool operator!=(Duree const& duree1, Duree const& duree2);

#endif
