/*
* Name of the program: value_of_EOF_and_NULL
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 01/02/2017 01:55. Exercise 1-7. Prints values of EOF and NULL.
* Older versions:
*/

#include <stdio.h>

int main(void) {

	printf("%c %d\n", EOF, EOF);
	printf("%c %d", NULL, NULL);

	getchar();
	return 0;
}

