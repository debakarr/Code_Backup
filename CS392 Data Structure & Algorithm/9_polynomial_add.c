#include<stdio.h>
#include<stdlib.h>

typedef struct polynomial{
	int expo;
	int coeff;
	struct polynomial *next;
}poly;

void poly_create(poly **, int);
//void insert(poly **, int, int);
poly *insert(poly *, int, int);
void poly_add(poly *, poly *, poly **);
void print_poly(poly *);

int main()
{
	int num1, num2, ch;
	poly *h1 = NULL, *h2 = NULL, *h3 = NULL;
	system("clear");
	printf("\nEnter the number of element you want to enter in 1st polynomial: ");
	scanf("%d", &num1);
	poly_create(&h1, num1);
	printf("\nEnter the number of element you want to enter in 2nd polynomial: ");
	scanf("%d", &num2);
	poly_create(&h2, num2);
	poly_add(h1, h2, &h3);
	printf("\nSummation of : ( ");
	print_poly(h1);
	printf(" ) + ( ");
	print_poly(h2);
	printf(" ) = ( ");
	print_poly(h3);
	printf(" )\n");
	return(0);
}

void poly_create(poly **h, int n)
{
	poly *q, *temp;
	int c, e, i;
	if(*h != NULL)
		return;
	for(i = 1; i<= n; i++)
	{
		
		printf("\nEnter the coefficient for term %d: ", i);
		scanf("%d", &c);
		printf("\nEnter the exponentfor term %d: ", i);
		scanf("%d", &e);
		q = (poly *)malloc(sizeof(poly));
		q->coeff=c;
		q->expo=e;
		q->next = NULL;
		if(*h == NULL)
			*h = q;
		else
		{
			temp->next = q;	
		}	
		temp = q;
	}
	return;
}

void poly_add(poly *h1, poly *h2, poly **h3)
{
	poly *loc1 = h1, *loc2 = h2;
	int sum=0;
	while(loc1 != NULL && loc2 != NULL)
	{
		if(loc1->expo == loc2->expo)
		{
			sum = loc1->coeff + loc2->coeff;
//			printf("%d\n",sum);
			if(sum!=0)
				*h3 = insert(*h3, sum, loc1->expo);
			loc1 = loc1->next;
			loc2 = loc2->next;
		}
		else if(loc1->expo > loc2->expo)
		{
			*h3 = insert(*h3, loc2->coeff, loc2->expo);
			loc2 = loc2->next;
		}
		else
		{
			*h3 = insert(*h3, loc1->coeff, loc1->expo);
			loc1 = loc1->next;
		}
	}
	while(loc1 != NULL)
	{
		*h3 = insert(*h3, loc1->coeff, loc1->expo);
		loc1 = loc1->next;
	}
	while(loc2 != NULL)
	{
		*h3 = insert(*h3, loc2->coeff, loc2->expo);
		loc2 = loc2->next;
	}
	return;
}

poly * insert(poly *head, int c, int e)
//id insert(poly **head, int c, int e)
{
	poly *newnode, *loc = head;
	newnode = (poly *)malloc(sizeof(poly));
	newnode->coeff = c;
	newnode->expo = e;
	newnode->next = NULL;
	loc = head;
	if(loc == NULL)
	{
		head = newnode;
	}
	else
	{
		while(loc->next != NULL)
		{
			loc = loc->next;
		}
		loc->next = newnode;
	}
	return(head);
}

void print_poly(poly *head)
{
	poly *loc = head;
	while(loc != NULL)
	{
		printf("%dx^%d + ",loc->coeff, loc->expo);
		loc = loc->next;
	}
	printf("\b\b");
	return;
}
