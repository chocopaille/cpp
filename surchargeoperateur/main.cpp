#include "../stdheader.h"
#include "duree.h"

using namespace std;

int main()
{
	Duree duree1(0, 00, 47), duree2(0, 00,48), duree3;
	duree3.print_estate();
	duree3 = duree1 - duree2;
	duree3.print_estate();


	return (0);
}
