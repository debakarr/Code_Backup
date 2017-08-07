#include<stdio.h>
#include<stdlib.h>

typedef struct CLL
{
	int info;
	struct CLL *next;
}CList;

void create_clist(CList **, int);
void traverse_clist(CList *);
void insert_first(CList **, int);
void insert_end(CList **, int);
int delete_first(CList **);
int delete_end(CList **);
void insert_after_address_clist(CList **, int);
void delete_address_clist(CList **, CList **);
int count(CList **);

int main()
{
	system("clear");
	int item, ch;
	CList *head = NULL,*ptr;
	while(1)
	{
		printf("\n1.Create List\n2.Traverse\n3.Insert First\n4.Insert Last\n5.Delete First\n6.Delete Last");	
		printf("\n7.Insert Node After Address\n8.Delete Node in Address\n9.Count\n0.Exit\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the number of element you want to insert: ");
				scanf("%d", &item);
				create_clist(&head, item);
				break;
			case 2:	
				printf("\nThe Circular queue is : \n");
				traverse_clist(head);
				break;
			case 3:
				printf("\nEnter the item to insert at 1st position: ");
				scanf("%d", &item);
				insert_first(&head, item);
				break;
			case 4:
				printf("\nEnter the element to delete at last position: ");
				scanf("%d", &item);
				insert_end(&head, item);
				break;
			case 5:
				item = delete_first(&head);
				if(item != 9999)
					printf("\nDeleting element: %d", item);
				break;
			case 6:
				item = delete_end(&head);
				if(item != 9999)
					printf("\nDeleting element: %d", item);	
				break;
			case 7:
				printf("\nEnter the item to insert: ");
				scanf("%d", &item);
				printf("\nEnter the address of the node: ");
				scanf("%u", &ptr);
				insert_after_address_clist(&ptr, item);
				break;
			case 8:
				printf("\nEnter the node address to be deleted: ");
				scanf("%u", &ptr);
				delete_address_clist(&head, &ptr);
				break;
			case 9:
				printf("\nNumber of items in Circular Linked list : %d", count(&head));
				break;
			case 0:
				exit(0);
			default:
				printf("\nInvalid input. Please try again...\n");
		}
	}
	return(0);
}

void create_clist(CList **head, int num)
{
	int i, item;
	CList *newnode, *temp;
	if(*head != NULL)
	{
		printf("\nAlready Created.");
		return;
	}
	for(i = 0; i < num; i++)
	{
		printf("\nEnter the element for position %d : ", i+1);
		scanf("%d", &item);
		newnode = (CList *)malloc(sizeof(CList));
		newnode->info = item;
		if(*head == NULL)
			*head = newnode;
		else
			temp->next = newnode;
		temp = newnode;
	}
	newnode->next = *head;
	return; 
}

void traverse_clist(CList *head)
{
	CList *loc;
	if(head == NULL)
	{
		printf("\nEmpty list");
		return;
	}
	loc = head;
	printf("\nFormat : info_of_node[next_of_node]\n");
	do{
		printf("%d[%u]\n",loc->info,loc->next);
		loc = loc->next;
	}while(loc != head);
	return;
}

void insert_first(CList **head, int item)
{
	CList *loc = *head, *newnode;
	while(loc->next != *head)
	{
		loc = loc->next;
	}
	newnode = (CList *)malloc(sizeof(CList));
	newnode->info = item;
	newnode->next = *head;
	loc->next = newnode;
	*head = newnode;
	return;
}

void insert_end(CList **head, int item)
{
	CList *loc = *head, *newnode;
	while(loc->next != *head)
	{
		loc = loc->next;
	}
	newnode = (CList *)malloc(sizeof(CList));
	newnode->info = item;
	newnode->next = *head;
	loc->next = newnode;
	return;
}

int delete_first(CList **head)
{
	CList *loc, *temp;
	int item;
	if(*head == NULL)
		return(9999);
	loc = *head;
	item = loc->info;
	while(loc->next != *head)
		loc = loc->next;
	temp = *head;
	if(loc == *head)
		*head = NULL;
	else
	{
		*head = temp->next;
		loc->next = *head;
	}
	temp->next = NULL;
	free(temp);
	return(item);
}

int delete_end(CList **head)
{

	CList *loc, *locp;
	int item;
	if(*head == NULL)
		return(9999);
	loc = *head;
	while(loc->next != *head)
	{
		locp = loc;
		loc = loc->next;
	}
	item = loc->info;
	if(loc == *head)
		*head = NULL;
	else
		locp->next = *head;
	loc->next = NULL;
	free(loc);
	return(item);
}

void insert_after_address_clist(CList **ptr, int item)
{
	CList *newnode;
	newnode = (CList *)malloc(sizeof(CList));
	newnode->info = item;
	newnode->next = (*ptr)->next;
	(*ptr)->next = newnode;
	return;
}

void delete_address_clist(CList **head, CList **ptr)
{
	CList *locp = *ptr;
	while(locp->next != *ptr)
		locp = locp->next;
	if(locp == *ptr)
		*head = NULL;
	else if(*ptr == *head)
	{
		locp->next = (*ptr)->next;
		*head = (*ptr)->next;
	}
	else
		locp->next = (*ptr)->next;
	(*ptr)->next = NULL;
	free(*ptr);
	return;	
}

int count(CList **head)
{
	CList *loc;
	int cnt = 0;
	if(*head == NULL)
		return(cnt);
	loc = *head;
	do{
		loc = loc->next;
		cnt = cnt + 1;
	}while(loc != *head);
	return(cnt);
}

