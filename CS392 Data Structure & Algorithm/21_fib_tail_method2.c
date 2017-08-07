#include<stdio.h>

void fibonacci(int *,int);

int main()
{
	system("clear");
	int n,f;
	printf("\nEnter the term position to be find in a fibonacci series: ");
	scanf("%d", &n);
	fibonacci(&f,n);
	printf("\nThe %d term of fibonacci series is %d\n", n, f);	
}

void fibonacci(int *f,int n)
{
	int fa=0,fb=1;
	if(n==0 || n==1)
	{
		*f=n;	
		return;
	}
	fibonacci(&fa,n-2);
	fibonacci(&fb,n-1);
	*f=fa+fb;
}
