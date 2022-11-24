//
// Created by Claribel Stefany on 11/14/22.
//

#include "ClapTrap.hpp"

int main(){
	ClapTrap jim("Jim") ;

	jim.attack("Enemy1");
	jim.takeDamage(5);
	jim.beRepaired(3);

	jim.attack("Enemy2");
	jim.attack("Enemy3");
	jim.attack("Enemy");
	jim.beRepaired(2);
	jim.attack("Enemy4");
	jim.attack("Enemy5");
	jim.takeDamage(3);
	jim.attack("Enemy6");
	jim.attack("Enemy7");
	jim.beRepaired(1);
	jim.attack("Enemy8");
	jim.takeDamage(10);
	jim.attack("Enemy8");
}