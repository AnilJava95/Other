//29.10.2013 20:33

#include<stdio.h>
#include<conio.h>
int main( void )
{
	int sayi,i;
	int faktoriyel = 1;
	printf("Say� giriniz> ");
	scanf("%d",&sayi);
	if( sayi > 0 ) {
		for( i = sayi; i > 0; i-- ) {
			faktoriyel *= i;
		}
		printf("Faktoriyel = %d\n",faktoriyel);
	}
	else
		printf("HATA: Say� 0 yada daha k���k olamaz!\n");
		getch();
	return 0;
}
