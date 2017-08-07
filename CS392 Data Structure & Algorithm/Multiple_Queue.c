//Multiple Queues implementation
# include <stdio.h>
# include <stdlib.h>

# define TOTALSIZE 20
# define MAXQUEUENO TOTALSIZE/2

int bottom[MAXQUEUENO], limit[MAXQUEUENO];


typedef struct mult_que
{
	int arr[TOTALSIZE];
	int front[MAXQUEUENO],rear[MAXQUEUENO];
} queue;

int insert(queue *, int ,int );
int delete(queue *, int ,int *);

int main()
{
	int item, n, each_queuesize, qno;
	int i,  choice, retval;
	queue q;
	queue *pq=&q;

	system("clear");

	printf("\n How Many Queues ? : ");
	scanf("%d", &n);
	each_queuesize = TOTALSIZE / n; 

	bottom[0] = -1;
	for(i=1;i<n;i++)
		bottom[i] = bottom[i-1] + each_queuesize;

	for(i=0;i<n;i++)
		limit[i] = bottom[i] + each_queuesize;

	for(i=0;i<n;i++)
		pq->front[i] = pq->rear[i] = bottom[i];


	while(1)
	{
		printf("\n Multiple Queues Implementation \n");
		printf("\n1. Insert in a Queue\n2. Delete from a Queue\n3. Exit\n\nChoice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1 : 
				 do{
				 	printf("\n Enter a Queue Number (1 to %d) : ", n);
					scanf("%d", &qno);
				 }while(qno>n);

				 printf("\n Enter item : ");
				 scanf("%d", &item);
				 retval = insert(pq,qno-1,item);
				 if(retval == -1)
					printf("\n Queue %d is Full \n", qno);
				 else
					printf("\n %d is inserted in a Queue No. %d \n", item, qno);
				 break;
			case 2 : 
				 do{
				 	printf("\n Enter a Queue Number (1 to %d) : ", n);
					scanf("%d", &qno);
				 }while(qno>n);
				 retval = delete(pq,qno-1,&item);
				 if( retval == -1)
					printf("\n Queue %d is Empty \n", qno);
				 else
					printf("\n %d is deleted from Queue No. %d \n", item, qno);
				 break;
			case 3 : exit(0);
			default: printf("\nWrong choice ....");
		}
	}
	return(0);
}

int insert(queue *pq, int qno,int item)
{
	if( pq->rear[qno] == limit[qno] )
		return(-1);
	else if(pq->rear[qno]==bottom[qno])
	{
		pq->rear[qno]++;
		pq->front[qno]++;
	}
	else
	{
		pq->rear[qno]++; 
	}
	pq->arr[pq->rear[qno]]=item;
	return(1);
}

int delete(queue *pq, int qno,int *item)
{
	if(pq->front[qno] == bottom[qno])
		return(-1);
	*item = pq->arr[pq->front[qno]];
	if(pq->front[qno] == pq->rear[qno])
	{
		pq->front[qno] = pq->rear[qno] = bottom[qno];
	}
	else
	{
		pq->front[qno]++; 
	}
	return(1);
}
