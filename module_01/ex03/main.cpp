//
// Created by Claribel Stefany on 11/8/22.
//

#include "HumanB.hpp"
#include "HumanA.hpp"


int main(){
	{
		Weapon w1 = Weapon("club");
		HumanA billy("Billy", w1);
		billy.attack();
		w1.setType("other club");
		billy.attack();
	}

std::cout << std::endl;

	{
		Weapon w2 = Weapon("knife");
		HumanB jack("Jack");
		jack.setWeapon(w2);
		jack.attack();
		w2.setType("big club");
		jack.attack();
	}
}