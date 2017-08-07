#include<stdio.h>
#include<stdlib.h>

void create(int **,int);
void input(int *,int);
void output(int *,int);
void merge_sort(int *,int, int);
void merge(int *,int, int, int);

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
	merge_sort(a,0,n-1);
	
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

void merge_sort(int *a, int p, int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q+1,r);
	}
	return;
}

void merge(int *a,int ls,int rs,int re)
{
	int le, k, i, j, TEMP[20];
	k=-1;
	le=rs-1;
	i=ls;
	j=rs;
	while(i<=le && j<=re)
	{
		if(a[i]<a[j])
		{
			k=k+1;
			TEMP[k]=a[i];
			i=i+1;
		}
		else
		{
			k=k+1;
			TEMP[k]=a[j];
			j=j+1;
		}
	}
	while(i<=le)
	{
		k=k+1;
		TEMP[k]=a[i];
		i=i+1;
	}
	while(j<=re)
	{
		k=k+1;
		TEMP[k]=a[j];
		j=j+1;
	}
	for(i=0;i<=k;i++)
		a[ls+i]=TEMP[i];
	return;
}
