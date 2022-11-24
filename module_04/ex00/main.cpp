//
// Created by Claribel Stefany on 11/15/22.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){
	const Animal* meta = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	c->makeSound();
	d->makeSound();
	meta->makeSound();
	delete(meta);
	delete(c);
	delete(d);

	std::cout << std::endl;

	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << wc->getType() << " " << std::endl;
	wc->makeSound();
	wa->makeSound();
	delete(wa);
	delete(wc);
	return 0;
}