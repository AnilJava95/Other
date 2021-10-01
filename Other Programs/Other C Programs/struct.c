//18.07.2014 14:24

#include<stdio.h>
#include<conio.h>
int main( void )
{
	struct {
		int yil;
		int ay;
		int gun;
	} dogum_gunu;
	
	printf( "Doðum gününüzü " );
	printf( "GG-AA-YYYY olarak giriniz> ");
	scanf( "%d%d%d", 	&dogum_gunu.gun,
				&dogum_gunu.ay,
				&dogum_gunu.yil );
	printf( "Doðum gününüz: " );
	printf( "%d/%d/%d\n",	dogum_gunu.gun,
				dogum_gunu.ay,
				dogum_gunu.yil );
	getch();
	return 0;
}
