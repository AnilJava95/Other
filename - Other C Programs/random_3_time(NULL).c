//19.07.2014 14:34

#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       
#include <conio.h>

int main ()
{
  int a;

  
  srand(time(NULL));

  a = rand() % 10 + 1;
  printf("%d",a);
  
  getch();
  return 0;
}
