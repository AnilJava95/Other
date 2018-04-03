//29.10.2013 20:33

#include<stdio.h>
#include<conio.h>
int main( void )
{
	int sayi,i;
	int faktoriyel = 1;
	printf("Sayý giriniz> ");
	scanf("%d",&sayi);
	if( sayi > 0 ) {
		for( i = sayi; i > 0; i-- ) {
			faktoriyel *= i;
		}
		printf("Faktoriyel = %d\n",faktoriyel);
	}
	else
		printf("HATA: Sayý 0 yada daha küçük olamaz!\n");
		getch();
	return 0;
}
