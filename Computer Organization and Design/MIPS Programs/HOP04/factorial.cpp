#include <iostream>

int findFactorial(int num)
{
	if (num == 0)
		return 1;
	else
		return num * findFactorial(num - 1);
}

int main()
{
	int x = 6;

	std::cout << "Factorial of x is: " << findFactorial(x);
}
