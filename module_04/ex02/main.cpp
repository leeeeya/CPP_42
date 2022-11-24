//
// Created by Claribel Stefany on 11/15/22.
//

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal *animal[20];
	int count = 20;
	for (int i = 0; i < count; i++) {
		if (i % 2 == 0) {
			std::cout << i + 1 << std::endl;
			animal[i] = new Cat();
			animal[i]->makeSound();
			std::cout << std::endl;
		} else {
			std::cout << i + 1 << std::endl;
			animal[i] = new Dog();
			animal[i]->makeSound();
			std::cout << std::endl;
		}
	}
	for (int i = 0; i < count; i++) {
		std::cout << i + 1 << std::endl;
		delete (animal[i]);
		std::cout << std::endl;
	}

//	const Animal *meta = new(Animal);
}