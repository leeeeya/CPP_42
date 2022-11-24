//
// Created by Claribel Stefany on 11/22/22.
//

#ifndef CPP_42_EASYFIND_HPP
#define CPP_42_EASYFIND_HPP

#include <iostream>

template<typename T>
typename T::iterator easyfind(T &cont, int n){
	typename T::iterator search = std::find(cont.begin(), cont.end(), n);
	if (search == cont.end()){
		throw std::invalid_argument("Argument is not found!\n");
	}
	return search;
}

#endif //CPP_42_EASYFIND_HPP
