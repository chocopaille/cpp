#include "personnage.h"

Personnage::Personnage() : m_life(100), m_mana(100)
{

}
Personnage::Personnage(std::string weapon_name, int damage_weapon) : m_life(100), m_mana(100), m_weapon(weapon_name, damage_weapon)
{

}

Personnage::Personnage(int mana, int life) : m_life(life), m_mana(mana)
{

}

void	Personnage::take_damage(int damage)
{
	m_life -= damage;
	if (m_life < 0)
		m_life = 0;
}

void	Personnage::physical_attack(Personnage &cible)
{
	cible.take_damage(m_weapon.get_damage());
}

void	Personnage::heal(int potion)
{
	m_life += potion;
	if (m_life > 100)
		m_life = 100;
}

void Personnage::change_weapon(std::string new_weapon, int damage_weapon)
{
	m_weapon.change_weapon(new_weapon, damage_weapon);
}

bool Personnage::alive() const
{
	return (m_life > 0);
}

void Personnage::print_estate() const
{
	cout << m_life << endl << m_mana << endl;
	m_weapon.print_weapon();
}
