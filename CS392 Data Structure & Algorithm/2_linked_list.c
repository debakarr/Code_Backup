/*
 * Program name: Linked List
 * Programmed by: Debakar Roy
 * Roll no.: 15
 * Class: CSE A
*/

#include<stdio.h>
#include<stdlib.h>

//structure defination
struct list
{
	int info;
	struct list *next;
};

//Functions Prototypes
void create(struct list **, int);
void traverse(struct list *);
void insert_first(struct list **,int);
void insert_last(struct list **, int);
int count(struct list *);
void delete_first(struct list **);
void delete_last(struct list **);
void reverse(struct list **);
void del_node(struct list **, int);
void insert_after(struct list **, int, int);
void insert_before(struct list **, int, int);
void sort(struct list **);
void sort_insert(struct list **,int);
void delete_greater(struct list **, int);

//Main Function
int main()
{
	int num, c, item,item2;
	struct list *head=NULL;
	while(1)
	{
		printf("\n1.Create\n2.Traverse\n3.Insert First\n4.Insert Last\n5.Delete First");
		printf("\n6.Delete Last\n7.Count\n8.Reverse\n9.Delete a node with specific element");
		printf("\n10.Insert a element before certain element\n11.Insert a element after certain element");
		printf("\n12.Sort\n13.Insert and Sort\n14.Delete node with info greater than a number");
		printf("\n0.Exit\nYour Choice: ");
		//switch to display menu
		scanf("%d",&c);
		switch(c)				
		{	
			case 1:
				printf("\nEnter the number of nodes: ");
				scanf("%d",&num);
				create(&head, num);
				break;
			case 2:
				traverse(head);
				break;
			case 3:
				printf("\nEnter the information for the node to be inswerted: ");
				scanf("%d",&item);
				insert_first(&head,item);
				break;
			case 4:
				printf("\nEnter the information for the node to be inserted: ");
				scanf("%d",&item);
				insert_last(&head,item);
				break;
			case 5:
				delete_first(&head);
				break;
			case 6:
				delete_last(&head);
				break;
			case 7:
				printf("\nNumber of nodes: %d", count(head));
				break;
			case 8:
				reverse(&head);
				break;
			case 9:
				printf("\nEnter the element of node to delete: ");
				scanf("%d",&item);
				del_node(&head,item);
				break;
			case 10:
				printf("\nEnter the element of node after which you want to insert: ");
				scanf("%d",&item);
				printf("\nEnter the value to insert: ");
				scanf("%d",&item2);
				insert_before(&head,item,item2);				
				break;
			case 11:
				printf("\nEnter the element of node after which you want to insert: ");
				scanf("%d",&item);
				printf("\nEnter the value to insert: ");
				scanf("%d",&item2);
				insert_after(&head,item,item2);				
				break;
			case 12:
				sort(&head);
				break;	
			case 13:
				sort(&head);
				printf("\nEnter the information: ");
				scanf("%d", &item);
				sort_insert(&head,item);
				break;
			case 14:
				printf("\nEnter the number, greater than whose value you want to delete: ");
				scanf("%d", &item);
				delete_greater(&head,item);
				break;
			case 0: exit(0);
			default:
				printf("\nWrong input. Please try again...");
		}	
	}
	return(0);
}

//Function defination to create linked list
void create(struct list **head, int num)
{
	int item, i;
	struct list *newnode, *temp;
	if(*head!=NULL)
	{
		printf("\nList already exists...");
		return;
	}
	for(i = 1; i <= num; i++)
	{
		printf("\nEnter the item: ");
		scanf("%d",&item);
		newnode=(struct list *)malloc(sizeof(struct list));
		newnode->info=item;
		newnode->next=NULL;
		if(*head==NULL)
			*head=newnode;
		else
			temp->next=newnode;
		temp=newnode;	
	}
	return;
}

//Fuction defination to display linked list
void traverse(struct list *head)
{
	struct list *loc=head;
	if(head==NULL)
	{
		printf("\nNo linked list create. Create one by selecting menu '1'...");
	}
	while(loc!=NULL)
	{
		printf("\n%d", loc->info);
		loc=loc->next;
	}
	return;
}

//Fuction defination to insert element in first place
void insert_first(struct list **head, int item)
{
	struct list *newnode;
	newnode=(struct list *)malloc(sizeof(struct list));
	newnode->info=item;
	newnode->next=*head;
	*head=newnode;
	return;
}

//Function to insert element in last place
void insert_last(struct list **head, int item)
{
	struct list *newnode,*loc=*head;
	while(loc->next!=NULL)
		loc=loc->next;
	newnode=(struct list *)malloc(sizeof(struct list));
	newnode->info=item;
	newnode->next=NULL;
	loc->next=newnode;
	return;
	
}

