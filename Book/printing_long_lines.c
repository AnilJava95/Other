/*
* Name of the program: printing_long_lines
* Author, Copyright: Anýl Ertürk, -
* E-Mail of author: anilerturk1@gmail.com
* Latest version: 08/02/2017 18:26. Exercise 1-17. Prints lines that are longer than 80 characters.
* Older versions:
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */

	while ((len = getline(line, MAXLINE)) > 0)
		if (len > 5) 
			printf("%s", line);

	getchar();
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i <= lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
