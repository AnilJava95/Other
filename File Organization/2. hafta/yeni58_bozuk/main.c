#include <stdio.h>

int main ()
{
   FILE *fp;
   char str[50];	
   
   fp = fopen("file.txt", "w+");

   fputs("This is c programming.", fp);
   fputs("\n", fp);
   fputs("This is a system programming language.", fp);
	
	 	if(fp == NULL) 
	   {
	      perror("Error opening file");
	      return(-1);
	   }
        if (fgets(str,50, fp) == NULL) 
        {
        	 puts(str);
		}

   fclose(fp);
   
   return(0);
}

