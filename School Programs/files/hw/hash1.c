/*
*	Name:
*	Copyright:
*	Author: Anýl Ertürk
*	E-Mail: anilerturk1@gmail.com
*	Date of relase(v1.0): çalýþana kadar yaptýklarý v0.x ilk çalýþan v1. sonrakiler v1.x v2 gibi
*	Dates of updates and changelog:
*	Description of the last version:
*
*	-Veri isim verme kurallarýna uy.
*	-Her satýrda bir veri tanýmla ve yorum koy.
*	-Yorum ve print kullanarak programý kullanýcý ve yazýlýmcýlara açýkla
*		x'i giriniz, x atanýyor, x atandý gibi.
*	-Kapatma süslü parantezlerine neyin bittiðini söylediðin bir yorum koy.
*	-If else yapýlarýna dikkat et. Gereksiz kullanma yapma.
*	-Bölme iþlemi yaparken cast operatör gerekiyorsa kullanmayý unutma.
*  -For için standart biçim kullan. i = 0, i < range.
*  -Eðer bir deðiþkenin tipini deðiþtirirsen format identifier'leride deðiþtir.
*  -Eðer float bir deðiþken ile iþlem yapýyorsan 4 deðil 4.0 ile çarp etc.
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

