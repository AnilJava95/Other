/*
* Name of the program: celsius_to_fahrenheit
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 31/01/2017 02:50. Exercise 1-4. Transforms F to C table in the book to C to F
* Older versions:
*/

#include <stdio.h>

int main(void) {
	
	int lower = 0, upper = 300, step = 20;
	float fahr, celsius = lower;
	
	printf("%3s%6s\n\n", "C", "F");
	while(celsius <= upper)
	{
		fahr = (9.0 / 5.0 * celsius) + 32;
		printf("%3.0f %6.1f\n",celsius , fahr);
		celsius += step;
	}
	
	getchar();
	return 0;
}

