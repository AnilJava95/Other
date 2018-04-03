/*
* Name of the program: letter_historgram
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 02/02/2017 22:00. Exercise 1-14. You can use the current version or 
*    you can uncomment the mark1s and comment the mark2.
* Older versions:
*/

#include<stdio.h>

int main() {

	char c;
	unsigned short i;
	//unsigned short j;   // mark1
	int characterHistogram[256] = { 0 };

	while ((c = getchar()) != EOF)
	{
		++characterHistogram[c];
	}

	for (i = 0; i < 256; i++)
	{
		printf("%3hu - %3d\n", i, characterHistogram[i]);   // mark 2
		/*printf("%3d - ", i);   // mark1
		for (j = 0; j < characterHistogram[i]; j++)
		{
			printf("*");
		}
		printf("\n");*/
	}

	getch();
	return 0;
}
