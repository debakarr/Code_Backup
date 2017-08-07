/*
 * Program name: Stack through Linked List
 * Programmed by: Debakar Roy
 * Roll no.: 15
 * Class: CSE A
*/
#include<stdio.h>
#include<stdlib.h>

//Structure defination
typedef struct stk
{
	int info;
	struct stk *next;
}stack;

//Function prototypes
void push(stack **,int);
int pop(stack **);
int stack_empty(stack **);
void stack_print(stack **);

//Main function
int main()
{
	int item,ch;
	stack *top=NULL;
	while(1)
	{
		printf("\n1.Push\n2.Pop\n3.Print\n0.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		//switch to display menu
		switch(ch)
		{
			case 1:
				printf("\nEnter the information: ");
				scanf("%d",&item);
				push(&top,item);
				break;
			case 2:
				item = pop(&top);
				if(item!=9999)
					printf("\ninformation poped: %d", item);
				break;
			case 3:
				stack_print(&top);
				break;
			case 0:
				exit(0);
			default:
				printf("\nInvalid Entry!!.Try again...");
		}
	}
	return(0);
}

//Function to check whether a stack is empty or not
int stack_empty(stack **ps)
{
	if(*ps==NULL)
		return(1);
	else
		return(0);	
}

//Fuction to push a element in the stack
void push(stack **ps, int item)
{
	stack *newnode;
	newnode = (stack*)malloc(sizeof(stack));
	newnode->info=item;
	newnode->next=*ps;
	*ps=newnode;
}

//Fuction to pop a element in the stack
int pop(stack **ps)
{
	int item;
	if(stack_empty(ps))
	{
		printf("Unsderflow!!");
		return(9999);
	}
	stack *temp=*ps;
	*ps=temp->next;
	item=temp->info;
	temp->next=NULL;
	free(temp);
	return(item);	
}

//Fuction to display a stack
void stack_print(stack **ps)
{
	stack *loc=*ps;
	if(loc==NULL)
	{
		printf("\nStack not created!!");
		return;
	}
	while(loc!=NULL)
	{
		printf("\n%d", loc->info);
		loc=loc->next;
	}
	return;
}
