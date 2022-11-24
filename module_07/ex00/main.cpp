//
// Created by Claribel Stefany on 11/21/22.
//

#include "whatever.hpp"
#include <iostream>

int main(){
	{
		std::cout << "string\n\n";
		std::string a = "a";
		std::string b = "b";
		std::cout << "before swap:\n";
		std::cout << "a: " << a << ", b: " << b << std::endl;
		swap(a, b);
		std::cout << "after swap:\n";
		std::cout << "a: " << a << ", b: " << b << std::endl << std::endl;

		std::cout << "min: " << t_min(a, b) << std::endl;
		std::cout << "max: " << t_max(a, b) << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "int\n\n";
		int a = 20;
		int b = 1;
		std::cout << "before swap:\n";
		std::cout << "a: " << a << ", b: " << b << std::endl;
		swap(a, b);
		std::cout << "after swap:\n";
		std::cout << "a: " << a << ", b: " << b << std::endl << std::endl;

		std::cout << "min: " << t_min(a, b) << std::endl;
		std::cout << "max: " << t_max(a, b) << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "bool\n\n";
		bool a = true;
		bool b = false;
		std::cout << "before swap:\n";
		std::cout << "a: " << a << ", b: " << b << std::endl;
		swap(a, b);
		std::cout << "after swap:\n";
		std::cout << "a: " << a << ", b: " << b << std::endl << std::endl;

		std::cout << "min: " << t_min(a, b) << std::endl;
		std::cout << "max: " << t_max(a, b) << std::endl;
	}

}