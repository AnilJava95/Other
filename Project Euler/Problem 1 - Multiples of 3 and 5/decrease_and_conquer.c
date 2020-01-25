/*
 *	Name of the program: decrease_and_conquer
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
	
	int sumOfMultiplesOfNumber1 = 0;
	int sumOfMultiplesOfNumber2 = 0;
	int sumOfMultiplesOfProductOfNumbers = 0;
	int sum = 0;
	int forCounter = number1;
	
	// calculating sum of all multiples of number1 between the limits given
	int limit2 = limit / number1 * number1;
	for( ; forCounter <= limit2; forCounter += number1)
	{
		sumOfMultiplesOfNumber1 += forCounter;
	}
	forCounter = number2;
	
	// calculating sum of all multiples of number2 between the limits given
	limit2 = limit / number2 * number2;
	for( ; forCounter <= limit2; forCounter += number2)
	{
		sumOfMultiplesOfNumber2 += forCounter;
	}
	forCounter = number1 * number2;
	
	// calculating sum of all multiples of number1 * number2 between the limits given
	limit2 = limit / (number1 * number2) * (number1 * number2);
	for( ; forCounter <= limit2; forCounter += number1 * number2)
	{
		sumOfMultiplesOfProductOfNumbers += forCounter;
	}
	
	return(sumOfMultiplesOfNumber1 + sumOfMultiplesOfNumber2 - sumOfMultiplesOfProductOfNumbers);
}

