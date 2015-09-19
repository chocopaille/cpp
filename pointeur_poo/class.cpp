#include "class.h"

Personnage::Personnage() : m_life(100), m_weapon("Rusted sword"), 
m_damage_weapon(10)
{

}
Personnage::Personnage(string weapon_name, int damage_weapon) : m_life(100), m_weapon(weapon_name), 
m_damage_weapon(damage_weapon)
{

}

Personnage::Personnage(int mana, int life) : m_life(life), m_mana(mana), m_weapon("Rusted sword"), m_damage_weapon(10)
{

}

void	Personnage::take_damage(int damage)
{
	m_life -= damage;
	if (m_life < 0)
		m_life = 0;
}

void	Personnage::attack(Personnage &cible)
{
	cible.take_damage(m_damage_weapon);
}

void	Personnage::heal(int potion)
{
	m_life += potion;
	if (m_life > 100)
		m_life = 100;
}

void Personnage::change_weapon(string new_weapon, int damage_weapon)
{
	m_weapon = new_weapon;
	m_damage_weapon = damage_weapon;
}

bool Personnage::alive() const
{
	return (m_life > 0);
}
