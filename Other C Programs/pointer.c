//30.05.2014 19:35

#include<stdio.h>
#include<conio.h>

int main( void )
{
	float a, b, c;
	float *p;
	a = 15.4; 
	b = 48.6; 
	p = &a;
	c = b = *p = 151.52;
	printf( "a: %f, b: %f, c: %f\n", a, b, c );
	
	getch();
	return 0;
}
