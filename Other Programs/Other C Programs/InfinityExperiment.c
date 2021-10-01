/*
	Name of the program: Infinity experiment
	Copyright:
	Author: Anýl Ertürk
	E-Mail: anilerturk1@gmail.com
	Date of relase(v1.0): 05.02.16 19:42
	Date's of edits: 
	Description: Mathmaticans always say stuff that doesnt work in real life. This is an example of their fantasy world.
*/

#include<stdio.h>

int main() {
	
	float sayi = 10.0; // Ýkiye bölünecek sayý.
	int sayac = 0; // Döngüde kullanýlacak sayaç.
	
	// Sonsuza kadar bir sayýyýyý ikiye bölüp toplam isimli deðiþkende toplayacak döngü.
	for( sayac = 0; sayac < 25; sayac++ ) {
		sayi = sayi / 2;
		printf( "sayi = %f\n", sayi );
	} // end for
	
	getchar();
	return 0;
} // end main

