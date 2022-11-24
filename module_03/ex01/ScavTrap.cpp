//
// Created by Claribel Stefany on 11/14/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "<ScavTrap> Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "<ScavTrap> Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st) {
	std::cout << "<ScavTrap> Copy constructor called" << std::endl;
	*this = st;
}

ScavTrap &ScavTrap::operator=(ScavTrap st) {
	std::cout << "<ScavTrap> Copy assignment operator called" << std::endl;
	if(this != &st){
		this->_name = st._name;
		this->_hitPoints = st._hitPoints;
		this->_energyPoints = st._energyPoints;
		this->_attackDamage = st._attackDamage;
	}
	return *this;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "<ScavTrap> Constructor with parameter called" << std::endl;
}

void ScavTrap::guardGate() {
	if (_hitPoints < 1){
		std::cout << _name << " can't become gate keeper because it's already dead!" << std::endl;
		return;
	}
	std::cout << _name << " is now in Gate keeper mode!" << std::endl;
}

