/*
 * Name of the program: prime_factor_brute_force
 * E-Mail of author: 
 * Latest version: Finds prime factors or a number.
 * Older versions: Older versions used arrays to store prime factors and for some reason they were EXTREMELY slow
    You would think they would have the same speed since they have the same C(n) and same looking Cop.
 */

#include <stdio.h>

int main(void) {
	
	long long number, halfTheNumber, primeNumberCounter = 2;
	
	printf("Enter number to find its prime factors(doesnt work for prime numbers)): ");
	scanf("%llu", &number);
	
	halfTheNumber = number / 2;
	for(; primeNumberCounter <= halfTheNumber; primeNumberCounter++)
	{
		while(number % primeNumberCounter == 0)
		{
			number /= primeNumberCounter; // interesting
			printf("%llu ", primeNumberCounter);
		}
	}
	
	getchar();
	return 0;
}

