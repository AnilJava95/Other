//29.10.2013 20:32

#include<stdio.h>
#include<conio.h>
int main( void )
{
	int i=0,j;
	while( i < 5 ) {
		j = 0;
		while( j < i+1 ) {
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
	return 0;
}
