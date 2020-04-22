//12.01.2015 10:58

#include<stdio.h>
#include<conio.h>
int main ()
{
    int i;
    
    for(i=1;i<13;i++)
    printf("%d  %13.2f\n",i,(float)1/i);
    
    getch();
    return 0;  
}
