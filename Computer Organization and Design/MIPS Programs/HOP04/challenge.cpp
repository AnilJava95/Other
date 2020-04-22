#include <iostream>

int power(int b, int e)
{
	if (e == 1)
		return b;
	else
		return b * power(b, e - 1);
}

int main()
{
	int base = 0;
	int exponent = 0;

	std::cout << "Enter the base: ";
	std::cin >> base;
	std::cout << "Enter the exponent: ";
	std::cin >> exponent;

	std::cout << "The answer of b^e is: " << power(base, exponent);
}
