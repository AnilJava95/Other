//10.04.2014 01:59

#include<stdio.h>
#include<conio.h>
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
int main( void )
{
    
  int i=123;
  sayi_tersini_bul(i);
  printf("%d",sonuc);
  
	}
	
	getch();
	return 0;
}
