//23.03.2014 03:37

/* 2 say� alan ve ebob ekoku bulan program. Ebob say�lar�n ikisinide tam b�len
en k���k tam say�d�r. Ebobu bulma mant��� �u. �ki say�n�nda, 1 ile k���k say�
aras�ndaki say�lara 1 den ba�layarak tek tek modunu buluyoruz. Iki modda 0 
oldu�u an o say�y� ebob'a at�yoruz. Ebobu bulduktan sonra ekoku bulaca��z. Ekok
ise iki say�n�n tam b�lenlerinin �arp�m�d�r. Say�lar�n ikisinin �arp�m�n� 
eboba b�lersek ekok kal�r.*/

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
