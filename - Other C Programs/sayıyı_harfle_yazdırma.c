//14.07.2014 13:29

/*
Girilen sayýnýn, nasýl okunduðunu ekrana yazdýran programdýr. 
Fonksiyon kullanýmýyla daha efektif olarak yazýlabilir.
Ancak henüz iþlenmeyen bir konu olduðundan, basit bir þekilde 
yazýlmýþtýr.
*/
#include<stdio.h>
#include<conio.h>
int main( void )
{
	int sayi;

	//Klavyeden girilecek sayinin 0 ile 999 sýnýrlarýnda 
	//olup olmadýðý kontrol ediliyor. Eðer deðilse, 
	//uyarý verilip, yeni bir sayý isteniyor. Bu iþlem 
	//doðru bir deðer girilene kadar devam ediyor.

		printf( "Sayýyý giriniz> " );
		scanf("%d",&sayi);
		if( sayi>999 || sayi<0 )
			printf("Girdiðiniz sayý uygun deðildir.\n"
				"0 ile 999 arasýnda olmalýdýr.\n");
		else
			


	printf( "%d sayýsý, '",sayi );

	//Verilen sayýyý, yazýyla ifade edebilmemiz için, 
	//yüzler, onlar ve birler basamaklarýna ayýrmamýz
	//gerekmektedir. 

	//Sayýnýn yüzler basamaðý ayrýþtýrýlýyor.
	//Bunun için sayýyý, 100'e bölmek yeterli.

	//YÜZLER BASAMAÐI:
	switch( sayi/100 ) {
		case 9: printf( "dokuzyüz" ); 	break;
		case 8: printf( "sekizyüz" ); 	break;
		case 7:	printf( "yediyüz" ); 	break;
		case 6: printf( "altýyüz" ); 	break;
		case 5: printf( "beþyüz" ); 	break;
		case 4:	printf( "dörtyüz" ); 	break;
		case 3: printf( "üçyüz" ); 	break;
		case 2: printf( "ikiyüz" ); 	break;
		case 1: printf( "yüz" ); 	break;
	}

	//Onlar basamaðýný bulmak için, sayýnýn 
	//yüze bölümünden kalan deðeri, 10'a 
	//bölüyoruz. Yüzler basamaðýný bir önceki 
	//adýmda ele aldýðýmýz için, bu adýmda, 
	//sayýnýn yüze bölümünü deðil, bölümünden 
	//kalaný kullandýk.

	//ONLAR BASAMAÐI:
	switch ( (sayi%100)/10 ) {	
		case 9: printf( "doksan" ); 	break;
		case 8: printf( "seksen" ); 	break;
		case 7: printf( "yetmiþ" ); 	break;
		case 6: printf( "altmýþ" ); 	break;
		case 5: printf( "elli" ); 	break;
		case 4: printf( "kýrk" ); 	break;
		case 3: printf( "otuz" ); 	break;
		case 2: printf( "yirmi" ); 	break;
		case 1: printf( "on" ); 	break;
	}

	//Birler basamaðýný bulabilmek için, sayýnýn
	//10'a bölümünden kalana bakýyoruz.

	//BÝRLER BASAMAÐI:
	switch ( (sayi%10) ) {	
		case 9: printf( "dokuz" ); 	break;
		case 8: printf( "sekiz" ); 	break;
		case 7: printf( "yedi" ); 	break;
		case 6: printf( "altý" ); 	break;
		case 5: printf( "beþ" );	break;
		case 4: printf( "dört" ); 	break;
		case 3: printf( "üç" ); 	break;
		case 2: printf( "iki" );	break;
		case 1: printf( "bir" );	break;
	}

	//Eðer sayý 0 ise, yukarda ki düzeneðe 
	//uymayacaðýndan, onu ayrýca ele alýyoruz.
	if( sayi == 0 )
		printf( "sýfýr" );

	printf( "' þeklinde okunur.\n" );
	
	getch();
	return 0;
	
}
