#include "../../stdheader.h"

int main()
{
	string const file("file_test");
	ifstream mon_flux(file.c_str());

	if (mon_flux)
	{
		mon_flux.seekg(0, ios::end);
		cout << "taille: " << mon_flux.tellg() << endl;
	}
	else
		cout << "ERROR while reading: " << file << endl;
	return 0;
}
