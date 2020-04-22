//09.10.15 09:46

/*
  Name: SuperAwesomeNumbers
  Copyright: 
  Author: Anil Erturk
  E-Mail: anilerturk1@gmail.com
  Date: 09.10.15 08:38
  Description: Finds super awesome numbers from 1 to entered number. A super awesome number is a number which is equal to sum of its divisors except itself.
*/

#include<stdio.h>
#include<conio.h>

int isSuperAwesome(int n)
{
	int i, temp = 0;
	
	for (i = 1; i <= n / 2; i++)
	{
		if(n % i == 0)
			temp += i;
	}
	if (temp == n)
		return 1;
	else
		return 0;
}

void PrintSuperAwesomes(int n)
{
	int i;
	
	printf("Super awesome numbers from 1 to n are: \n");
	for(i = 1; i <= n; i++)
	{
		if(isSuperAwesome(i) == 1)
			printf("%d\n", i);
	}
}

int main() 
{
	int n;
  
	printf("Enter the limit: ");
	scanf("%d", &n);
	PrintSuperAwesomes(n);
  
	getch();
	return 0;
}

