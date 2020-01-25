//22.11.15 23:34

    /*girilen sayý kaç basamaklýdýr
     123
     1
     2
     3 */
     
    #include<stdio.h>
    #include<conio.h>
    
    void basamaklar(int sayi, int basamak)
    {
    	int j, i, temp = sayi;
    	for(i = 1; i <= basamak ; i++)
    	{
    		sayi = temp;	
    		for(j = 0; j < (basamak -i); j++)
    			sayi = sayi/10;
    	printf("%d\n", sayi%10);
    	}
	}
    
    int kacbasamak ( int a)
    {
    	int i=0;
    	while (a!=0)
    	{
    		a=a/10;
    		i++;
		}
		return i;
	}
    
    int main ()
    {
    	int x, i;
    	printf("bir sayi giriniz:");
    	scanf("%d",&x);
    	i = kacbasamak(x);
    	
    	printf("giridiðiniz sayi %d basamaklidir\n", i);
    	printf("girdiðiniz sayýnýn basamaklarý:\n"); 
		basamaklar(x, i);
		
    	system("pause");
    	return 0;
	}
