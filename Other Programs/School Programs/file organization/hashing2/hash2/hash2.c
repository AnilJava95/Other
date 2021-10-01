/*
*	Name of the program: hash2
*	Copyright:
*	Author: Anýl Ertürk
*	E-Mail: anilerturk1@gmail.com
*	Date of relase(v1.0): 03.03.16
*	Dates of edits:
*	Description of the last version: Hashes the arrayData into arrayTarget. First tried to get the data to its key position if its not empty,
*		then it puts it below it and if thats not empty either, puts the data above key. If that's not empty either than it doesnt do anything.
*/

#include<stdio.h>

int hash(int number) {
	return number % 11;
}

int main() {

	int  arrayTarget[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int arrayData[8] = { 27, 18, 29, 28, 39, 13, 16, 38 };
	int counter1, counter2, mark1 = 0, hashData;

	for (counter1 = 0; counter1 < 8; counter1++) {
		hashData = hash(arrayData[counter1]);
		mark1 = 0;
		if (arrayTarget[hashData] == 0)
			arrayTarget[hashData] = arrayData[counter1];
		else {
			counter2 = hashData;
			for (counter2; counter2 < 11; ++counter2) {
				if (arrayTarget[counter2] == 0) {
					arrayTarget[counter2] = arrayData[counter1];
					mark1 = 1;
					break;
				}
			}
			if (mark1 == 1)
				continue;
			for (counter2 = 0; counter2 < hashData; counter2++)	{
				if (arrayTarget[counter2] == 0) {
					arrayTarget[counter2] = arrayData[counter1];
					break;
				}
			}
		}
	}
	for (counter1 = 0; counter1 < 11; counter1++)
		printf("%d\n", arrayTarget[counter1]);

	getchar();
	return 0;
} // end main