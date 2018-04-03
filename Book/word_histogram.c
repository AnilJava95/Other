/*
* Name of the program: word_histogram
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 02/02/2017 06:38. Exercise 1-13. You can either use current version or you
*    can uncomment mark1s and comment mark2.
* Older versions:
*/

#include <stdio.h>

int main(void) {

	char c;
	//int j;   // mark1
	int i, wordLength = 0;
	int lenghtHistorgram[50] = { 0 };

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (wordLength > 0)
			{
				++lenghtHistorgram[wordLength];
				wordLength = 0;
			}
		}
		else if (c == EOF)
			break;
		else
		{
			++wordLength;
		}
	}

	for (i = 1; i < 50; i++)
	{
		printf("%2d - %3d\n", i, lenghtHistorgram[i]);   // mark 2
		/*printf("%2d - ", i);   // mark1
		for (j = 0; j < lenghtHistorgram[i]; j++)
		{
			printf("*");
		}
		printf("\n");*/
	}

	getchar();
	return 0;
}
