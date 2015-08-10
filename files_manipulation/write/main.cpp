#include "../../stdheader.h"

int main()
{
	string const file("file_test");
	ofstream mon_flux(file, ios::app);
	if (mon_flux)
	{
		mon_flux << "jecris lololoolo" << endl << "le c++ c est trop puissant";
	}
	else
		cout << "ERROR while opening: " << file << endl;
	return 0;
}
