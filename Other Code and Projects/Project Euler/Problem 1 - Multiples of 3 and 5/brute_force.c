/*
 *	Name of the program: brute_force
 *	E-Mail: 
 *	Release date of latest version: 
 *	Dates of updates and changelog: 26/11/16 04:13
 *	Description of the last version: 
 */

#include <stdio.h>

int main(void) {
	
	int sum, limit, number1, number2;
	
	printf("Enter limit, smaller number, bigger number: ");
	scanf("%d%d%d", &limit, &number1, &number2);
	sum = find_multiples(limit, number1, number2);
	printf("%d", sum);
	
	return 0;
}

int find_multiples(int limit, int number1, int number2) {
	
	int sum = 0, forCounter = number1;
	
	// calculating sum of all multiples of number1 or number2 between limits
	for( ; forCounter <= limit; forCounter++)
	{
		if(forCounter % number1 == 0 || forCounter % number2 == 0 )
		{
			sum += forCounter;
		}
	}
	
	return(sum);
}
