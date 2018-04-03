//29.10.2013 20:29

#include<stdio.h>
#include<conio.h>
int main( void )
{
	int sayi_1, sayi_2;
	char operator_simgesi;
	printf("Lütfen iþlem simgesi giriniz> ");
	scanf("%c",&operator_simgesi);
	printf("Lütfen birinci sayýyý giriniz> ");
	scanf("%d",&sayi_1);
	printf("Lütfen ikinci sayýyý giriniz> ");
	scanf("%d",&sayi_2);
	switch( operator_simgesi ) {
		case '+':
			printf("%d %c %d = %d\n",sayi_1,operator_simgesi, sayi_2, sayi_1 + sayi_2); break;
		case '-': 
			printf("%d %c %d = %d\n",sayi_1,operator_simgesi, sayi_2, sayi_1 - sayi_2); break;
		case '%':
			printf("%d %c %d = %d\n",sayi_1,operator_simgesi, sayi_2, sayi_1 % sayi_2); break;
		case '*':
			printf("%d %c %d = %d\n",sayi_1,operator_simgesi, sayi_2, sayi_1 * sayi_2); break;
		case '/':
			printf("%d %c %d = %.2f\n",sayi_1,operator_simgesi, sayi_2, (float)sayi_1 / sayi_2);break;
		default:
			printf("HATA: Tanýmsýz bir operatör girdiniz!\n");
	}
	getch();
	return 0;
}
