#include <iostream>
#include "Info.h"

int main() {
	// Calling a function without class object
	for (int i = 0; i < 5; i++)
		Info::staticFunction();

	return 0;
}
