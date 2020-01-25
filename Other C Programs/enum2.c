//18.07.2014 14:34

#include <stdio.h>
#include<conio.h>
int main()
{
    enum pixel_colours {
         red=1,
         blue=2,
         yellow=3
         };
         
    enum pixel_colours pixel;
    pixel=red;
    
    printf("%d red in kodu\n",red);
    
    if(pixel=red)
     printf("red");
    else if(pixel=blue)
     printf("blue");
    else if(pixel=yellow)
     printf("yellow");
    
    
    getch();
    return 0;
    }
