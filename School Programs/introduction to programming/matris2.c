/****************************************
  *         An�l  Ert�rk            *
   *          1358130030           *
*****************************************
    * Program�n �al��ma mant���:  *
                
  Komut ekran�ndan dizinin sat�r(a) ve s�tun(b) de�erlerini ve dizini elemanlar�n� 
  al�r. Bunlar� her olas� �ekilde iki boyutlu array isimli diziye atar ve d�ng�ye sokar.
  Bu d�ng�de dizinin her eleman�n�n baz� �artlar� sa�lay�p sa�lamad���na bak�l�p 
  sonra gerekirse toplama �arpma i�lemi yapar. Marker lar kullan�larak herhangi 
  bir kombinasyon istedi�imiz sonucu getirdimi getirmedimi belirlenir ve gerekli sonu� bas�l�r. 
****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   int main( int argc, char *argv[] )             //                  PART 1 
   {
     int a = atoi(argv[1]); // max row
     int b = atoi(argv[2]); // max column
     int ar[20][20];        // 2D array
     int i,j,k=3,marker=2;  //i for a, j for b, k for argv, marker to mark whole software
     int c1=1, c2=1;        // counter1 and 2 
     clock_t begin;
     double time_spent;
     unsigned int y;
     
     for(i=1; i <= a; i++)  // Assigning arguments to 2D array 
        for(j=1; j <= b; j++) 
        {
           ar[i][j] = atoi(argv[k]);
           k++;
        }
     
     begin = clock();
     for (y=0; 1; y++)
        {
        
        marker=2;
        
        for(i=1; i <= a; i++)   // Testing the array          PART 3 (4 par�adan olu�ur dizinin max s�tun ve sat�r say�s�n�n tek veya �ift olmas�na g�re)
     {
        for(j=1; j <= b; j++) 
        {
           if(b%2==0 & a%2==0) // �ift max sat�r �ift max s�tun
           {
             if(i%2==1 & j%2==0) //tek sat�rlar
             {
               if(i==1) //ilk sat�r
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
               else if(i!=1) //ilk sat�r d���ndaki sat�rlar
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
             else if(i%2==0 & j%2==1)    // �ift sat�rlar 
             {
               if(i != a) // son sat�r d���ndaki sat�rlar
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
               else if(i == a) // son sat�r 
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
             
           else if(b%2==0 & a%2==1) // �ift max s�tun tek max sat�r 
           {
             if(i%2==1 & j%2==0) //tek sat�rlar
             {
               if(i==1) //ilk tek sat�r
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
               else if(i==a) //son tek sat�r 
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
               else  // geri kalan tek sat�rlar
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
             else if(i%2==0 & j%2==1) //�ift sat�rlar 
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
           else if(b%2==1 & a%2==0) // �ift max sat�r tek max s�tun
           {
             if(i%2==1 & j%2==0) //Tek sat�rlar 
             {
               if(i==1) //ilk sat�r
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
               else if(c2%2==1) //di�er tek sat�rlar
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
             else if(i%2==0 & j%2==1) //�ift sat�rlar
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
           else if(b%2==1 & a%2==1) // tek max sat�r tek max s�tun
           {
             if(i%2==1 & j%2==0) // tek sat�rlar 
             {
               if(i==1) //ilk tek sat�r
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
               else if(i==a) // son tek sat�r 
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
               else // ortadaki tek sat�rlar   
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
             else if(j%2==0 & j%2==1) //�ift sat�rlar
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
       
       for (i = 1; i <= a; i++)
       for (j = 1; j <= b; j++)
       {
         int rand_i = rand()%a+1;
         int rand_j = rand()%b+1;     
         int temp = ar[i][j];
         ar[i][j] = ar[rand_i ][rand_j ];
         ar[rand_i ][rand_j ] = temp;
       }
       
       
       
        time_spent = (double)(clock() - begin) / CLOCKS_PER_SEC; // time loop control
        if (time_spent>=1.0)
            break;
        }
     
     if(marker==2)
      printf("ACCEPTABLE\n");
      else if(marker==1)
       printf("NOT MATCH\n");
                                   
     system("PAUSE"); 
     return 0;
   }
   
