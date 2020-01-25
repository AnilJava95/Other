/*
 *	Name:
 *	Copyright:
 *	Author: Anýl Ertürk
 *	E-Mail: anilerturk1@gmail.com
 *	Date of relase(v1.0): çalýþana kadar yaptýklarý v0.x ilk çalýþan v1. sonrakiler v1.x v2 gibi
 *	Dates of updates and changelog:
 *	Description of the last version:
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	
	char string[100];
	int c = 0, count[26] = {0};
	
	printf("Enter a string\n");
	gets(string);
	
	while ( string[c] != '\0' ) {
		if (string[c] >= 'a' && string[c] <= 'z') 
			count[string[c]-'a']++;
		c++;
	}
	
	for(c = 0; c < 26; c++) {
		if (count[c] != 0)
			printf("%c occurs %d times in the entered string.\n", c+'a', count[c]);
	}
	
	getchar();
	return 0;
} // end main
