#include<stdio.h>
#include<stdlib.h>

typedef struct qu{
	int info;
	struct qu *next;
}queue;

void enqueue(queue **, queue **, int);
int dequeue(queue **, queue **);
void traverse(queue **, queue **);

int main()
{
	int item, ch;
	queue *f = NULL;
	queue *r = NULL;
	while(1)
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Traverse\n0.Exit\nEnter your choice:");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the information: ");
				scanf("%d", &item);
				enqueue(&f, &r, item);
				break;
			case 2:
				item = dequeue(&f, &r);
				if(item != 9999)
					printf("\nDeleting info %d....", item);
				break;
			case 3:
				traverse(&f, &r);
				break;
			case 0:
				exit(0);
			default:
				printf("\nInvalid input. Please try agin!!!\n");		}
	}
	return(0);
}

void enqueue(queue **f, queue **r, int item)
{
	queue *a;
	a = (queue *)malloc(sizeof(queue));
	a->info = item;
	a->next = NULL;
	if(*r == NULL)
	{
		*f = a;
	}
	else 
	{
		a->next = (*r)->next;
		(*r)->next = a;
	}
	*r = a;
	return;
}

int dequeue(queue **f, queue **r)
{
	int item;
	if(*f == NULL)
	{
		printf("\nUnderflow!!\n");
		return(9999);
	}
	item = (*f)->info;
	if(*f == *r)
	{
		*f = NULL;
	}
	else
	{
		queue *temp = *f;
		*f = temp->next;
		temp->next = NULL;
		free(temp);
		(*r)->next = *f;
	}
	return(item);
}

void traverse(queue **f, queue **r)
{
	queue *loc=*f;
	if(loc==NULL)
	{
		printf("\nQueue not created!!");
		return;
	}
	while(loc->next!=(*r)->next)
	{
		printf("\n%d", loc->info);
		loc=loc->next;
	}
	printf("\n%d", loc->info);
	return;
}
