/*
 * Name of the program: replace_spaces_with_space
 * Author, Copyright: Anýl Ertürk, -
 * E-Mail of author: anilerturk1@gmail.com
 * Latest version: 01/02/2017 23:48. Exercise 1-9. Replaces multiples spaces in a row with a single space.
 * Older versions:
 */

#include <stdio.h>

int main(void) {

	char c, marker = 0;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
		{
			if (marker == 1)
			{
				printf(" %c", c);
			}
			else
			{
				putchar(c);
			}
			marker = 0;
		}
		else
		{
			marker = 1;
		}
	}

	getchar();
	return 0;
}
