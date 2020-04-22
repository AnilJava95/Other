//23.11.2015 

#include <stdio.h>

sekil_ciz(int n)
{
	int i, j;
	
	for(i = 1; i <= 2*n-1; i++)
	{
		for(j = 1; j <= 2*n-1; j++)
		{
			if(i == 1 || i == 2*n-1 || 2*n-i == j || i == j || j == 1 || j == 2*n-1)
				printf("*");
			else
				printf(" ");
		}
		if(i != 2*n-1)
			printf("\n");
	}
}

int main()
{
	int n;
	
	printf("n sayisini giriniz>");
	scanf("%d", &n);
	sekil_ciz(n);
	
	exit(0);
}



