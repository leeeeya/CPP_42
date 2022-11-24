//
// Created by Claribel Stefany on 11/14/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(0), _energyPoints(0), _attackDamage(0) {
	std::cout << "<ClapTrap> Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "<ClapTrap> Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct) {
	std::cout << "<ClapTrap> Copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap &ClapTrap::operator=(ClapTrap ct) {
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &ct){
		this->_name = ct._name;
		this->_hitPoints = ct._hitPoints;
		this->_energyPoints = ct._energyPoints;
		this->_attackDamage = ct._attackDamage;
	}
	return *this;
}

ClapTrap::ClapTrap(const std::string& name) {
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "<ClapTrap> Constructor with parameter called" << std::endl;
}



void ClapTrap::attack(const std::string &target) {
	if (_hitPoints < 1){
		std::cout << _name << " can't attack because it's dead!" << std::endl;
		return;
	}
	if (_energyPoints < 1){
		std::cout << _name << " can't attack because it has no energy points!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount <= 0){
		std::cout << _name << "can't take negative or zero damage!" << std::endl;
		return;
	}
	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
	_hitPoints -=(int)amount;
	if (_hitPoints <= 0)
		std::cout << _name << " is dead after attack!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {
	if (amount <= 0){
		std::cout << _name << "can't be repaired for negative or zero points!" << std::endl;
		return;
	}
	if (_hitPoints < 1){
		std::cout << _name << " can't be repaired because it's already dead!" << std::endl;
		return;
	}
	if (_energyPoints < 1){
		std::cout <<  _name << " can't be repaired because it has no energy points!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += (int)amount;
	std::cout << _name << " was repaired for " << amount << " points!" << std::endl;
}
