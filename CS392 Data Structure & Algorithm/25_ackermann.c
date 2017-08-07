#include<stdio.h>

int ackermann(int , int);

int main()
{
	system("clear");
	printf("\nA(1, 2) :\n");
	ackermann(1, 2);
	printf("\nA(1, 3) :\n");
	ackermann(1, 3);
	printf("\nA(1, 4) :\n");
	ackermann(1, 4);
	printf("\nA(1, 5) :\n");
	ackermann(1, 5);
	printf("\nA(2, 3) :\n");
	ackermann(2, 3);
	printf("\nA(2, 4) :\n");
	ackermann(2, 4);
	printf("\nA(2, 5) :\n");
	ackermann(2, 5);
	printf("\nA(2, 6) :\n");
	ackermann(2, 6);
	printf("\n");
	return(0);
}

int ackermann(int m, int n)
{
	if(m == 0)
	{
		printf("%d ", n + 1);
		return(n + 1);
	}
	else if(m != 0 && n == 0)
		return(ackermann(m - 1, 1));
	else
		return(ackermann(m - 1, ackermann(m, n -1)));
}
