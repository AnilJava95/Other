//15.10.2014 14:27

/* ex03_29.c   While Loop Example*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int count = 1;

   while ( count <= 10 ) {
      printf( "%s\n", count % 2 ? "****" : "++++++++" ); /* count %2 ikinin 
      katýmý deðilmi anlamýna gelir  */
      ++count;
   }

   system("PAUSE"); 
   return 0;
}
