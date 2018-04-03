//29.10.2013 20:33

#include<stdio.h>
int main( void )
{
	int sayi_1, sayi_2;
	char devam_mi;
	do {
		printf("Birinci sayýyý giriniz> ");
		scanf("%d",&sayi_1);
		printf("Ýkinci sayýyý giriniz> ");
		scanf("%d",&sayi_2);
		printf("%d + %d = %d\n", sayi_1, sayi_2, sayi_1 + sayi_2);
		printf("Devam etmek ister misiniz? ");
		//C'de tek karakter okuma iþlemi biraz sýkýntýlý 
		//olduðundan, burada da bir do while kullandýk.
		do {
			scanf("%c",&devam_mi);
		}while( devam_mi == '\n' );
		printf("\n");
	} while( devam_mi == 'E' || devam_mi == 'e' );

	return 0;
}
