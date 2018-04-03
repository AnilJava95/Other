//15.20.2014 14:45

/* ex05_47.c Prototyping and Using Functions
 Be carefull to catch out the recursion. Watch call stack to see 
 how the recursion goes on.*/
#include <stdio.h>
#include <stdlib.h>
int mystery( int, int );
   
int main()
{
   int x, y;
   
   printf( "Enter two integers: " );
   scanf( "%d%d", &x, &y );
   printf( "The result is %d\n", mystery( x, y ) );
   system("PAUSE");
   return 0;
}

/* Parameter b must be a positive  
   integer to prevent infinite recursion */
int mystery( int a, int b )
{
   if ( b == 1 )
      return a;
   else
      return a + mystery( a, b - 1 );
}
