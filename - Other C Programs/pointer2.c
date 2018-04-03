//18.07.2014 14:34

#include <stdio.h>
#include <conio.h>
int main()
{
    
int r = 50;
	int *p;
	int **k;
	int ***m;
	printf( "r: %d\n", r );
	p = &r;
	k = &p;
	m = &k;
	***m = 100;
	printf( "r: %d\n*p: %d\n**k: %d\n***m: %d\n", r,*p,**k,***m );
        
    getch();
    return 0;
}
