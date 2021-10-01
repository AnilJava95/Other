/*
Name: 1358130030_Anýl_Ertürk_Odev1
Copyright:
Author: Anýl Ertürk
E-Mail: anilerturk1@gmail.com
Date: 13.10.15 22.20
Description: Creates a stack that is 10 elements big. Takes the values from user one by one or all at once. First value zero "0".
	Bunch of values then zero "1,2,3,0". Ten values "1,2,3,4,5,6,7,8,9,10,(Any 11. value to end the program)" The program then prints the taken values.
*/

#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int top;
	int items[10];
};

void printlist(struct stack *ps)
{
	do
	{
		printf("%d\n", ps->items[(ps->top)--]);
	} while (ps->top > -1);
	system("pause");
	exit(1);
}

void push(struct stack *ps, int x)
{
	ps->items[++(ps->top)] = x;
}

/* -Eleman çýkarma fonksiyonu örneði. Void ilede yapýlabilir çýkarýlacak elemana ihtiyacýn olup olmamasýna göre
int pop(struct stack *ps)
{
	if (empty(ps))  // push fonksiyonunda bunu kullanmadýk çünkü bu programýn yapýsý kontrolleri mainde yapma imkaný verdi
	{
		printf("%s", "struct underflow");
		Exit(1);
	}
	return(ps -> items[ps -> top--]
}  

   -empty fonksiyonu örneði
int empty(struct stack *ps)
{
	if(ps -> top == -1)
		return(TRUE); // Boþ
	else
		return(FALSE); // Boþ deðil
} 

	-Tek tip deðiþken yerine birden çok deðiþken tipinde olabilen elemanlarla veri yapýsý yapmak. Stack'ý tanýmlamadan önce StackElement'i tanýmlýyosun. 
struct stackelement
{
	int etype; 
	union
	{
		int ival;
		float fval;
		char *pval;
	}element;
}
//stack'ý tanýmlarken int dizisi yerine stackelement dizisi kullanýyorsun
struct stack
{
	int top;
	struct stackelement items[stacksize];
}
En son yazdýrýrken stackelement'in iki deðeri olduðu için etype deðerini kullanarak tipini öðrenicez.
Sonrada deðerini yazdýrýcaz(switch case). */

int main()
{
	struct stack S;
	S.top = -1;
	int x;
	printf("You can enter 0 to end the program now. You can enter (0,10) numbers and then enter 0 to end the program."
		"You can enter 10 values and then enter any value to end the program. \n");
	scanf_s("%d", &x);
	if (x == 0)
	{
		printf("List is empty \n");
		system("pause");
		exit(1);
	}
	while (x != 0)
	{
		push(&S, x);
		if (S.top == 9)
		{
			printf("\nList have been filled\n\n");
			printlist(&S);
		}
		scanf_s("%d", &x);
		
	}
	printf("You have ended the program. \n");
	printlist(&S);
}
