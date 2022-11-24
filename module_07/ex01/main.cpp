//
// Created by Claribel Stefany on 11/21/22.
//

#include "iter.hpp"

int main(){
	{
		std::cout << "string\n";
		char s = 'a';
		std::string sArr[10];
		for (int i = 0; i < 10; i++){
			sArr[i] = static_cast<char>(s);
			s++;
		}
		iter(sArr, 10, printValue);
	}
	std::cout << std::endl;
	{
		std::cout << "int\n";
		int sArr[10];
		for (int i = 0; i < 10; i++){
			sArr[i] = i;
		}
		iter(sArr, 10, printValue);
	}
}