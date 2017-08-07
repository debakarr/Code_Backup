#include<stdio.h>

int fibonacci(int);

int main()
{
	system("clear");
	int n;
	printf("\nEnter the term position to be find in a fibonacci series: ");
	scanf("%d", &n);
	printf("\nThe %d term of fibonacci series is %d\n", n, fibonacci(n));	
}

int fibonacci(int n)
{
	int FIBN;
	if(n == 0 || n == 1)
	{
		FIBN = n;
		return(FIBN);
	}
	FIBN = fibonacci(n - 2) + fibonacci(n - 1);
	return(FIBN);	
}
