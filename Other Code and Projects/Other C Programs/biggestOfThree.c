//24.11.15 15:44

#include<stdio.h>
#include<conio.h>
int main( void )
{
	int sayi_1, sayi_2, sayi_3;
	printf("�� say� giriniz> ");
	scanf("%d %d %d", &sayi_1, &sayi_2, &sayi_3);
	if( sayi_1 >= sayi_2 && sayi_1 > sayi_3 )
		printf("%d en b�y�k say�d�r!\n", sayi_1);
	else if( sayi_2 >= sayi_1 && sayi_2 >= sayi_3 )
		printf("%d en b�y�k say�d�r!\n", sayi_2);
	else if( sayi_3 >= sayi_1 && sayi_3 >= sayi_1 )
		printf("%d en b�y�k say�d�r!\n", sayi_3);		
	system("pause");
	return 0;
}
