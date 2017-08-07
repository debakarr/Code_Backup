#include<stdio.h>
#include<stdlib.h>

void create(int **,int);
void input(int *,int);
void output(int *,int);
void quicksort(int *,int, int);
int partition(int *,int, int);

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
	quicksort(a,0,n-1);
	
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

void quicksort(int *a, int p, int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
	return;
}

int partition(int *a,int p,int r)
{
	int s, q, x, temp;
	x=a[p];
	q=p;
	for(s=p+1;s<=r;s++)
	{
		if(a[s]<x)
		{
			q++;
			temp=a[q];
			a[q]=a[s];
			a[s]=temp;
		}
	}
	temp=a[p];
	a[p]=a[q];
	a[q]=temp;
	return(q);
}
