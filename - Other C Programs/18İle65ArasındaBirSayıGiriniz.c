//29.10.2013 20:34

/*
Girilen ya��n, 18 ile 65 aras�nda
olup olmad���n� belirler. 
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
