#include<stdio.h>
#include<stdlib.h>

typedef struct cq
{
	int info;
	struct cq *next;
}cqueue;

void enqueue(cqueue **,int);
int dequeue(cqueue **);
void traverse(cqueue *);

int main()
{
	system("clear");
	int item,ch;
	cqueue *rear = NULL;
	while(1)
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Traverse\n0.Exit\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the info you want to insert: ");
				scanf("%d", &item);
				enqueue(&rear, item);
				break;
			case 2:
				item = dequeue(&rear);
				if(item != 9999)
					printf("\nDeleting item %d\n", item);
				break;
			case 3:
				traverse(rear);
				break;
			case 0:
				exit(0);
			default:
				printf("\nInvalid input!!!Please type again....");
		}
	}
	return(0);
}

void enqueue(cqueue **rear, int item)
{
	cqueue *newnode;
	newnode = (cqueue *)malloc(sizeof(cqueue));
	newnode->info = item;
	if(*rear == NULL)
	{
		*rear = newnode;
		newnode->next = newnode;
	}
	else
	{
		newnode->next = (*rear)->next;
		(*rear)->next = newnode;
		*rear = newnode;
	}
	return;
}

int dequeue(cqueue **rear)
{
	cqueue *front;
	int item;
	if(*rear == NULL)
	{
		printf("\nUnderflow!!");
		return(9999);
	}
	front = (*rear)->next;
	item = front->info;
	if(front == *rear)
		*rear = NULL;
	else
		(*rear)->next = front->next;
	front->next = NULL;
	free(front);
	return(item);
}

void traverse(cqueue *rear)
{
	cqueue *loc;
	if(rear == NULL)
	{
		printf("\nUnderflow!!\n");
		return;
	}
	loc = rear->next;
	do{
		printf("%d ", loc->info);
		loc = loc->next;
	}while(loc != rear->next);
	return;
}
