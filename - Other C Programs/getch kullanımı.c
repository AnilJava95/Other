//29.10.2013 20:33

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
	printf("B�l�necek say�y� giriniz> ");
	scanf("%d",&bolunen);
	printf("B�len say�y� giriniz> ");
	scanf("%d",&bolen);
	//Bolen, 0 ise, bir say� s�f�ra b�l�nemeyece�inden, 
	//program sorun ��kartacakt�r. Bu y�zden,
	//bolenin 0 olmamas� kontrol ediliyor.
	if( bolen != 0 ) {
		sonuc = (float)bolunen / bolen;
		//.2f, virg�lden sonra 2 basamak g�sterilmesi 
		//i�indir. 
		printf("Sonuc: %.2f\n",sonuc);
	}
	else
		printf("Hata: Say� 0'a b�l�nemez!\n");

    getch();
    return 0;
  
}
