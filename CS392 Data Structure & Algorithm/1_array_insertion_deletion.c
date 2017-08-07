/*
 * Program name: Array Insertion and Deletion
 * Programmed by: Debakar Roy
 * Roll no.: 15
 * Class: CSE A
*/

#include<stdio.h>
#include<stdlib.h>

//Function Prototype
void display(int *,int);
void insert(int *,int *,int,int);
int delete(int *, int *, int);

//Main function
int main()
{
	int a[10]={4,3,5,6,8},item,i,ch,pos,num=5;
	while(1)
	{
		printf("\n1.Insert element in particular position\n2.Delete a element from a paricular position\n0.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the position you want to enter the elemnt: ");
				scanf("%d", &pos);
				printf("\nEnter the element you want to insert: ");
				scanf("%d", &item);
				insert(a,&num,pos,item);
				display(a,num);
				break;
			case 2:
				printf("\nEnter the position you want to enter the elemnt: ");
				scanf("%d", &pos);
				printf("\n%d deleted.\n",delete(a,&num,pos));
				display(a,num);
				break;
			case 0:	exit(0);
			default:
				printf("\nWrong input.Try again...");
				
		}
	}
	return(0);
}

//Function for insertion
void insert(int *a, int *n, int k, int item)
{
	int i;
	for(i=*n-1; i>=k-1; i--)
	{
		a[i+1]=a[i];
	}
	a[k-1] = item;	
	(*n)++;
}

//Function for display
void display(int *a,int n)
{
	int i;
	for(i=0; i<n;i++)
		printf("\t%d",a[i]);
	return;
}

//Function for deletion
int delete(int *a, int *n, int k)
{
	int item = a[k-1],i;
	for(i=k-1;i<*n-1;i++)
	{
		a[i] = a[i+1];
	}	
	(*n)--;
	return item;
}
