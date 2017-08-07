#include<stdio.h>
#include<stdlib.h>
#define MAX 6


typedef struct qu{
	int info[MAX];
	int f, r;
}queue;

void enqueue(queue *, int);
int dequeue(queue *);
int main()
{
	int ch, item;
	queue q, *pq = &q;
	pq->f = -1;
	pq->r = -1;
	while(1)
	{
		printf("\n1.Enqueue\n2.Dequeue\n0.Exit\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the item: ");
				scanf("%d", &item);
				enqueue(pq, item);
				break;
			case 2:
				item = dequeue(pq);
				if(item != 9999)
					printf("\nDeleting info %d....", item);
				break;
			case 0:
				exit(0);
			default:
				printf("\nInvalid input!!!");
		}
	}
	return(0);
}

void enqueue(queue *pq, int item)
{
	if((pq->f == 0 && pq->r == MAX -1) || pq->f == pq->r +1)
	{
		printf("\nOverflow!!!\n");
		return;
	}
	if(pq->f == -1)
	{
		++pq->f;
		++pq->r;
	}
	else if (pq->r == MAX -1)
		pq->r = 0;
	else 
		++pq->r;
	pq->info[pq->r] = item;
	return;
}

int dequeue(queue *pq)
{
	if(pq->f == -1)
	{
		printf("\nUnderflow!!!\n");
		return(9999);
	}
	int item = pq->info[pq->f];
	if(pq->f == pq->r)
	{
		pq->f = -1;
		pq->r = -1;
	}
	else if(pq->f == MAX-1)
		pq->f = 0;
	else
		++pq->f;
	return(item);
}
