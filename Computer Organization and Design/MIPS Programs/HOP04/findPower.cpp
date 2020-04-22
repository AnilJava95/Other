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
	int base = 5;
	int exponent = 3;

	std::cout << "The answer of b^e is: " << power(base, exponent);
}
