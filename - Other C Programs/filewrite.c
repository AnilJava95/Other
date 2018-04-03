#include<stdio.h>
#include<conio.h>
main()
   {
   FILE *word;
   char cumle[10];
   int sayi;
   
   word = fopen("filewrite10harf.txt","a");
   strcpy(cumle,"0123456789");
   for (sayi = 1;sayi <= 10;sayi++)
       fprintf(word,"%s karakter no: %d\n",cumle,sayi);
   fclose(word);
   
   system("pause");
}
