/*
 *	Name: airData
 *	Copyright: An�l Ert�rk
 *	Author: An�l Ert�rk
 *	E-Mail: anilerturk1@gmail.com
 *	Date of relase(v1.0): 14.05.16 06:59
 *	Dates of updates and changelog:
 *	Description of the last version: Air isimli dosyan�n tarih ve saat
 *		verilerini kullanarak her sat�r i�in bir dosya ve unique dosya
 *		ismi olu�turur.
 *
 *	Yap�lacaklar: 
 *		-39. tag'l� sat�r� sildi�imizde date string'inin
 *		sonuna bir Q karakteri geldi�ini g�r�yoruz.
 *		-Yorumlar ve printler ile bilgilendirmeler artt�r�labilir.
 *		-Data daha verimli kullan�labilir.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

	char date[15];
	char dateTemp[15];
	char time[10];
	char time2[4];
	char data[200];

	// Creating, opening and testing source data file(fpAir) for reading.
	// Creating the test file(fpTest) to use for rest of the files.
	FILE *fpAir, *fpTest;
	fpAir = fopen("air.txt", "r");
	if (!fpAir) {
		printf("File \"air.txt\" failed to open!\n");
		exit(1);
	}

	printf("Files are being created. This may take a while.");

	// Creating a file for all dates(date+time).
	while (!feof(fpAir)) {
		// File name, date, time.
		fscanf(fpAir, "%s %s", date, time);
		strcpy(dateTemp, date);
		strcat(date, "_");
		strncpy(time2, time, 2); //Tag
		strncat(date, time2, 2);
		strcat(date, ".txt");
		
		fpTest = fopen(date, "w");
		if (!fpTest) {
			printf("File \"fpTest.txt\" failed to open!\n");
			exit(1);
		}

		// Rest of the row.
		fgets(data, 200, fpAir);

		// Putting row data into file.
		fputs(dateTemp, fpTest);
		fputs("\t", fpTest);
		fputs(time, fpTest);
		fputs(data, fpTest);
		
		fclose(fpTest);
	}

	fclose(fpAir);
	printf("\n\nEnd of program. Files have been created at source code's directory.\n");

	getchar();
	return 0;
} // end main

