#include<stdio.h>
#include<stdlib.h>

int gcd(int ,int);

int main()
{
	system("clear");
	int a, b;
	printf("\nEnter the two numbers whoes GCD you want to find: ");
	scanf("%d%d", &a, &b);
	printf("\nGCD of %d and %d is %d\n", a, b, gcd(a, b));
	return(0);
}

int gcd(int a, int b)
{
	if(b == 0)
		return(a);
	else
		return(gcd(b, a%b));
}
