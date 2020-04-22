#include <stdio.h>

int main ()
{
   FILE *fp;
   char str[60];	
   
   fp = fopen("file.txt", "wr");

   fputs("This is c programming.", fp);
   fputs("\n", fp);
   fputs("This is a system programming language.", fp);
	fclose(fp);
	
	fp = fopen("file.txt" , "r");
	
 	if(fp == NULL) 
   {
      perror("Error opening file");
      return(-1);
   }
   while (1) {
        if (fgets(str,50, fp) == NULL) break;
         puts(str);
		 //printf("%3d: %s", i, line);
	}

   fclose(fp);
   
   return(0);
}