//Function to count element in linked list
int count(struct list *head)
{
	struct list *loc=head;
	int ct=0;
	while(loc!=NULL)
	{
		ct++;
		loc=loc->next;
	}
	return ct;
}

//Function to delete element in first place
void delete_first(struct list **head)
{
	if(*head == NULL)
	{
		printf("\nEmpty list!!");
		return;
	}
	struct list *temp=*head;
	*head = (*head)->next;
	printf("\nDeleteing node containing info: %d ...", temp->info);
	temp->next=NULL;
	free(temp);
	return;
}

//Fuction to delete elemnt in last place
void delete_last(struct list **head)
{
	struct list *loc=*head,*locp;
	if(*head == NULL)
	{
		printf("\nEmpty list!!!");
		return;
	}
	while(loc->next!=NULL)
	{
		locp=loc;
		loc=loc->next;
	}
	if(*head==loc)
	{
		head=NULL;
	}
	else
	{
		locp->next=NULL;
	}
	printf("\nDeleting node with information %d ...", loc->info);
	free(loc);
	return;
}

//Fuction to reverse a linked list
void reverse(struct list **head)
{
	struct list *loc=*head,*locp=NULL,*locn;
	if(*head==NULL || (*head)->next==NULL)
		return;
	while(loc!=NULL)
	{
		locn=loc->next;
		loc->next=locp;
		locp=loc;
		loc=locn;
	}
	*head=locp;
	return;	
}

//Function to delete a particular elemnt from the linked list
void del_node(struct list **head, int item)
{
	struct list *loc=*head,*locp;
	if(*head==NULL)
	{
		printf("\nEmpty list!!");
		return;
	}
	while(loc!=NULL&&loc->info!=item)
	{
		locp=loc;
		loc=loc->next;
	}
	if(loc==NULL)
	{
		printf("\n%d not found in any node.", item);
		return;
	}
	locp->next=loc->next;
	printf("\nDeleting the node with info: %d", item);
	loc->next=NULL;
	free(loc);
}

//Function to insert a element before a particular element
void insert_before(struct list **head, int item1, int item2)
{
	struct list *loc=*head,*locp,*newnode;
	if(*head==NULL)
	{
		printf("\nEmpty list!!");
		return;
	}
	while(loc!=NULL&&loc->info!=item1)
	{
		locp=loc;
		loc=loc->next;
	}
	newnode=(struct list *)malloc(sizeof(struct list));
	newnode->info=item2;
	if(loc==NULL)
	{
		printf("\n%d not found in any node.", item1);
		free(newnode);
		return;
	}
	if(loc==*head)
	{
		newnode->next=loc;
		*head = newnode;
		return;	
	}
	newnode->next=loc;
	locp->next=newnode;
	return;
}

//Function to insert elemnt after a paticular element
void insert_after(struct list **head, int item1, int item2)
{
	struct list *loc=*head,*locp,*newnode;
	if(*head==NULL)
	{
		printf("\nEmpty list!!");
		return;
	}
	while(loc!=NULL&&loc->info!=item1)
	{
		locp=loc;
		loc=loc->next;
	}
	if(loc==NULL)
	{
		printf("\n%d not found in any node.", item1);
		return;
	}
	newnode=(struct list *)malloc(sizeof(struct list));
	newnode->info=item2;
	newnode->next=loc->next;
	loc->next=newnode;
	
}

//Function to sort a linked list
void sort(struct list **head)
{
	struct list *loc1,*loc2;
	int temp;
	if(*head == NULL)
	{
		printf("\nLinked list is empty!!");
		return;
	}
	for(loc1=*head;loc1!=NULL;loc1=loc1->next)
		for(loc2=loc1->next;loc2!=NULL;loc2=loc2->next)
			if(loc1->info>loc2->info)
			{
				temp=loc1->info;
				loc1->info=loc2->info;
				loc2->info=temp;
			}
	return;
}

//Function to insert a element in a sorted linked list
void sort_insert(struct list **head,int item)
{
	struct list *loc,*newnode,*locp;
	if(*head == NULL)
	{
		printf("\nLinked list is empty!!");
		return;
	}
	for(loc=*head;loc->info<=item;locp=loc,loc=loc->next);
	newnode=(struct list *)malloc(sizeof(struct list));
	newnode->info=item;
	if(loc==*head)
	{
		newnode->next=*head;
		*head=newnode;
		return;
	}
	newnode->next=loc;
	locp->next=newnode;
	return;
}

void delete_greater(struct list **head, int item)
{
	struct list *loc=*head,*locp;
	if(*head==NULL)
	{
		printf("\nEmpty list!!");
		return;
	}
	int count=0;
	while(loc!=NULL)
	{
		if(loc->info>item)
		{
			locp->next=loc->next;
			printf("\nDeleting %d.", loc->info);
			loc->next=NULL;
			loc=locp->next;
			continue;
		}
		locp=loc;
		loc=loc->next;
	}
	return;
}
