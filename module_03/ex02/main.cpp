//
// Created by Claribel Stefany on 11/14/22.
//

#include "FragTrap.hpp"

int main(){
	FragTrap brick("Brick") ;

	brick.attack("Enemy1");
	brick.takeDamage(50);
	brick.beRepaired(30);
	brick.attack("Enemy2");
	brick.attack("Enemy3");
	brick.attack("Enemy");
	brick.beRepaired(20);
	brick.highFivesGuys();
	brick.attack("Enemy4");
	brick.attack("Enemy5");
	brick.takeDamage(30);
	brick.attack("Enemy6");
	brick.attack("Enemy7");
	brick.beRepaired(10);
	brick.attack("Enemy8");
	brick.takeDamage(100);
	brick.attack("Enemy8");
	brick.highFivesGuys();
}