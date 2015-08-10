#include "../stdheader.h"

double	moyenne(vector<double> &notes, int taille)
{
	double moyenne = 0;
	int i;

	for (i = 0; i < taille; i++)
	{
		moyenne += notes[i];
	}
	moyenne /= i;
	return moyenne;
}

int main()
{
	vector<double>	notes;
	double			k;

	notes.push_back(12.5);
	notes.push_back(19.5);
	notes.push_back(6);
	notes.push_back(12);
	notes.push_back(14.5);
	notes.push_back(15);

	k = moyenne(notes, notes.size());
	cout << k;
	return 0;
}
