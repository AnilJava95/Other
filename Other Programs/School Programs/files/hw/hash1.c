/*
*	Name:
*	Copyright:
*	Author: An�l Ert�rk
*	E-Mail: anilerturk1@gmail.com
*	Date of relase(v1.0): �al��ana kadar yapt�klar� v0.x ilk �al��an v1. sonrakiler v1.x v2 gibi
*	Dates of updates and changelog:
*	Description of the last version:
*
*	-Veri isim verme kurallar�na uy.
*	-Her sat�rda bir veri tan�mla ve yorum koy.
*	-Yorum ve print kullanarak program� kullan�c� ve yaz�l�mc�lara a��kla
*		x'i giriniz, x atan�yor, x atand� gibi.
*	-Kapatma s�sl� parantezlerine neyin bitti�ini s�yledi�in bir yorum koy.
*	-If else yap�lar�na dikkat et. Gereksiz kullanma yapma.
*	-B�lme i�lemi yaparken cast operat�r gerekiyorsa kullanmay� unutma.
*  -For i�in standart bi�im kullan. i = 0, i < range.
*  -E�er bir de�i�kenin tipini de�i�tirirsen format identifier'leride de�i�tir.
*  -E�er float bir de�i�ken ile i�lem yap�yorsan 4 de�il 4.0 ile �arp etc.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int hash(int key) {
	return key % 1000;
}

int main(void) {

	// Creating, opening and testing source data file for reading.
	FILE *fpAir, *fpTest;
	fpAir = fopen("air.txt", "r");
	if (!fpAir) {
		printf("File \"air.txt\" failed to open!\n");
		exit(1);
	}

	// Hashing all records.
	char date[10];
	char time[10];
	char lineSkipper[200];
	int numDate, numTime, hashResult;
	char hashString[10];

	while (!feof(fpAir)) {
		fscanf(fpAir, "%s %s", date, time);

		numDate = atoi(date);
		numTime = atoi(time);

		//TESTING printf("%s %d %s %d\n", date, numDate, time, numTime);

		// Creating a file for all dates(date+time).
		hashResult = hash(numDate + numTime);
		if (hashResult < 0)
			continue;
		sprintf(hashString, "%d.txt", hashResult);
		fpTest = fopen(hashString, "a");
		if (!fpTest) {
			printf("File \"hashString.txt\" failed to open!\n");
			exit(1);
		}

		// Putting needed data into required file.
		//print date and time to the new file
		fputs(date, fpTest);
		//fgets(lineSkipper, 200, fpAir);
		//printf rest of the line to the new file
		fclose(fpTest);
	}

	printf("\n\nTesting end of program\n");




	fclose(fpAir);
	fclose(fpTest);


	//getchar();
	system("pause");
	return 0;
} // end main

