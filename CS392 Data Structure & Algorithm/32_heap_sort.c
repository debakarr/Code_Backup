#include<stdio.h>
#include<stdlib.h>

void create(int **,int);
void input(int *,int);
void output(int *,int);
void heapsort(int *, int);
void build_max_heap(int *, int);
void max_heapify(int *, int, int);

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

	heapsort(a,n);

	printf("\nArray after sorting :\n");
	output(a,n);	
	
	printf("\n");
	return(0);
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

void max_heapify(int *a,int i, int n)
{
	int child, item, par;
	child = 2*i;
	item = a[i];
	while(child<=n-1)
	{
		if(child<n && a[child]<a[child+1])
			child = child + 1;
		if(item >= a[child])
			break;
		par = child/2;
		a[par]=a[child];
		child=2*child;
	}
	par=child/2;
	a[par]=item;
	return;
}

void build_max_heap(int *a, int n)
{
	int i;
	for(i=((n-1)/2)-1;i>=0;i--)
		max_heapify(a,i,n);
	return;
}

void heapsort(int *a, int n)
{
	int i, temp;
	build_max_heap(a,n);
	for(i=n-1;i>=1;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		max_heapify(a,0,i-1);
	}
	return;
}
