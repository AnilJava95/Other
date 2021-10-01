/*
 *	Name of the program: brute_force
 *	E-Mail: 
 *	Release date of latest version: 26/11/16 08:16
 *	Dates of updates and changelog: 
 *	Description of the last version: 
 */

#include <stdio.h>

int main(void) {
	
	int limit, sum;
	
	printf("Enter limit: ");
	scanf("%d", &limit);
	sum = fibonacci(limit);
	printf("\n\nSum: %d", sum);
	
	return 0;
}

int fibonacci(int limit)
{
	int fibonacci0 = 1;
	int fibonacci1 = 2;
	int sum = 0;
	
	while( fibonacci1 < limit)
	{
		if(fibonacci1 % 2 == 0)
		{
			sum += fibonacci1;
			printf("\neven number: %d   sum: %d", fibonacci1, sum);
		}
		
		fibonacci1 += fibonacci0;
		fibonacci0 = fibonacci1 - fibonacci0;
	}
	
	return sum;
}

