//22.11.15 23:32

    #include<stdio.h>
    #include<conio.h>
    
    int enKucuk(int x, int y , int z)
    {
        if(x < y && x < z)
        	return x;
        if(y < x && y < z)
        	return y;
        if(z < x && z < y)
        	return z;
	}
	
	int enBuyuk(int x, int y, int z)
	{
        if(x > y && x > y)
        	return x;
        if(y > x && y > z)
        	return y;
        if(z > x && z > y)
        	return z;
	}
	
	int enOrtanca(int x, int y, int z)
	{
        if (!(x < y && x < z) && !(x > y && x > z))
        	return x;
        if (!(y > x && y > z) && !(y < x && y < z))
        	return y;
        if (!(z > x && z > y) && !(z < x && z < y))
        	return z;
	}
	
    
     int main()
    {
    	int a,b,c;
    	
    	printf("uc sayi giriniz: ");
    	scanf("%d  %d %d",&a,&b,&c);
    
       printf("girdiğiniz en kucuk sayi %d dir\n",enKucuk(a, b, c));
       printf("girdiginiz en ortanca sayı %d dir\n",enOrtanca(a, b, c));
	   printf("girdiğiniz en buyuk sayi %d dir\n",enBuyuk(a, b, c));
       		
		system("pause");
    	return 0 ;
	}
