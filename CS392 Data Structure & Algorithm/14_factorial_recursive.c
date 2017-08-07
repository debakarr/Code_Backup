#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int main()
{
	system("clear");
	int num;
	printf("\nEnter the number whose factorial you want to find: ");
	scanf("%d",&num);
	printf("\nFactorial of %d is %d\n", num, factorial(num));
	return(0);
}

int factorial(int n)
{
	if(n == 0)
		return(1);
	else
		return(n*factorial(n-1));
}
