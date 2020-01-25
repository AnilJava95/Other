//23.03.2014 03:37

/* 2 sayý alan ve ebob ekoku bulan program. Ebob sayýlarýn ikisinide tam bölen
en küçük tam sayýdýr. Ebobu bulma mantýðý þu. Ýki sayýnýnda, 1 ile küçük sayý
arasýndaki sayýlara 1 den baþlayarak tek tek modunu buluyoruz. Iki modda 0 
olduðu an o sayýyý ebob'a atýyoruz. Ebobu bulduktan sonra ekoku bulacaðýz. Ekok
ise iki sayýnýn tam bölenlerinin çarpýmýdýr. Sayýlarýn ikisinin çarpýmýný 
eboba bölersek ekok kalýr.*/

#include <stdio.h>
#include <conio.h>

int obeb,okek,kucuksayi,sayi1,sayi2,i;

main()
{ 
printf("Iki sayi giriniz.\n");

scanf("%d%d",&sayi1,&sayi2);

if (sayi1<sayi2) 
 kucuksayi=sayi2; 
else 
 kucuksayi=sayi1;

for(i=1;i<=kucuksayi;i++)
 if(sayi1%i==0 && sayi2%i==0)
  obeb=i;
  printf("Obeb %d'dir.\n",obeb);

okek=sayi1*sayi2/obeb;

printf("Okek %d'dir.",okek);

getch();

}
