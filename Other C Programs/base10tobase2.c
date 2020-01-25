//08.10.2015 21:08

#include<stdio.h>
#include<conio.h>

void ikilik(int x)
{
int i,k[30];
i=0;
while(x>=1)
{
i++;
k[i]=x%2;
x=x/2;
}

printf("\nIkilik taban karsiligi:");
for(i=i;i>0;i--)
printf("%d",k[i]);
}

int main()
{
  int a;
  printf("Bir sayi giriniz:");
  scanf("%d",&a);
  ikilik(a);

getch();
return (0);
}
