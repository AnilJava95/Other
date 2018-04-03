/*
* Name of the program: testing_word_count_program
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 02/02/2017 02:47. Exercise 1-12.  Makes it so there is only one word per row.
* Older versions:
*/

#include<stdio.h>
#include<conio.h>

#define OUTSIDE 0
#define INSIDE 1

int main() {

	int p, c; // p is placement and c is character.

	p = OUTSIDE;

	while ((c= getchar()) != EOF)
	{
		if ((c == ' ' || c == '\t' || c == '\n') && p == INSIDE){
			printf("\n");
			p = OUTSIDE;
		}
		/* else if(c == ' '|| c == '\t' ||c == '\n' && p == OUTSIDE)  // Unnecessary part.
		continue; */
		else if (c != ' ' && c != '\n' && c != '\t')
		{
			printf("%c", c);
			p = INSIDE;
		}
	} 

	getch();
	return 0;
}
