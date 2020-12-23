#include <iostream>

template<typename T>
void print(T data) {
	std::cout << data << std::endl;
}

int main() {
	print(5);
	print(5.5f);
	print("This is a string");

	return 0;
}

