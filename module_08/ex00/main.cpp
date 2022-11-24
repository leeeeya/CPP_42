//
// Created by Claribel Stefany on 11/22/22.
//

#include "easyfind.hpp"
#include <list>
#include <vector>

int main(){
	std::cout << "LIST\n";
	{
		std::list<int> list;

		for (int i = 0; i < 5; i++) {
			list.push_back(i);
		}

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();

		for (; it != ite; it++) {
			std::cout << *it << std::endl;
		}

		std::cout << std::endl;

		try {
			std::list<int>::iterator res = easyfind(list, 4);
			std::cout << *res;
		} catch (std::exception &e) {
			e.what();
		}

		std::cout << std::endl << std::endl;

		try {
			std::list<int>::iterator res = easyfind(list, 10);
			std::cout << *res;
		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}

	std::cout << std::endl;

	std::cout << "VECTOR\n";
	{
		std::vector<int> vector;

		for (int i = 0; i < 5; i++) {
			vector.push_back(i);
		}

		std::vector<int>::iterator it = vector.begin();
		std::vector<int>::iterator ite = vector.end();

		for (; it != ite; it++) {
			std::cout << *it << std::endl;
		}

		std::cout << std::endl;

		try {
			std::vector<int>::iterator res = easyfind(vector, 4);
			std::cout << *res;
		} catch (std::exception &e) {
			e.what();
		}

		std::cout << std::endl << std::endl;

		try {
			std::vector<int>::iterator res = easyfind(vector, 10);
			std::cout << *res;
		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}

}