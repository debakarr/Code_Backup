#include<stdio.h>

void tower(int, char, char, char);
int c;
int main()
{
	system("clear");
	int n;
	printf("\nLet:\nS be the starting Peg,on which n disks are placed initially.");
	printf("\nA be the Auxiliary Peg that will be utilized as intermediate peg.");
	printf("\nD be the Destination Peg on which n disks to be moved.");
	printf("\nEnter the number of disks in the peg S: ");
	scanf("%d", &n);
	tower(n, 'S', 'A', 'D');
	printf("\nTotal no. of steps: %d\n",c);
	return(0);
}

void tower(int n,char c1, char c2, char c3)
{
	if(n == 1)
	{
		printf("\nStep %d: %c->%c ",++c, c1, c3);
		return;
	}
	tower(n - 1, c1, c3, c2);
	printf("\nStep %d: %c->%c ",++c, c1, c3);
	tower(n - 1, c2 ,c1, c3);
	return;
}
