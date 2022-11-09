//
// Created by Claribel Stefany on 11/7/22.
//

#include "Zombie.hpp"

int main(){
	int n = 10;

	Zombie *horde = zombieHorde(n, "Jack");

	for (int i = 0; i < n; i++){
		horde[i].announce();
	}
	delete []horde;
}