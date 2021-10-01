#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*start=NULL;

void create()
{
char ch;
 do
 {
  struct node *new_node,*current;

  new_node=(struct node *)malloc(sizeof(struct node));

  printf("\n\nEnter the data : ");
  scanf("%d",&new_node->data);
  new_node->next=NULL;

  if(start==NULL)
  {
  start=new_node;
  current=new_node;
  }
  else
  {
  current->next=new_node;
  current=new_node;
  }

 printf("\nDo you want to creat another : ");
 ch=getche();
 }while(ch!='n');
}

void display()
{
struct node *new_node;
 printf("\nThe Linked List : ");
 new_node=start;
 while(new_node!=NULL)
   {
   printf("%d--->",new_node->data);
   new_node=new_node->next;
   }
  printf("NULL");
}

struct node *sortlist(struct node *p)
{
  struct node *temp1, *temp2, *min, *prev, *q;
  q = NULL;
  while(p != NULL)
  {
    prev = NULL;
    min = temp1 = p;
    temp2 = p -> next;
    while (temp2 != NULL)
    {
      if(min -> data > temp2 -> data)
      {
        min = temp2;
        prev = temp1;
	  }
	  temp1 = temp2;
	  temp2 = temp2 -> next;
	}
	if(prev == NULL)
	  p = min -> next;
	else
	  prev -> next = min -> next;
	min -> next = NULL;
	if(q == NULL)
	  q = min;
	else
	{
	  temp1 = q;
	  while(temp1 -> next != NULL)
	    temp1 = temp1 -> next;
	  temp1 -> next = min;
	}
  }
  return (q);
}

void main()
{
create();
start = sortlist(start);
display();
}
