/*
Name: 1358130030_Anil_Erturk_Odev2
Copyright:
Author: Anýl Ertürk
E-Mail: anilerturk1@gmail.com
Date: 20.10.15 15.52
Description: Creates a stack and a queue 10 elements big. Takes the values from user. First value zero "0". Bunch of values then zero "1,2,3,0". Or ten values
	"1,2,3,4,5,6,7,8,9,10". Then program moves the data from stack to queue and then prints the queue's content.
*/

#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int top;
	int stackItems[10];
};

struct queue
{
	int front, rear;
	int queueItems[10];
};

void stackToQueue(struct stack *ps, struct queue *pq)
{
	do
	{
		pq->queueItems[++(pq->rear)] = ps->stackItems[(ps->top)--];
	} while (ps->top > -1);
	
	do
	{
		printf("%d\n", pq->queueItems[++(pq->front)]);
	} while ((pq->rear) != (pq->front));
	system("pause");
	exit(1);
}

void push(struct stack *ps, int value)
{
	ps->stackItems[++(ps->top)] = value;
}

int main()
{
	struct stack stack1;
	stack1.top = -1;
	struct queue queue1;
	queue1.rear = queue1.front = -1;
	int value;

	printf("This program takes up to 10 values from user, enters them to a stack. Then copies them to a queue and then prints the queue's content.\n"
		"You can enter 0 to end the program now. You can enter (0,10) numbers and then enter 0 to end the program. "
		"Or you can enter 10 values to end automatically.\n");
	scanf_s("%d", &value);
	if (value == 0)
	{
		printf("\nYou have ended the program. List is empty.\n\n");
		system("pause");
		exit(1);
	}
	while (value != 0)
	{
		push(&stack1, value);
		if (stack1.top == 9)
		{
			printf("\nList have been filled. The list is:\n\n");
			stackToQueue(&stack1, &queue1);
		}
		scanf_s("%d", &value);
	}
	printf("\nYou have ended the program. The list is:\n\n");
	stackToQueue(&stack1, &queue1);
}
