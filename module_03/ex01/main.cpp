//
// Created by Claribel Stefany on 11/14/22.
//

#include "ScavTrap.hpp"

int main(){
	ScavTrap eve("Eve") ;

	eve.attack("Enemy1");
	eve.takeDamage(50);
	eve.beRepaired(30);
	eve.guardGate();
	eve.attack("Enemy2");
	eve.attack("Enemy3");
	eve.attack("Enemy");
	eve.beRepaired(20);
	eve.attack("Enemy4");
	eve.attack("Enemy5");
	eve.takeDamage(30);
	eve.attack("Enemy6");
	eve.attack("Enemy7");
	eve.beRepaired(10);
	eve.attack("Enemy8");
	eve.takeDamage(100);
	eve.attack("Enemy8");
	eve.guardGate();

}