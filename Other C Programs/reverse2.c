//10.04.2014 02:00

#include<stdio.h>
#include<conio.h>

int main( void )
{
// Verilen sayýnýn tersini geriye dondurur.
int sayi_tersini_bul( int sayi )
{
	int en_sag_rakam;
	int sonuc = 0;
	while( sayi>0 ) {
		en_sag_rakam = sayi%10;
		sonuc = sonuc * 10 + en_sag_rakam;
		sayi /= 10;
	}
	return sonuc;
}	
  
	}
	
	getch();
	return 0;
}
