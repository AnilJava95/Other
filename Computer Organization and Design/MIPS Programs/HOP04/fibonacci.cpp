#include <iostream>

int fib(int y)
{
	if (y <= 1)
		return y;
	return fib(y - 1) + fib(y - 2);
}

int main()
{
	int n;

	std::cout << "give a number: ";
	std::cin >> n;

	std::cout << fib(n);
}
