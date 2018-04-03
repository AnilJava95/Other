//15.07.2014 12:47

// karenin kenar uzunluðunu ve matrisleri kullanýcýdan alýp iki matrisi çarpan program

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,a,b;
    printf("Karenin kenar uzunlugunu giriniz.");
    scanf("%d",&a);
    int dizi1[a][a];
    int dizi2[a][a];
    int dizi3[100][100]={0};
    
    printf("1. matrisi giriniz");  
    for(i=0;i<a;i++)
    {
     for(j=0;j<a;j++)
         scanf("%d",&dizi1[i][j]);  
             }

     printf("2. matrisin elemanlarini giriniz.");
    for (j=0 ; j<a ; j++)
     for (k=0 ; k<a ; k++)
       scanf("%d",&dizi2[j][k]);
     
    for (i=0 ; i<a ; i++)
     for (k=0 ; k<a ; k++)
      for (j=0 ; j<a ; j++)
        dizi3[i][k] += dizi1[i][j] * dizi2[j][k];
        
    for (i=0 ; i<a ; i++)
     {
       printf("\n");
     for (k=0 ; k<a ; k++)
      printf("Carpimlari= %d %",dizi3[i][k]);
       }
      
    getch();
    return 0;
}
