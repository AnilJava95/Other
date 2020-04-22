//18.07.2014 14:35

/* strncmp example */
#include <stdio.h>
#include <conio.h>
#include <string.h> 
#include <stdlib.h>
 
int main()
{
char string1[20];
  char string2[20];

  strcpy(string1, "Hello");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strncmp( string1, string2, 4));

  strcpy(string1, "Helloooo");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strncmp( string1, string2, 10));

  strcpy(string1, "Hellooo");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strncmp( string1, string2, 20));


    getch();
  return 0;
}
