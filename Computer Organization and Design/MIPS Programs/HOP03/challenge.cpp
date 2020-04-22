#include <iostream>

int addTwo(int a, int b)
{
	int add = a + b;
	return add;
}

int doSomething(int x, int y)
{
	int a = addTwo(x, y);
	return a + 10;
}

int main()
{
	int x = 20;
	int y = 10;
	int val;

	val = doSomething(x, y);

	std::cout << val;
}
