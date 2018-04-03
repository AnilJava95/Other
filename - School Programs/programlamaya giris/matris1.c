/****************************************
  *         Anýl  Ertürk            *
   *          1358130030           *
*****************************************
    * Programýn Çalýþma mantýðý:  *
                
  Komut ekranýndan dizinin satýr(a) ve sütun(b) deðerlerini ve dizini elemanlarýný 
  alýr. Diziyi iki boyutlu array isimli diziye atar. Son olarak dizi döngüye girer.
   Bu döngüde dizinin her elemanýnýn þartlarý saðlayýp saðlamadýðýna 
  bakýlýp sonra gerekirse toplama çarpma iþlemi yapar. Eðer toplama yada çarpma
  istenmeyen sonucu getirirse marker'ý 1 olarak iþaretler. Döngü bittiðinde marker 
  1 ise "NOT MATCH" , 2 (dokunulmamýþ) ise "ACCEPTABLE" ekrana basýlýr.  
****************************************/

#include <stdio.h>
#include <stdlib.h>

   int main( int argc, char *argv[] )             //               PART 1 
   {
     int a = atoi(argv[1]); // max row
     int b = atoi(argv[2]); // max column
     int ar[20][20];        // 2D array
     int i,j,k=3,marker=2;  //i for a, j for b, k for argv, marker to mark whole software
     int c1=1, c2=1;        // counter1 and 2 
     
     for(i=1; i <= a; i++)  // Assigning arguments to 2D array     PART 2
     {
        for(j=1; j <= b; j++) 
        {
           ar[i][j] = atoi(argv[k]);
           k++;
        }
     }
     
     for(i=1; i <= a; i++)   // Testing the array          PART 3 (4 parçadan oluþur dizinin max sütun ve satýr sayýsýnýn tek veya çift olmasýna göre)
     {
        for(j=1; j <= b; j++) 
        {
           if(b%2==0 & a%2==0) // çift max satýr çift max sütun
           {
             if(i%2==1 & j%2==0) //tek satýrlar
             {
               if(i==1) //ilk satýr
               {
                 if(j!=b & c1%2==1)
                 {
                   if(ar[i][j] != ar[i][j-1]+ar[i][j+1]+ar[i+1][j]) 
                   {
                     marker=1;
                     c1++;
                   }
                   else
                     c1++;
                 }
                 else if(j!=b & c1%2==0)
                 {
                   if(ar[i][j] != ar[i][j-1]*ar[i][j+1]*ar[i+1][j])
                   {
                     marker=1;
                     c1++;
                   }
                   else
                     c1++; 
                 }  
                 else if(j==b & c1%2==1)
                 {
                   if(ar[i][j] != ar[i][j-1]+ar[i+1][j])
                   {
                     marker=1;
                     c1++;
                   }
                   else 
                    c1++;
                 }
                 else if(j==b & c1%2==0)
                 {
                   if(ar[i][j] != ar[i][j-1]*ar[i+1][j])
                   {
                     marker=1;
                     c1++;
                   }
                   else
                     c1++;
                 }
               }
               else if(i!=1) //ilk satýr dýþýndaki satýrlar
               {
                 if(j!=b & c1%2==1)
                 {
                   if(ar[i][j] != ar[i+1][j]+ar[i-1][j]+ar[i][j+1]+ar[i][j-1])
                   {
                     marker=1;
                     c1++;        
                   }
                   else 
                     c1++;
                 }  
                 else if(j!=b & c1%2==0)
                 {
                   if(ar[i][j] != ar[i+1][j]*ar[i-1][j]*ar[i][j+1]*ar[i][j-1])    
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;
                 }
                 else if(j==b & c1%2==1)
                 {
                   if(ar[i][j] != ar[i][j-1]+ar[i+1][j])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;
                 }
                 else if(j==b & c1%2==0)
                 {
                   if(ar[i][j] != ar[i][j-1]*ar[i+1][j])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;    
                 }
               }
             }
             else if(i%2==0 & j%2==1)    // çift satýrlar 
             {
               if(i != a) // son satýr dýþýndaki satýrlar
               {
                 if(j==1 & c1%2==1)
                 {
                   if(ar[i][j] != ar[i][j+1]+ar[i+1][j]+ar[i-1][j])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;        
                 }
                 else if(j==1 & c1%2==0)
                 {
                   if(ar[i][j] != ar[i][j+1]*ar[i+1][j]*ar[i-1][j])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;
                 }
                 else if(j != 1 & c1%2==1)
                 {
                   if(ar[i][j] != ar[i][j+1]+ar[i][j-1]+ar[i+1][j]+ar[i-1][j])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;     
                 }
                 else if(j != 1 & c1%2==0)
                 {
                   if(ar[i][j] != ar[i][j+1]*ar[i][j-1]*ar[i+1][j]*ar[i-1][j])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;  
                 }
               }
               else if(i == a) // son satýr 
               {
                 if(j==1 & c1%2==1)
                 {
                   if(ar[i][j] != ar[i-1][j]+ar[i][j+1])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;         
                 }
                 else if(j==1 & c1%2==0)  
                 {
                   if(ar[i][j] != ar[i-1][j]*ar[i][j+1])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;    
                 }
                 else if(j !=1 & c1%2==1)
                 {
                   if(ar[i][j] != ar[i-1][j]+ar[i][j+1]+ar[i][j-1])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;   
                 }
                 else if(j !=1 & c1%2==0)
                 {
                   if(ar[i][j] != ar[i-1][j]*ar[i][j+1]*ar[i][j-1])
                   {
                     marker=1;
                     c1++;   
                   } 
                   else 
                     c1++;   
                 }
               }
             }  
           }
             
           else if(b%2==0 & a%2==1) // çift max sütun tek max satýr 
           {
             if(i%2==1 & j%2==0) //tek satýrlar
             {
               if(i==1) //ilk tek satýr
               {
                if(j==b & c1%2==1)
                {
                  if(ar[i][j] != ar[i][j-1]+ar[i+1][j])
                  {
                   marker = 1;
                   c1++;
                  } 
                  else 
                   c1++;        
                }
                else if(j==b & c1%2==0)
                {
                  if(ar[i][j] != ar[i][j-1]*ar[i+1][j])
                  {
                    marker = 1;
                    c1++;   
                  } 
                  else 
                    c1++;       
                }
                else if(j != b & c1%2==1)
                {
                  if(ar[i][j] != ar[i][j-1]+ar[i][j+1]+ar[i+1][j])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;      
                }
                else if(j != b & c1%2==0)
                {
                  if(ar[i][j] != ar[i][j-1]*ar[i][j+1]*ar[i+1][j])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;      
                }
                       
               }
               else if(i==a) //son tek satýr 
               {
                 if(j==b & c1%2==1)
                {
                  if(ar[i][j] != ar[i][j-1]+ar[i-1][j])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;      
                }
                else if(j==b & c1%2==0)
                {
                  if(ar[i][j] != ar[i][j-1]*ar[i-1][j])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;      
                }
                else if(j != b & c1%2==1)
                {
                  if(ar[i][j] != ar[i][j-1]+ar[i][j+1]+ar[i-1][j])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;      
                }
                else if(j != b & c1%2==0)
                {
                  if(ar[i][j] != ar[i][j-1]*ar[i][j+1]*ar[i-1][j])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;       
                }    
               }
               else  // geri kalan tek satýrlar
               {
                 if(j==b & c1%2==1)
                {
                  if(ar[i][j] != ar[i][j-1]+ar[i-1][j]+ar[i][j+1])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;       
                }
                else if(j==b & c1%2==0)
                {
                  if(ar[i][j] != ar[i][j-1]*ar[i-1][j]*ar[i][j+1])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;      
                }
                else if(j != b & c1%2==1)
                {
                  if(ar[i][j] != ar[i][j-1]+ar[i-1][j]+ar[i+1][j]+ar[i][j+1])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;      
                }
                else if(j != b & c1%2==0)
                {
                  if(ar[i][j] != ar[i][j-1]*ar[i-1][j]*ar[i+1][j]*ar[i][j+1])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;       
                }
               }           
             }
             else if(i%2==0 & j%2==1) //çift satýrlar 
             {
               if(j==1 & c1%2==1)
               {
                 if(ar[i][j] != ar[i-1][j]+ar[i+1][j]+ar[i][j+1])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;
               }
               else if(j==1 & c1%2==0)
               {
                 if(ar[i][j] != ar[i-1][j]*ar[i+1][j]*ar[i][j+1])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;
               }
               else if(j != 1 & c1%2==1)
               {
                 if(ar[i][j] != ar[i-1][j]+ar[i+1][j]+ar[i][j+1]+ar[i][j-1])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;
               }     
               else if(j != 1 & c1%2==0)
               {
                 if(ar[i][j] != ar[i-1][j]*ar[i+1][j]*ar[i][j+1]*ar[i][j-1])
                 {
                   marker=1;
                   c1++;   
                 } 
                 else 
                   c1++;
               } 
             }
           }
           else if(b%2==1 & a%2==0) // çift max satýr tek max sütun
           {
             if(i%2==1 & j%2==0) //Tek satýrlar 
             {
               if(i==1) //ilk satýr
               { 
                 if(c2%2==1)
                 {
                   if(ar[i][j] != ar[i][j-1]+ar[i][j+1]+ar[i+1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;           
                 }
                 else if(c2%2==0)
                 {
                   if(ar[i][j] != ar[i][j-1]*ar[i][j+1]*ar[i+1][j])
                     {
                       marker=1;
                       c2++;   
                     } 
                     else 
                       c2++;    
                 }
               }
               else if(c2%2==1) //diðer tek satýrlar
               {
                 if(ar[i][j] != ar[i][j-1]+ar[i][j+1]+ar[i+1][j]+ar[i-1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;   
               }
               else if(c2%2==0)
               {
                 if(ar[i][j] != ar[i][j-1]*ar[i][j+1]*ar[i+1][j]*ar[i-1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;
               }
             }
             else if(i%2==0 & j%2==1) //çift satýrlar
             {
               if(i==a)
               {
                 if(j==1 & c2%2==1)
                 {
                   if(ar[i][j] != ar[i-1][j]+ar[i][j+1])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;       
                 }
                 else if( j==1 & c2%2==0)
                 {
                   if(ar[i][j] != ar[i-1][j]*ar[i][j+1])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;   
                 }
                 else if(j==b & c2%2==1)
                 {
                   if(ar[i][j] != ar[i-1][j]+ar[i][j-1])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;   
                 }
                 else if(j==b & c2%2==0)
                 {
                   if(ar[i][j] != ar[i-1][j]*ar[i][j-1])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;    
                 }
                 else if(c2%2==1)
                 {
                   if(ar[i][j] != ar[i][j+1]+ar[i][j-1]+ar[i-1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;
                 }
                 else if(c2%2==0)
                 {
                   if(ar[i][j] != ar[i][j+1]*ar[i][j-1]*ar[i-1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;
                 }      
               }
               else 
               {
                 if(j==1 & c2%2==1)
                 {
                   if(ar[i][j] != ar[i-1][j]+ar[i][j+1]+ar[i+1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;        
                 }
                 else if( j==1 & c2%2==0)
                 {
                   if(ar[i][j] != ar[i-1][j]*ar[i][j+1]*ar[i+1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;    
                 }
                 else if(j==b & c2%2==1)
                 {
                   if(ar[i][j] != ar[i-1][j]+ar[i][j-1]+ar[i+1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;   
                 }
                 else if(j==b & c2%2==0)
                 {
                   if(ar[i][j] != ar[i-1][j]*ar[i][j-1]*ar[i+1][j])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;   
                 }
                 else if(c2%2==1)
                 {
                   if(ar[i][j] != ar[i-1][j]+ar[i][j+1]+ar[i+1][j]+ar[i][j-1])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++; 
                 }
                 else if(c2%2==0)
                 {
                   if(ar[i][j] != ar[i-1][j]*ar[i][j+1]*ar[i+1][j]*ar[i][j-1])
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++; 
                 }
               }
             }
           }
           else if(b%2==1 & a%2==1) // tek max satýr tek max sütun
           {
             if(i%2==1 & j%2==0) // tek satýrlar 
             {
               if(i==1) //ilk tek satýr
               {
                 if(c2%2==1)
                 {
                   if(ar[i][j] != ar[i][j-1]+ar[i][j+1]+ar[i+1][j]) 
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++; 
                 }
                 else if(c2%2==0)
                 {if(ar[i][j] != ar[i][j-1]*ar[i][j+1]*ar[i+1][j]) 
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++; 
                   }  
               }
               else if(i==a) // son tek satýr 
               {
                  if(c2%2==1)
                  {
                    if(ar[i][j] != ar[i][j-1]+ar[i][j+1]+ar[i-1][j]) 
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++; 
                  }
                  else if(c2%2==0)
                  {
                    if(ar[i][j] != ar[i][j-1]*ar[i][j+1]*ar[i-1][j]) 
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;   
                  }  
               }
               else // ortadaki tek satýrlar   
               {
                 if(c2%2==1)
                 {
                   if(ar[i][j] != ar[i][j-1]+ar[i][j+1]+ar[i+1][j]+ar[i-1][j]) 
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++; 
                 }
                 else if(c2%2==0)  
                 {
                   if(ar[i][j] != ar[i][j-1]*ar[i][j+1]*ar[i+1][j]*ar[i-1][j]) 
                   {
                     marker=1;
                     c2++;   
                   } 
                   else 
                     c2++;    
                 }    
               }
             }
             else if(j%2==0 & j%2==1) //çift satýrlar
             {
               if(j==1 & c2%2==1)
               {
                 if(ar[i][j] != ar[i-1][j]+ar[i+1][j]+ar[i][j+1]) 
                 {
                   marker=1;
                   c2++;   
                 } 
                 else 
                   c2++;     
               } 
               if(j==1 & c2%2==0)
               {
                 if(ar[i][j] != ar[i-1][j]*ar[i+1][j]*ar[i][j+1]) 
                 {
                   marker=1;
                   c2++;   
                 } 
                 else 
                   c2++;       
               }   
               if(j==a & c2%2==1)
               {
                 if(ar[i][j] != ar[i-1][j]+ar[i+1][j]+ar[i][j-1]) 
                 {
                   marker=1;
                   c2++;   
                 } 
                 else 
                   c2++;        
               } 
               if(j==a & c2%2==0)
               {
                  if(ar[i][j] != ar[i-1][j]*ar[i+1][j]*ar[i][j-1]) 
                 {
                   marker=1;
                   c2++;   
                 } 
                 else 
                   c2++;      
               } 
               else if( c2%2==1)
               {
                 if(ar[i][j] != ar[i-1][j]+ar[i+1][j]+ar[i][j-1]+ar[i][j+1]) 
                 {
                   marker=1;
                   c2++;   
                 } 
                 else 
                   c2++;    
               }
               else if( c2%2==0)
               {
                  if(ar[i][j] != ar[i-1][j]*ar[i+1][j]*ar[i][j-1]*ar[i][j+1]) 
                 {
                   marker=1;
                   c2++;   
                 } 
                 else 
                   c2++;  
               }
             }   
           }
        }
       }
     if(marker==2)
      printf("ACCEPTABLE\n");
      else if(marker==1)
       printf("NOT MATCH\n");
                                   
     system("PAUSE"); 
     return 0;
   }
