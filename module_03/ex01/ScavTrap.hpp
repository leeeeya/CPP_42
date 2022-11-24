//
// Created by Claribel Stefany on 11/14/22.
//

#ifndef CPP_42_SCAVTRAP_HPP
#define CPP_42_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap const &st);
	ScavTrap& operator=(ScavTrap st);

	ScavTrap(const std::string& name);

	void guardGate();
};


#endif //CPP_42_SCAVTRAP_HPP
