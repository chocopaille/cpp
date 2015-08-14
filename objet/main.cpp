#include "../stdheader.h"
#include "personnage.h"
#include "weapon.h"

using namespace std;

int main()
{
	Personnage david, goliath("Iron edge", 20);

	goliath.physical_attack(david);
	david.heal(20);
	goliath.physical_attack(david);
	david.physical_attack(goliath);
	goliath.change_weapon("Double hache tranchante vénéneuse de la mort", 40);
	goliath.physical_attack(david);

	cout << "goliath" << endl;
	goliath.print_estate();
	cout << "david" << endl;
	david.print_estate();

	return 0;
}
