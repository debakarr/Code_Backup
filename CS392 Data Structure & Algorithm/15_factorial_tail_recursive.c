#include<stdio.h>

int factAux(int, int);
int fact(int);

int main()
{
	int n, result, *p;
	printf("\nEnter the number whose factorial you want to find: ");
	scanf("%d", &n);
	printf("\nFactorial of %d is %d\n", n, fact(n));
	return(0);
}

int factAux(int n, int result)
{
	if(n == 0)
		return(result);
	else
		return(factAux(n-1, n*result));
}

int fact(int n)
{
    return(factAux(n, 1));
}
