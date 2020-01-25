//29.10.2013 20:34

/*
Kendisine verilen iki tam sayýyla 
bölme iþlemi yapan program.
*/
#include<stdio.h>
#include<conio.h>
int main( void )
{
	int bolunen, bolen;
	float sonuc;
	printf("Bölünen ve böleni gir> ");
	scanf("%d %d",&bolunen, &bolen);


	if( bolen != 0 ) {
		sonuc = (float)bolunen / bolen;
	
		printf("Sonuc: %.2f\n",sonuc); }
	
	else
		printf("Hata: Sayý 0'a bölünemez!\n");
   getch();
   getch();
   return 0;
}
