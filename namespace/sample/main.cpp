#include <iostream>

namespace A {
	void print() {
		std::cout << "This is coming from namespace A" << std::endl;
	}
}

namespace B {
	void print() {
		std::cout << "This is coming from namespace B" << std::endl;
	}
}

using namespace A;

int main() {
	print();
	B::print();
	
	return 0;
}

