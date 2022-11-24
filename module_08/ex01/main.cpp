//
// Created by Claribel Stefany on 11/22/22.
//

#include "Span.hpp"

int main(){
	try {
		Span sp(5);
		sp.addNumber(5);
		sp.addNumber(7);
		sp.addNumber(19);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl;

	try{
		std::vector<int> vec;
		srand(time(NULL));
		for (int i = 0; i < 10500; ++i) {
			vec.push_back(rand());
		}

		Span sp(10500);
		sp.addSequence(vec);

//		std::vector<int> forPrint = sp.getNums();
//
//		std::sort(forPrint.begin(), forPrint.end());
//		for (int i = 0; i < (int)forPrint.size(); i++) {
//			if (i != 0) {
//				std::cout << " ";
//			}
//			std::cout << forPrint[i];
//		}
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;

	} catch(std::exception &e){
		std::cout << e.what();
	}

}