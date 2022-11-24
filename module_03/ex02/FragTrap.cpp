//
// Created by Claribel Stefany on 11/15/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "<FragTrap> Default constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "<FragTrap> Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft) {
	std::cout << "<FragTrap> Copy constructor called" << std::endl;
	*this = ft;
}

FragTrap &FragTrap::operator=(FragTrap ft) {
	std::cout << "<FragTrap> Copy assignment operator called" << std::endl;
	if(this != &ft){
		this->_name = ft._name;
		this->_hitPoints = ft._hitPoints;
		this->_energyPoints = ft._energyPoints;
		this->_attackDamage = ft._attackDamage;
	}
	return *this;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "<FragTrap> Constructor with parameter called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	if (_hitPoints < 1){
		std::cout << _name << " can't high five because it's already dead! :(" << std::endl;
		return;
	}
	std::cout << _name << " give a HIGH FIVE!" << std::endl;
}
