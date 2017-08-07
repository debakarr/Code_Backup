#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define SIZE 30

typedef struct stk{
	int info[SIZE];	
	int top;
}stack;

void push(stack *, int);
int pop(stack *);
void calculate(stack *, char);
void stack_print(stack *);
int main()
{
	int item, item1, item2, i;
	stack s,*ps;

	ps=&s;

	ps->top=-1;

	char a[30], ch;

	system("clear");
	printf("\nEnter the postfix expression: ");
	gets(a);

	for(i=0; i < strlen(a); i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
			push(ps, (a[i]-'0'));
		else
			calculate(ps, a[i]);				
	}
	stack_print(ps);
	return(0);
}
void push(stack *ps, int num)
{
	ps->top=ps->top+1;
	ps->info[ps->top]=num;
	return;
}

int pop(stack *ps)
{
	int item;
	item=ps->info[ps->top];
	ps->top=ps->top-1;
	return(item);
}

void calculate(stack *ps, char ch)
{
	int a, b, result;
	a = pop(ps);
	b = pop(ps);
	switch(ch)
	{
		case '+':
			result = b + a;
			break;
		case '-':
			result = b - a;
			break;
		case '*':
			result = b * a;
			break;
		case '/':
			result = b / a;
			break;
		case '^':
			result = pow(b, a);
			break;
		default:
			printf("\nSomething went wrong!!!\n");
	}	
	push(ps, result);
	return;		
}
void stack_print(stack *ps)
{
	printf("Result: %d\n",ps->info[ps->top]);
}
