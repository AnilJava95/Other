//29.10.2013 20:34

/*
Kendisine verilen iki tam say�yla 
b�lme i�lemi yapan program.
*/
#include<stdio.h>
#include<conio.h>
int main( void )
{
	int bolunen, bolen;
	float sonuc;
	printf("B�l�nen ve b�leni gir> ");
	scanf("%d %d",&bolunen, &bolen);


	if( bolen != 0 ) {
		sonuc = (float)bolunen / bolen;
	
		printf("Sonuc: %.2f\n",sonuc); }
	
	else
		printf("Hata: Say� 0'a b�l�nemez!\n");
   getch();
   getch();
   return 0;
}
