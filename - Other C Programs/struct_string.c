//18.10.15 12:43

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct dogum_tarihi
{
	int gun;
	int ay;
	int yil;
};

struct sahis_bilgileri
{
	char isim[40];
	int boy;
	struct dogum_tarihi tarih;
};

int main()
{
	int i;
	
	struct sahis_bilgileri kisi[3] = { "Ali", 170, { 17, 2, 1976 }, 
					"Veli", 178, { 14, 4, 1980 }, 
					"Cenk", 176, { 4, 11, 1983 } };
		
	for( i = 0; i < 3; i++ ) {
		printf( "Kayýt no.: %d\n", ( i + 1 ) );
		printf( "Ad: %s\n", kisi[i].isim );
		printf( "Boy: %d\n", kisi[i].boy );
		printf( "Doðum Tarihi: %d/%d/%d\n\n", kisi[i].tarih.gun, 
						kisi[i].tarih.ay,
						kisi[i].tarih.yil );
	}
	
	system("pause");
}
