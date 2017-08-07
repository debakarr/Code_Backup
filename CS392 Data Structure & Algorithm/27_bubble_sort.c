#include<stdio.h>
#include<stdlib.h>

void create(int **,int);
void input(int *,int);
void output(int *,int);
void bubble_sort(int *,int);

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

	/*printf("\nArray before sorting :\n");
	output(a,n);	*/

	bubble_sort(a,n);

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

void bubble_sort(int *a,int n)
{
	int swap = 1;
	
	int i=0, j, temp;

	while(swap==1 && i<=n-1)
	{
		swap=0;
		j=0;
		while(j<=n-i-1)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swap=1;
			}
			j++;
		}
		i++;
	}
	return;
}

