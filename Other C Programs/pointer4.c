//25.03.2015 09:44

#include<stdio.h>
#include<conio.h>
main() 
{
   char ch = 'c';
   char *chptr = &ch; 

   int i = 20;
   int *intptr = &i; 

   float f = 1.20000;
   float *fptr = &f; 

   char *ptr = "Ben bir stringim"; 

    printf("\n [%c], [%d], [%f], [%c], [%s]\n", *chptr, *intptr, *fptr, *ptr, ptr);
   
   getch();
   return 0;
}
