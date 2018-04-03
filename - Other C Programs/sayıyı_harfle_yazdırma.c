//14.07.2014 13:29

/*
Girilen say�n�n, nas�l okundu�unu ekrana yazd�ran programd�r. 
Fonksiyon kullan�m�yla daha efektif olarak yaz�labilir.
Ancak hen�z i�lenmeyen bir konu oldu�undan, basit bir �ekilde 
yaz�lm��t�r.
*/
#include<stdio.h>
#include<conio.h>
int main( void )
{
	int sayi;

	//Klavyeden girilecek sayinin 0 ile 999 s�n�rlar�nda 
	//olup olmad��� kontrol ediliyor. E�er de�ilse, 
	//uyar� verilip, yeni bir say� isteniyor. Bu i�lem 
	//do�ru bir de�er girilene kadar devam ediyor.

		printf( "Say�y� giriniz> " );
		scanf("%d",&sayi);
		if( sayi>999 || sayi<0 )
			printf("Girdi�iniz say� uygun de�ildir.\n"
				"0 ile 999 aras�nda olmal�d�r.\n");
		else
			


	printf( "%d say�s�, '",sayi );

	//Verilen say�y�, yaz�yla ifade edebilmemiz i�in, 
	//y�zler, onlar ve birler basamaklar�na ay�rmam�z
	//gerekmektedir. 

	//Say�n�n y�zler basama�� ayr��t�r�l�yor.
	//Bunun i�in say�y�, 100'e b�lmek yeterli.

	//Y�ZLER BASAMA�I:
	switch( sayi/100 ) {
		case 9: printf( "dokuzy�z" ); 	break;
		case 8: printf( "sekizy�z" ); 	break;
		case 7:	printf( "yediy�z" ); 	break;
		case 6: printf( "alt�y�z" ); 	break;
		case 5: printf( "be�y�z" ); 	break;
		case 4:	printf( "d�rty�z" ); 	break;
		case 3: printf( "��y�z" ); 	break;
		case 2: printf( "ikiy�z" ); 	break;
		case 1: printf( "y�z" ); 	break;
	}

	//Onlar basama��n� bulmak i�in, say�n�n 
	//y�ze b�l�m�nden kalan de�eri, 10'a 
	//b�l�yoruz. Y�zler basama��n� bir �nceki 
	//ad�mda ele ald���m�z i�in, bu ad�mda, 
	//say�n�n y�ze b�l�m�n� de�il, b�l�m�nden 
	//kalan� kulland�k.

	//ONLAR BASAMA�I:
	switch ( (sayi%100)/10 ) {	
		case 9: printf( "doksan" ); 	break;
		case 8: printf( "seksen" ); 	break;
		case 7: printf( "yetmi�" ); 	break;
		case 6: printf( "altm��" ); 	break;
		case 5: printf( "elli" ); 	break;
		case 4: printf( "k�rk" ); 	break;
		case 3: printf( "otuz" ); 	break;
		case 2: printf( "yirmi" ); 	break;
		case 1: printf( "on" ); 	break;
	}

	//Birler basama��n� bulabilmek i�in, say�n�n
	//10'a b�l�m�nden kalana bak�yoruz.

	//B�RLER BASAMA�I:
	switch ( (sayi%10) ) {	
		case 9: printf( "dokuz" ); 	break;
		case 8: printf( "sekiz" ); 	break;
		case 7: printf( "yedi" ); 	break;
		case 6: printf( "alt�" ); 	break;
		case 5: printf( "be�" );	break;
		case 4: printf( "d�rt" ); 	break;
		case 3: printf( "��" ); 	break;
		case 2: printf( "iki" );	break;
		case 1: printf( "bir" );	break;
	}

	//E�er say� 0 ise, yukarda ki d�zene�e 
	//uymayaca��ndan, onu ayr�ca ele al�yoruz.
	if( sayi == 0 )
		printf( "s�f�r" );

	printf( "' �eklinde okunur.\n" );
	
	getch();
	return 0;
	
}
