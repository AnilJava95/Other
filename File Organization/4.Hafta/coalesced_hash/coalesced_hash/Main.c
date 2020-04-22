#include <stdio.h>
#define length 7

int main()
{
	int memory[11]={0,0,0,0,0,0,0,0,0,0,0};
    int i,q,b;
	int data[length]={27,18,29,28,39,13,16};
	int loc;
	
	
	for ( i = 0; i < length; i++)
	{
		loc=hash(data[i]);
		//printf("%d",loc);
		if(memory[loc]==0)
			memory[loc]=data[i];
		else
		{
			for ( q = 11; q > 0; q--)
			{
				if(memory[q]==0)
				{memory[q]=data[i];
				break;}
			}
		}
	}
		for ( b = 0; b < 11; b++)
	          {
	           printf("-%d-",memory[b]);
              } 
	getch();
}

int hash(int n)
{
	int location;
	location=n%11;
}
