#include <iostream>

int numberDoubler(int x) {
	return 2 * x;
}

int main() {
	std::cout << "Give me a number and I'll double it: ";

	int a;
	std::cin >> a;

	std::cout << "Doubled your " << a << " and now it's " << numberDoubler(a) << std::endl;

	return 0;
}
