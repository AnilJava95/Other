#include <stdio.h>
#include <stdlib.h>
#define length 7

int hash(int n)
{
	return n % 11;
}

int main(int argc, char *argv[])
{
	int memory[11][2] = { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } };
	int data[length] = { 27, 18, 29, 28, 39, 13, 16 };
	int i, b;
	int loc;

	for (i = 0; i < length; i++)
	{

		loc = hash(data[i]);
		//printf("%d",loc);
		if (memory[loc][0] == 0)
			memory[loc][0] = data[i];
		else
		{
			memory[loc][1] = data[i];
		}

	}

	for (b = 0; b < 11; b++)
	{
		printf("-%d-", memory[b][0]);
		printf("-%d-\n", memory[b][1]);
	}
	system("PAUSE");
	return 0;
}
