/*
* Name of the program: comparing_to_EOF
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 31/01/2017 23:02. Exercise 1-6. SHow a comparison can only take values of 0 or 1.
* Older versions:
*/

#include <stdio.h>

int main(void) {

	int c = 0, b = 1;
	//printf("%c %c", c, b);

	while (c != -1)
	{
		c = (getchar() != EOF);
		putchar(c);
	}

	getchar();
	return 0;
}