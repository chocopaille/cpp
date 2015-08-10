#include "../stdheader.h"
#include "class.h"

int main()
{
	Personnage david, goliath("Iron edge", 20);

	goliath.attack(david); //goliath attaque david
	david.heal(20); //david récupère 20 de vie en buvant une potion
	goliath.attack(david); //goliath réattaque david
	david.attack(goliath); //david contre-attaque... c'est assez clair non ?

	goliath.change_weapon("Double hache tranchante vénéneuse de la mort", 40);
	goliath.attack(david);
	return 0;
}
