#include <iostream>

int main() {
	int a, b, c, d, e, Prove;
	std::cin >> a >> b >> c >> d >> e;

	a *= a;
	b *= b;
	c *= c;
	d *= d;
	e *= e;
	
	Prove = (a + b + c + d + e) % 10;
	std::cout << Prove << std::endl;
}