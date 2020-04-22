#include <stdio.h>
#include <stdlib.h>
#define length 7

int hash(int n)
{
	return n % 11;
}

int quotient(int n)
{
	return n / 11;
}

int main(int argc, char *argv[])
{
	int memory[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int data[length] = { 27, 18, 29, 28, 39, 13, 16 };
	int i, b;
	int loc;

	for (i = 0; i < length; i++)
	{
		loc = hash(data[i]);
		//printf("%d",loc);
		if (memory[loc] == 0)
			memory[loc] = data[i];
		else
		{
			while (memory[loc] != 0)
			{
				loc = loc + quotient(data[i]);
				//printf("%d",loc);
				if (loc>10)
					loc = loc - 11;
			}
			memory[loc] = data[i];

		}
	}

	printf("Linear Quotient ile memory'e sayilari yerlestirme:");

	for (b = 0; b < 11; b++)
	{
		printf("\n-%d-", memory[b]);
	}

	system("PAUSE");
	return 0;
}


