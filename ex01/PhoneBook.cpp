//
//Created by Claribel Stefany on 11/4/22.
//

#include "PhoneBook.hpp"

 PhoneBook::PhoneBook() {
	 std::cout << "PhoneBook is created" << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << "PhoneBook is destructed" << std::endl;
}


void PhoneBook::_check(const std::string& str) {
	if (str == "\n"){
		std::cout << "ERROR: Invalid input!" << std::endl;
		exit(1);
	}
}

void PhoneBook::_isnum(std::string str) {
	if (!std::all_of(str.begin(), str.end(), isdigit)){
		std::cout << "ERROR: Invalid phone numer!" << std::endl;
		exit(1);
	}
}

void PhoneBook::Add() {
	std::string fn, sn, nn, pn, ds;

	std::cout << "Please, input the information of the new contact" << std::endl;
	std::cout << "First name: ";
	std::cin >> fn;
	_check(fn);
	std::cout << "Second name: ";
	std::cin >> sn;
	_check(sn);
	std::cout << "Nickname: ";
	std::cin >> nn;
	_check(nn);
	std::cout << "Phone number: ";
	std::cin >> pn;
	_isnum(pn);
	std::cout << "Darkest secret: ";
	std::cin >> ds;
	_check(ds);

	contacts[0].setContact(fn, sn, nn, pn, ds);
	if (_i < 8)
		_i++;
	else
		_i = 0;
}

// todo доделать
void PhoneBook::Search() const {
	std::cout.setf(std::ios::right);
	std::cout.width(10);

//	for (int i =0; contacts->_len > i; )
//	std::cout << "12345678" << std::endl;

}

// todo  add makefile

