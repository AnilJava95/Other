//29.10.2013 20:29

#include<stdio.h>
#include<conio.h>
int main( void )
{

	int sayi;
	int yazilacak_rakam;

	printf("Sayýyý giriniz> ");
	scanf("%d",&sayi);
	
	printf("Sayýnýn tersi: ");
	while( sayi>10 ) {
		yazilacak_rakam = sayi % 10;
		printf("%d",yazilacak_rakam);
		sayi /= 10;
	}
	printf("%d\n",sayi);

    getch();
	return 0;
}
