//14.07.2014 17:50

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   
    unsigned a;
    scanf("%u",&a);
    srand(a);
    int b=rand();
    
    printf("%d",b);
    
    
    getch();
    return 0;
}
