//18.07.2014 14:34

#include <stdio.h>
#include <conio.h>
int main()
{
    unsigned besleme;
    scanf("%u",besleme);
    srand(besleme);
    int b=rand();
    printf("%d",b);
    
    getch();
    return 0;
}
