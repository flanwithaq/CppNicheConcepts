#include <iostream>
#include "Info.h"

void Info::staticFunction() {
	static int temp;
	std::cout << "temp: " << temp << std::endl;
	temp++;
}
