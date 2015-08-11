#ifndef PERSONNAGE_H
# define PERSONNAGE_H
# include "../stdheader.h"
# include "weapon.h"

using namespace std;

class Personnage
{
	public:

	Personnage();
	Personnage(string weapon_name, int damage_weapon);
	Personnage(int mana, int life);
	void	take_damage(int damage);
	void	physical_attack(Personnage &cible);
	void	heal(int potion);
	void	change_weapon(string new_weapon, int damage_weapon);
	bool	alive() const;
	void	print_estate() const;

	private:

	int		m_life;
	int		m_mana;
	Weapon	m_weapon;
};

#endif
