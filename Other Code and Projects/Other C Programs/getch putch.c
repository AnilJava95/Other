//18.09.2014 19:44

#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a character. P programi durdurur.\n");
    do {
      c = getchar();
      putchar(c);
      if(c==10)
      printf("\n %d\n",c);
    } while(c != '0');
    printf("\nEnd of program");
   
    getch();
    return 0; 
}
