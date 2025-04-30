#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	std::cout.precision(10);
	if(b!=0) std::cout << (double)a/(double)b << std::endl;
	return 0;
}