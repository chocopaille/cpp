#include "weapon.h"

using namespace std;

Weapon::Weapon() : m_name("Rusted Sword"), m_damage(10)
{

}

Weapon::Weapon(string name, int damage) : m_name(name), m_damage(damage)
{

}

void	Weapon::change_weapon(string name, int damage)
{
	m_name = name;
	m_damage = damage;
}

void	Weapon::print_weapon() const
{
	cout << "Weapon : " << m_name << " (" << m_damage << ")" << endl;
}

int		Weapon::get_damage() const
{
	return m_damage;
}
