#ifndef CLASS_H
# define CLASS_H
# include "../stdheader.h"

class Personnage
{
	public:

	Personnage();
	Personnage(string weapon_name, int damage_weapon);
	Personnage(int mane, int life);
	void	take_damage(int damage);
	void	attack(Personnage &cible);
	void	heal(int potion);
	void	change_weapon(string new_weapon, int damage_weapon);
	bool alive() const;

	private:

	int		m_life;
	int		m_mana;
	string	m_weapon;
	int		m_damage_weapon;
};

#endif
