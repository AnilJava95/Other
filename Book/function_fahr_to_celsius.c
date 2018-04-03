/*
* Name of the program: function_fahr_to_celsius
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 05/02/2017 04:55. Exercise 1-15. Uses function to calculate the conversions.
* Older versions:
*/

#include <stdio.h>

float fahrenheitToCelsius(float fahr);

int main(void) {

	int lower = 0, upper = 300, step = 20;
	float fahr = lower;

	printf("%3s%6s\n\n", "F", "C");
	while (fahr <= upper)
	{
		printf("%3.0f %6.1f\n", fahr, fahrenheitToCelsius(fahr));
		fahr += step;
	}

	getchar();
	return 0;
}

float fahrenheitToCelsius(float fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
}
