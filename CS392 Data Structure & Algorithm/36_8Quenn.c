#include<stdio.h>
#include<stdlib.h>

int col[16];

void NQueen(int,int);

int main()
{
	int n;
	system("clear");
	printf("\nEnter the no. of queens :\n");
	scanf("%d",&n);
	NQueen(n,0);
	printf("\n");
	return(0);
}

void NQueen(int n,int k)
{
	int j, i,r, legal;
	static int cnt;
	
	for(j=0;j<n;j++)
	{
		legal=1;
		for(i=0;i<=k-1;i++)
		{
			if(col[i]==j || abs(col[i]-j)==abs(i-k))
			{
				legal=0;	
				break;
			}
		}
		if(legal)
		{
			col[k]=j;
			if(k==n-1)
			{
				printf("\nPossibilities %d: ",++cnt);
				for(r=0;r<n;r++)
					printf("%d ",col[r]);
			}
			else
				NQueen(n,k+1);
		}
	}
	return;
}

