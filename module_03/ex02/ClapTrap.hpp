//
// Created by Claribel Stefany on 11/14/22.
//

#ifndef CPP_42_CLAPTRAP_HPP
#define CPP_42_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(ClapTrap const &ct);
	ClapTrap& operator=(ClapTrap ct);

	ClapTrap(const std::string& name);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_42_CLAPTRAP_HPP
