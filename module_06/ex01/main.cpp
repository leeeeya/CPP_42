//
// Created by Claribel Stefany on 11/20/22.
//

#include "Data.hpp"

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

int main(){
	Data d(7);

	Data *dataPtr = &d;
	std::cout << "Initial pointer to Data: " << dataPtr << std::endl;
	uintptr_t sptr = serialize(dataPtr);
	std::cout << "Pointer to Data serialized to type uintptr_t: " << sptr << std::endl;
	Data * dsptr = deserialize(sptr);
	std::cout << "Pointer to Data deserialized from type uintptr_t: " << dsptr << std::endl;

	
}