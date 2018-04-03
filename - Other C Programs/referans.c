//10.04.2014 02:19

#include<stdio.h>
#include<conio.h>
int bolme_islemi( int bolunen, int bolen, int *kalan )
{
	kalan = bolunen % bolen;
	return bolunen / bolen;
}
int main( void )
{
	int bolunen, bolen;
	int bolum, kalan;
	bolunen = 13;
	bolen = 4; 
	bolum = bolme_islemi( bolunen, bolen, &kalan );
	printf( "Bölüm: %d Kalan: %d\n", bolum, kalan );
	
	getch();
	return 0;
}
