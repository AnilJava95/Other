/*
Name: 1358130030_Anil_Erturk_Odev3
Copyright:
Author: Anýl Ertürk
E-Mail: anilerturk1@gmail.com
Date: 25.11.2015 15:18
Description: Creates a queue and assigns 30 random integers [0-99] to it and prints them. Takes the numbers from the queue to an array and sorts them from small to big using insertion
sort. At the end it takes sorted numbers back to queue and prints the sorted version.
*/

#include<stdio.h>
#include<time.h>

struct queue
{
	int front, rear;
	int queue_items[30];
};

void push(struct queue *pq, int value)
{
	pq->queue_items[++(pq->rear)] = value;
}

void print_queue(struct queue *pq)
{
	int i;
	pq->front = -1;

	for (i = 1; i <= 30; i++)
		printf("%d\n", pq->queue_items[++(pq->front)]);
}

void queue_to_array(struct queue *pq, int array[30])
{
	int i = 0;
	pq->front = -1;

	do
	{
		array[i++] = pq->queue_items[++(pq->front)];
	} while (pq->front <= 29);
}

void sorting_array(int array[30])
{
	int n = 30, t, c, d;

	for (c = 1; c <= n - 1; c++)
	{
		d = c;

		while (d > 0 && array[d] < array[d - 1])
		{
			t = array[d];
			array[d] = array[d - 1];
			array[d - 1] = t;

			d--;
		}
	}
}

void array_to_queue(struct queue *pq, int array[30])
{
	int i = 0;
	pq->rear = -1;

	do
	{
		pq->queue_items[++(pq->rear)] = array[i++];
	} while (i <= 29);
}


int main()
{
	int i;
	int array1[30];
	struct queue queue1;
	queue1.rear = queue1.front = -1;
	srand(time(NULL));

	for (i = 1; i <= 30; i++)
		push(&queue1, rand() % 100);

	printf("Automatically assigned random numbers[0-99] from queue:\n\n");
	print_queue(&queue1);

	queue_to_array(&queue1, array1);

	/*   // Test to see if numbers at at array.
	for(i = 0; i <= 29; i++)
	printf("test %d\n", array1[i]);
	*/

	sorting_array(array1);

	/*   // Test to see if sorting worked.
	for(i = 0; i <= 29; i++)
	printf("test %d\n", array1[i]); */

	printf("\nSorted queue(Was sent to array to be sorted and came back):\n\n");
	array_to_queue(&queue1, array1);
	print_queue(&queue1);
	printf("\n");

	system("pause");
}

