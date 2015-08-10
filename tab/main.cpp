#include "../stdheader.h"

double	moyenne(double *notes, int taille);

int		main()
{
	//string	tab[10];
	int const	range_notes(6);
	double		notes[range_notes], k;

	notes[0] = 12.5;
	notes[1] = 19.5;  //Bieeeen !
	notes[2] = 6.;    //Pas bien !
	notes[3] = 12;
	notes[4] = 14.5;
	notes[5] = 15;

	k = moyenne(notes, range_notes);
	cout << k;
	return 0;
}

double	moyenne(double *notes, int taille)
{
	double		moyenne = 0;
	int i;

	for (i = 0; i < taille; i++)
	{
		moyenne += notes[i];
	}
	moyenne /= i;
	return moyenne;
}
