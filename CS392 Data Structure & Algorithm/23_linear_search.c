#include<stdio.h>
#define SIZE 5

int linear_search(int *, int, int);

int main()
{	
	system("clear");
	int a[SIZE] = {11, 22, 33, 44, 55}, item, pos;
	printf("\nEnter the element you want to search for : ");
	scanf("%d", &item);
	pos = linear_search(a, SIZE, item);
	if(pos == -1)
		printf("\n%d not found in the array.\n", item);
	else
		printf("\n%d found at position %d\n", item, pos + 1);
	return(0);
}

int linear_search(int *A, int size, int key)
{
	int i = 0, loc = -1;
	while(i < SIZE)
	{
		if(key == A[i])
		{
			loc = i;
			break;
		}	
		i++;
	}	
	return(loc);	
}
