#include<stdio.h>
#include<stdlib.h>

void create(int **,int);
void input(int *,int);
void output(int *,int);
void sort(int *,int);
int interpolation_search(int *, int, int, int);

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
	sort(a,n);

	printf("\nEnter the number you want to search : ");
	scanf("%d", &item);
	
	printf("\n%d elements in the list\n",n);
	output(a,n);
	
	pos = interpolation_search(a, 0, n-1, item);
	
	if(pos == -1)
		printf("\n%d not found in the list.\n", item);
	else
		printf("\n%d found in the position %d\n", item, pos + 1);
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

void sort(int *a,int n)
{
	int i, j, temp;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	return;
}

int interpolation_search(int *a, int lb, int ub, int key)
{
	int beg = lb, end = ub, pos,  j = -1;
	if(key<a[beg] || key> a[end])
		return(j);
	while(beg <= end && j== -1)
	{
		pos=beg + (((key - a[beg])*(end-beg))/(a[end]-a[beg]));
		if(key == a[pos])
			j = pos;
		else if(key < a[pos])
			end = pos-1;
		else
			beg = pos+1;
	}
	return(j);
}
