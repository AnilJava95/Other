//29.10.2013 20:22

#include<stdio.h>
#include<conio.h>
int main( void )
{
int i = 0, toplam_deger = 0;
	int n;
	printf("L�tfen n de�erini giriniz> ");
	scanf("%d",&n);
	while( i <= n ) {
		toplam_deger *= i;
		i++;
	}
	printf("Sonu�: %d\n",toplam_deger);
	getch();
	return 0;
}
