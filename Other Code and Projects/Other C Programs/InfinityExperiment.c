/*
	Name of the program: Infinity experiment
	Copyright:
	Author: An�l Ert�rk
	E-Mail: anilerturk1@gmail.com
	Date of relase(v1.0): 05.02.16 19:42
	Date's of edits: 
	Description: Mathmaticans always say stuff that doesnt work in real life. This is an example of their fantasy world.
*/

#include<stdio.h>

int main() {
	
	float sayi = 10.0; // �kiye b�l�necek say�.
	int sayac = 0; // D�ng�de kullan�lacak saya�.
	
	// Sonsuza kadar bir say�y�y� ikiye b�l�p toplam isimli de�i�kende toplayacak d�ng�.
	for( sayac = 0; sayac < 25; sayac++ ) {
		sayi = sayi / 2;
		printf( "sayi = %f\n", sayi );
	} // end for
	
	getchar();
	return 0;
} // end main

