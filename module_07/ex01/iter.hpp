//
// Created by Claribel Stefany on 11/21/22.
//

#ifndef CPP_42_ITER_HPP
#define CPP_42_ITER_HPP

#include <iostream>

template <typename T>
void printValue(T value){
	std::cout << value << std::endl;
}

template <typename T>
void iter(T ar[], int len, void func(T t)){
	for(int i = 0; i < len; i++){
		func(ar[i]);
	}
}

#endif //CPP_42_ITER_HPP
