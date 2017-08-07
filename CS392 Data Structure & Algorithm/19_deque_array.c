#include<stdio.h>
#include<stdlib.h>
#define MAX 6

typedef struct deque{
	int info[MAX];
	int left, right;
}dq;

int deque_full(dq *);
int deque_empty(dq *);
void insert_left(dq *, int);
int delete_left(dq *);
void insert_right(dq *, int);
int delete_right(dq *);
void traverse(dq *);

int main()
{
	system("clear");
	int item, ch;
	dq dque,*p;
	p = &dque;
	p->left = -1;
	p->right = -1;
	while(1)
	{
		printf("\n1.Insert left\n2.Delete left\n3.Insert right\n4.Delete right\n0.Exit\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the item you want to insert in left of deque: ");
				scanf("%d", &item);
				insert_left(p, item);
				break;
			case 2:
				item = delete_left(p);
				if(item != 9999)
					printf("\nDeleting item %d\n", item);
				break;
			case 3:
				printf("\nEnter the item you want to insert in right of deque: ");
				scanf("%d", &item);
				insert_right(p, item);
				break;
			case 4:
				item = delete_right(p);
				if(item != 9999)
					printf("\nDeleting item %d\n", item);
				break;
			case 0:
				exit(0);
			default:
				printf("\nInvalid input. Please try again!!!\n");
		}
	}	
	return(0);
}

int deque_full(dq *p)
{
	if(p->left == p->right + 1 || (p->left == 0 && p->right == MAX - 1))
		return(1);
	else
		return(0);
}

int deque_empty(dq *p)
{
	if(p->left == -1 && p->right == -1)
		return(1);
	else 
		return(0);
}

void insert_left(dq *p, int item)
{
	if(deque_full(p))
	{
		printf("\nOverflow!!!\n");
		return;
	}
	if(deque_empty(p))
	{
		p->right = 0;
		p->left = 0;
	}
	else if(p->left == 0)
		p->left = MAX - 1;
	else 
		p->left--;
	p->info[p->left] = item;
	return;
}

int delete_left(dq *p)
{	
	int item;
	if(deque_empty(p))
	{
		printf("\nUnderflow!!\n");
		return(9999);
	}
	item = p->info[p->left];
	if(p->left == p->right)
	{
		p->left = -1;
		p->right = -1;
	}
	else if(p->left == MAX - 1)
		p->left = 0;
	else 
		p->left++;
	return(item);
}

void insert_right(dq *p, int item)
{
	if(deque_full(p))
	{
		printf("\nOverflow!!\n");
		return;
	}
	if(deque_empty(p))
	{
		p->right = 0;
		p->left = 0;
	}
	else if(p->right == MAX - 1)
		p->right = 0;
	else
		p->right++;
	p->info[p->right] = item;
	return;
}

int delete_right(dq *p)
{
	int item;
	if(deque_empty(p))
	{
		printf("\nUnderflow!!\n");
		return(9999);
	}
	item = p->info[p->right];
	if(p->left == p->right)
	{
		p->left = -1;
		p->right = -1;
	}
	else if(p->right == 0)
		p->right = MAX - 1;
	else 
		p->right--;
	return(item);
}

