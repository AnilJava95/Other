//29.10.2013 20:33

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
	printf("Bölünecek sayýyý giriniz> ");
	scanf("%d",&bolunen);
	printf("Bölen sayýyý giriniz> ");
	scanf("%d",&bolen);
	//Bolen, 0 ise, bir sayý sýfýra bölünemeyeceðinden, 
	//program sorun çýkartacaktýr. Bu yüzden,
	//bolenin 0 olmamasý kontrol ediliyor.
	if( bolen != 0 ) {
		sonuc = (float)bolunen / bolen;
		//.2f, virgülden sonra 2 basamak gösterilmesi 
		//içindir. 
		printf("Sonuc: %.2f\n",sonuc);
	}
	else
		printf("Hata: Sayý 0'a bölünemez!\n");

    getch();
    return 0;
  
}
