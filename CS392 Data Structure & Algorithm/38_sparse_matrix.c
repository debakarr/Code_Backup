#include<stdio.h>
#define MAX 30

typedef struct sparse{
	int row;
	int col;
	int value;
}sm;

void input(sm *,int);
void output(sm *,int);
void transpose(sm *,sm *);

int main()
{
	system("clear");
	int n,r,c;
	sm a[MAX],b[MAX];
	printf("\nEnter the number of rows and column: ");
	scanf("%d%d", &r,&c);
	a[0].row=r;
	a[0].col=c;
	printf("\nEnter the number of non zero terms: ");	
	scanf("%d", &n);
	a[0].value=n;

	input(a,n);
	
	printf("\nMatrix before transpose: ");
	output(a,r);

	transpose(a,b);

	printf("\nMatrix after transpose: ");
	output(b,r);


	return(0);	
}

void input(sm *a,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\nEnter the (row, column, value) triplet [%d] : ",i);
		scanf("%d%d%d",&a[i].row,&a[i].col,&a[i].value);
	}
	return;	
}


void output(sm *a,int n)
{
	int i,j;
	printf("\nFormat : row\tcolumn\tnon-zero value\n");
	for(i=0;i<=n;i++)
	{
		printf("%5d%5d%5d",a[i].row,a[i].col,a[i].value);
		printf("\n");
	}			
	return;	
}

void transpose(sm *a,sm *b)
{
	int k=1,i,j;
	b[0].row=a[0].col;
	b[0].col=a[0].row;
	b[0].value=a[0].value;
	for(i=1;i<=a[0].row+1;i++)
		for(j=1;j<a[0].col;j++)
		{
			if(a[j].col==i)
			{
				b[k].row=a[j].col;
				b[k].col=a[j].row;
				b[k].value=a[j].value;
				k++;
			}
		}
	return;		
}
