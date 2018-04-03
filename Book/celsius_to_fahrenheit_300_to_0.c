/*
* Name of the program: celsius_to_fahrenheit_300_to_0
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 31/01/2017 04:03. Exercise 1-5. C to F table from 300C to 0C.
* Older versions:
*/

#include <stdio.h>

int main(void) {

	int lower = 0, upper = 300, step = 20;
	float fahr, celsius = upper;

	printf("%3s%6s\n\n", "C", "F");
	while (celsius >= lower)
	{
		fahr = (9.0 / 5.0 * celsius) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius -= step;
	}

	getchar();
	return 0;
}
