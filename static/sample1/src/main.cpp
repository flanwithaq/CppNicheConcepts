#include <iostream>
#include "Info.h"

int Info::data;

int main() {
	// Calling a function without class object
	for (int i = 0; i < 5; i++)
		Info::staticFunction();
	
	std::cout << "\nChanging the member variable's value" << std::endl;
	// How to change a static member variable without instantiation
	Info::data = 5;
	std::cout << "Info::data: " << Info::data << std::endl;

	return 0;
}
