/*
* Name of the program: heading_row
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 31/01/2017 02:43. Exercise 1-3. Prints a heading row.
* Older versions:
*/

#include <stdio.h>

int main(void) {
	
	int lower = 0, upper = 300, step = 20;
	float fahr = lower, celsius;
	
	printf("%3s%6s\n\n", "F", "C");
	while(fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
	
	getchar();
	return 0;
}

