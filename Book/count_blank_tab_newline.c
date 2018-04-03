/*
* Name of the program: count_blank_tab_newline
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 01/02/2017. Exercise 1-8. 04:38 Counts those 3 characters.
* Older versions:
*/

#include <stdio.h>

int main(void) {

	char c;
	int blankCounter = 0, tabCounter = 0, newlineCounter = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++blankCounter;
		}
		else if (c == '\t')
		{
			++tabCounter;
		}
		else if (c == '\n')
		{
			++newlineCounter;
		}
	}

	printf("blankCounter:%d, tabCounter: %d, newlineCounter: %d", blankCounter, tabCounter, newlineCounter);

	getchar();
	return 0;
}