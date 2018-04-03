/*
*	Name of the program: hash1
*	Copyright:
*	Author: Anýl Ertürk
*	E-Mail: anilerturk1@gmail.com
*	Date of relase(v1.0): 02.03.16
*	Dates of edits:
*	Description of the last version: Hashes the arrayData into arrayTarget. First tried to get the data to its key position if its not empty,
*		then it puts it below it and if thats not empty either it doesnt do anything.
*/

#include<stdio.h>

int hash(int number) {
	return number % 11;
}

int main() {

	int  arrayT[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int data[7] = { 27, 18, 29, 28, 39, 13, 16 };
	int i = 0, j = 0, hashData;

	for (i = 0; i < 7; i++) {
		hashData = hash(data[i]);

		if (arrayT[hashData] == 0) {
			arrayT[hashData] = data[i];

		}

		else{
			j = hashData;

			for (j; j < 12; ++j) {
				if (arrayT[j] == 0) {
					arrayT[j] = data[i];
					break;
				}

			}
		}
	}

	for (i = 0; i < 11; i++)
		printf("%d\n", arrayT[i]);

	getchar();
	return 0;
} // end main
