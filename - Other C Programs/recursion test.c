/*
	Name of the program: recursion test
	Copyright:
	Author: Anýl Ertürk
	E-Mail: anilerturk1@gmail.com
	Date of relase:   03.01.16 20:40
	Date's of edits: 
	Description: a test program to do recursive calculation without using certain
		things that are in c like multiplying etc.
*/

#include <stdio.h>

// Takes the number from function1, calculates the result and returns recursively.
int topla (int n) {
	if(n == 1)
		return 3;
	else
		return topla(n-1) + topla(n-1) + topla(n-1);
}

// Takes a number from main and calls function topla to find out what is 3 to the
// power of n 
int function1(int n) {
	return topla(n);
}

int main() {
	int n; // We us this to calculate 3 to the power of n
	
	printf("Enter a number n to find what 3 to the power n is: ");
	scanf("%d", &n);
	function1(n);
	
	getchar();
} // end main

