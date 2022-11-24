//
// Created by Claribel Stefany on 11/20/22.
//

#ifndef CPP_42_DATA_HPP
#define CPP_42_DATA_HPP

#include <iostream>

class Data {
private:
	int _num;

public:
	Data();
	~Data();
	Data(int num);

	int getNum() const;
};


#endif //CPP_42_DATA_HPP
