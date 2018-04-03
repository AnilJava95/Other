//18.07.2014 14:33

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char kok_iki[] = "1.414213";
	char pi[] = "3.14";
	char tam_bir_sayi[] = "156";
	char hayatin_anlami[] = "42 is the answer";

	printf( "%d\n", atoi( tam_bir_sayi ) );
	printf( "%d\n", atoi( hayatin_anlami ) );
	printf( "%f\n", atof( kok_iki ) );
	printf( "%f\n", atof( pi ) );

    
    getch();
    return 0;
    }
