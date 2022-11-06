//
// Created by Claribel Stefany on 11/4/22.
//

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

int main(){
	PhoneBook pb;
	std::string action;

	while(true) {
//		action = "";
		std::cout << "Please, choose and write the action you want to take:" << std::endl;
		std::getline(std::cin, action);

		if (action == "ADD") {
			pb.Add();
		} else if (action == "SEARCH")
			pb.Search();
		else if (action == "EXIT"){
			exit(0);
		}
	}
}