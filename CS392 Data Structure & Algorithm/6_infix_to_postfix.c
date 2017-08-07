#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 30

typedef struct stk{
	char info[MAX];
	int top;
}stack;

int precedence(char);
void push(stack *, char);
char pop(stack *);
int empty_stack(stack *);
void postfix(char [],char []);


int main()
{
	char in[MAX] = {""}, post[MAX] = {""};
	printf("\nEnter the infix expression: ");
	gets(in);
	postfix(in, post);
	printf("\nPostfix Expression is %s\n",post);
	return(0);
}
void postfix(char in[],char post[])
{
	
	int l,in_pos=0,post_pos=0;
	char x,y;
	stack s, *ps = &s;
	ps->top=-1;
	push(ps,'(');
	l = strlen(in);
	in[l] = ')';
	while(!empty_stack(ps))
	{	
		x=in[in_pos++];
		if(isalpha(x))
			post[post_pos++] = x;
		else if(x == '(')
			push(ps,x);
		else if(x == ')')
		{
			while(ps->info[ps->top]!='(')
			{
				y = pop(ps);
				post[post_pos++]=y;
			}
			y=pop(ps);
		}
		else
		{
			while(precedence(ps->info[ps->top]) >= precedence(x))
			{
				y = pop(ps);
				post[post_pos++]=y;
			}
			push(ps,x);
		}
	}
	post[post_pos]='\0';
}

void push(stack *ps, char ch)
{
	ps->top=ps->top+1;
	ps->info[ps->top]=ch;
	return;
}

char pop(stack *ps)
{
	char ch;
	ch=ps->info[ps->top];
	ps->top=ps->top-1;
	return(ch);
}
int empty_stack(stack *ps)
{
	if(ps->top==-1)
		return(1);
	else
		return(0);
}
int precedence(char c)
{
	if(c == '+' || c == '-')
		return(1);
	if(c == '*' || c == '/')
		return(2);
	if( c == '^')
		return(3);
	return(0);
}
