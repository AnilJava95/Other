//29.10.2013 20:34

/*
Girilen yaþýn, 18 ile 65 arasýnda
olup olmadýðýný belirler. 
*/

#include <stdio.h>
#include <conio.h>
int main()

{
 float sayi;
 printf("18 ile 65 arasinda bir sayi giriniz>");
 scanf("%f",&sayi);
 if(sayi>18 && sayi<65)
 printf("Girilen sayi 18 ile 65 arasindadir.");
 else
 printf("18 ile 65 arasinda degildir");
 getch();
 getch();
 return 0;
 }
