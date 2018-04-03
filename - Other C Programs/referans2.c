//18.07.2014 14:36

#include <stdio.h>
#include <conio.h>
void swap( int *x, int *y )
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main( void )
{
	int a, b;
	a = 12;
	b = 27;
	printf( "a: %d b: %d\n", a, b );
	// Argumanlarý aktarýrken, baslarina 
	// '&' koyuyoruz. 
	swap(&a, &b);
	printf( "a: %d b: %d\n", a, b );
    
    
    getch();
    return 0;
}

