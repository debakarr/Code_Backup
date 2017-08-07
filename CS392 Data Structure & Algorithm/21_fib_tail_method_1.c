#include<stdio.h>

int fibonacci(int,int,int);

int main()
{
	system("clear");
	int n;
	printf("\nEnter the term position to be find in a fibonacci series: ");
	scanf("%d", &n);
	printf("\nThe %d term of fibonacci series is %d\n", n, fibonacci(n,-1,1));	
}

int fibonacci(int n,int a,int b)
{
	if(n==0)	
		return b;
	else
		return(fibonacci(n-1,b,a+b));
}
