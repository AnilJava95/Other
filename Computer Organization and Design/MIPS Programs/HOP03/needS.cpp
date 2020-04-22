#include <iostream>

int subTwo(int a, int b)
{
	int sub = a - b;
	return sub;
}

int doSomething(int x, int y)
{
	int a = subTwo(x, y);
	int b = subTwo(y, x);
	return a + b;
}

int main()
{
	int x = 20;
	int y = 10;
	int val;

	val = doSomething(x, y);

	std::cout << val;
}
