//22.03.2014 02:40

#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=1;i<10000000;i++) {
         if (i%2==0)
		printf("%d\n",i);
	}
	getch();
	return 0;
}
