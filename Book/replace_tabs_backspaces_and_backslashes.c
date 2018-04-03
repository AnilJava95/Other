/*
* Name of the program: replace_tabs_backspaces_and_backslashes
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 02/02/2017 01:16. Exercise 1-10. Replaces the tabs, backspaces and backslashes in text stream with
*    \t, \b and \\.
* Older versions:
*/

#include <stdio.h>

int main(void) {

	char c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\b");
		if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}

	getchar();
	return 0;
}
