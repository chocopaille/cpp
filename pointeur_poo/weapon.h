#ifndef WEAPON_H
# define WEAPON_H
# include "../stdheader.h"

class Weapon
{
	public:

	Weapon();
	Weapon(std::string name, int damage);
	void	change_weapon(std::string name, int damage);
	void	print_weapon() const;
	int		get_damage() const;

	private:

	std::string	m_name;
	int			m_damage;
};

#endif
