#include <stdio.h>
#include <stdlib.h>

# define TOTALSIZE 20
# define MAXSTACKNO TOTALSIZE/2

int bottom[MAXSTACKNO], limit[MAXSTACKNO];

typedef struct mult_stk
{
	int arr[TOTALSIZE];
	int top[MAXSTACKNO];
} stack;
int push(stack *,int,int);
int pop(stack *,int,int*);

int main()
{
	int item, n, each_stacksize, sno;
	int i, choice,  retval;
	stack s;
	stack *ps=&s;
	system("clear");
	
	printf("\n How Many Stacks ? : ");
	scanf("%d",&n);
	each_stacksize = TOTALSIZE / n; //Max. size of each Stack is found

	//Initialize bottom for each Stack

	bottom[0] = -1; 
	for(i=1;i<n;i++)
		bottom[i] = bottom[i-1] + each_stacksize;

	//Initialize Limit of each Stack

        for(i=0;i<n;i++)
		limit[i] = bottom[i] + each_stacksize;


	//Initialize top of each Stack

	for(i=0;i<n;i++)
		ps->top[i] = bottom[i];

	//Process the Stacks

	while(1)
	{
		printf("\n Multiple Stacks Implementation \n");
		printf("\n1. Push\n2. Pop\n3. Exit\n\nChoice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : 
				 do{
				 	printf("\n Enter a Valid Stack Number (1 to %d) : ", n);
				 	scanf("%d", &sno);
				 }while(sno>n);
				 printf("\n Enter item : ");
				 scanf("%d", &item);
				 retval = push(ps,sno-1,item);
				 if(retval == -1)
					printf("\n Stack %d is Full",sno);
				 else
					printf("\n %d is Pushed in Stack No. %d \n", item, sno);
				 break;
			case 2 : 
				 do{
					printf("\n Enter a  Valid stack Number (1 to %d) : ", n);
				 	scanf("%d", &sno);
				 }while(sno>n);
				 retval = pop(ps,sno-1,&item);
				 if(retval == -1)
					printf("\n Stack %d is Empty \n",sno);
				 else
					printf("\n %d is popped from Stack No. %d \n",item,sno);
				 break;
			case 3 : exit(0);
			default: printf("\nWrong choice ....");
		}
	}
	return(0);
}


int push(stack *ps,int sno,int item)
{
	if( ps->top[sno] == limit[sno] )
		return(-1);
	else
	{
		ps->top[sno]++;
		ps->arr[ps->top[sno]] = item;
		return(1);
	}

}

int pop(stack *ps,int sno,int *item)
{
	if( ps->top[sno] == bottom[sno] )
		return(-1);
	else
	{
		*item = ps->arr[ps->top[sno]];
		ps->top[sno]--;
		return(1);
	}
}
