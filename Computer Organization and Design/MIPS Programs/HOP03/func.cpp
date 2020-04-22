#include <iostream>

void fourth()
{
}

void third()
{
	fourth();
}

void second()
{
	third();
}

void first()
{
	second();
}

int main()
{
	first();

	int x = 20;
	std::cout << x;
}
