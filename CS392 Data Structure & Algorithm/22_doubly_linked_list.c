#include<stdio.h>
#include<stdlib.h>

typedef struct dll{
	int info;
	struct dll *prev;
	struct dll *next;
}dlist;

void create_dlist(dlist **, int);
void traverse_dlist(dlist *);
void insert_any_dlist(dlist **, int, int);
void delete_any_dlist(dlist **, int);
void input_after(dlist *, int);

int main()
{
	system("clear");
	int item, ch, p;
	dlist *head = NULL;
	while(1)
	{
		printf("\n1.Create Double linked list\n2.Traverse\n3.Insert at a position\n4.Delete from a position\n5.Insert after a node\n0.Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the number of element you want to insert in double linked list : ");
				scanf("%d", &item);
				create_dlist(&head, item);
				break;
			case 2:
				traverse_dlist(head);
				break;
			case 3:
				printf("\nInsert a position in which you want to insert the node : ");
				scanf("%d", &p);
				printf("\nEnter the element you want to insert : ");
				scanf("%d", &item);
				insert_any_dlist(&head, item, p);
				break;
			case 4:
				printf("\nInsert a position from which you want to delete the node : ");
				scanf("%d", &p);
				delete_any_dlist(&head, p);
				break;
			case 5:
				printf("\nEnter the information of node after which you want to insert a node : ");
				scanf("%d", &item);
				input_after(head, item);
				break;
			case 0:
				exit(0);
			default:
				printf("\nInvalid entry. Please try again!!\n");
		}
	}	
	return(0);
}

void create_dlist(dlist **head, int n)
{
	int i, item;
	dlist *newnode, *temp;
	if(*head != NULL)
	{
		printf("\nLinked list already exist!!");
		return;
	}
	for(i = 1; i <= n; i++)
	{
		newnode = (dlist *)malloc(sizeof(dlist));
		printf("\nEnter the item to insert in position %d : ", i);
		scanf("%d", &item);
		newnode->info = item;
		newnode->next = NULL;
		if(*head == NULL)
		{
			*head = newnode;
			newnode->prev = NULL;
		}
		else
		{
			temp->next = newnode;
			newnode->prev = temp;
		}
		temp = newnode;
	}
	return;
}

void traverse_dlist(dlist *head)
{
	dlist *temp = head, *q;
	printf("\nForward Traverse : \n");
	while(temp != NULL)
	{
		q = temp;
		printf("%d ", temp->info);
		temp = temp->next;
	}
	printf("\nReverse Traverse : \n");
	while(q != NULL)
	{
		printf("%d ", q->info);
		q = q->prev;
	}
	return;
}

void insert_any_dlist(dlist **head, int item, int p)
{
	int i = 1;
	dlist *newnode, *temp, *loc;
	if(*head == NULL)
	{
		printf("\nLinked list doesn't exist...");
		return;
	}
	newnode = (dlist *)malloc(sizeof(dlist));
	newnode->info = item;
	if(i == p)
	{
		newnode->prev = NULL;
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
		return;
	}	
	temp = *head;
	while(i != p)
	{
		loc = temp;
		temp = temp->next;
		i++;
	}
	if(temp->next == NULL)
	{
		temp->next = newnode;	
		newnode->next = NULL;
		newnode->prev = temp;
	}
	else
	{
		loc->next = newnode;
		newnode->prev = loc;
		newnode->next = temp;
		temp->prev = newnode;
	}
	return;
}

void delete_any_dlist(dlist **head, int p)
{
	int i = 1;
	dlist *ptr = *head, *preptr;
	while(i != p)
	{
		preptr = ptr;
		ptr = ptr->next;
		i++;
	}
	if(ptr->next == NULL)
		preptr->next = NULL;
	else
	{
		preptr->next = ptr->next;
		(ptr->next)->prev = preptr;
	}
	if(i == 1)
	{
		(ptr->next)->prev = NULL;
		*head = ptr->next;	
	}
	free(ptr);
	return;
	
}

void input_after(dlist *head, int key)
{
	dlist *loc, *newnode;
	int item;
	if(head == NULL)
	{
		printf("\nLinked list is empty.");
		return;
	}
	loc = head;
	while(loc->next != NULL && loc->info != key)
		loc = loc->next;
	printf("\nEnter the item to insert: ");
	scanf("%d", &item);
	newnode = (dlist *)malloc(sizeof(dlist));
	newnode->info = item;
	newnode->prev = loc;
	newnode->next = loc->next;
	loc->next = newnode;
	return;
}
