#include<stdio.h>
#include<stdlib.h>

void create(int **,int);
void input(int *,int);
void output(int *,int);
void straight_selection_sort(int *,int);

int main()
{
	system("clear");
	int *a;
	int n,item,pos;
	printf("\nEnter size of the list: ");
	scanf("%d",&n);

	create(&a,n);

	printf("\nEnter %d elements\n",n);
	input(a,n);
	straight_selection_sort(a,n);
	
	printf("\nArray after sorting: \n");
	output(a,n);
	printf("\n");
		
	return;
}

void create(int **a,int n)
{
	*a=(int*)calloc(n,sizeof(int));
}

void input(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
}
	
void output(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%5d",*(a+i));
}

void straight_selection_sort(int *a,int n)
{
	int i, j, loc, temp;
	for(i=0;i<n;i++)
	{
		loc = i;
		for(j=i+1; j<n;j++)
			if(a[j]<a[loc])
				loc=j;
		if(loc!=i)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
	}
	return;
}
