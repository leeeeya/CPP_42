//
// Created by Claribel Stefany on 11/20/22.
//

#include "Base.hpp"
#include <random>
#include <iostream>
#include <exception>

Base *generate(){
	srand(time(nullptr));
	int type = rand() % 3;
	switch(type){
		case 0:
		{
			std::cout << "Class A generated\n";
			return new A;
		}
		case 1:
		{
			std::cout << "Class B generated\n";
			return new B;
		}
		case 2:
		{
			std::cout << "Class C generated\n";
			return new C;
		}
	}
	std::cout << "Could not create neither A, nor B, nor C, so catch Base\n";
	return new Base();
}

void identify(Base* p){
		if (dynamic_cast<A *>(p)) {
			std::cout << "Class type is A\n";
		} else if (dynamic_cast<B *>(p)) {
			std::cout << "Class type is B\n";
		} else if (dynamic_cast<C *>(p)) {
			std::cout << "Class type is C\n";
		} else {
			std::cout << "Undefined class type\n";
		}
}

void identify(Base& r){
	try {
		(void)dynamic_cast<A &>(r);
		std::cout << "Class type is A\n";
		return;
	} catch (std::exception&){}

	try {
		(void)dynamic_cast<B &>(r);
		std::cout << "Class type is B\n";
		return;
	} catch (std::exception&){}

	try {
		(void)dynamic_cast<C &>(r);
		std::cout << "Class type is C\n";
		return;
	} catch (std::exception &e){
		std::cout << "Undefined class type\n";
	}
}

int main(){
	Base *inst = generate();
	identify(inst);
	identify(*inst);

	std::cout << std::endl;

	Base *b = new Base();
	identify(b);

	delete inst;
	delete b;
}