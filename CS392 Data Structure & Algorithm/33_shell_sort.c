#include<stdio.h>
#include<stdlib.h>

void create(int **,int);
void input(int *,int);
void output(int *,int);
void shellsort(int *,int, int *, int);

int main()
{
	system("clear");
	int *a, *h;
	int m,n,item,pos;
	printf("\nEnter size of the list: ");
	scanf("%d",&n);

	create(&a,n);

	printf("\nEnter %d elements\n",n);
	input(a,n);
	
	printf("\nEnter size of the list containing increment sequence: ");
	scanf("%d",&m);

	create(&h,m);
	printf("\nEnter the Increment series: ");
	input(h,m);

	shellsort(a,n,h,m);

	
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

void shellsort(int *a,int n, int *H, int niner)
{
	int k,i,j,h,temp;
	for(k=0;k<=niner-1;k++)
	{
		h=H[k];
		for(i=h;i<=n-1;i++)
		{
			temp=a[i];
			j=i;
			while(j>=h && temp<a[j-h])
			{
				a[j]=a[j-h];
				j=j-h;
			}	
			a[j]=temp;
		}
	}
	printf("\nArray after sorting :\n");
	output(a,n);	
	return;
}

