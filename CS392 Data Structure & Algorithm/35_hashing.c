#include<stdio.h>
#include<stdlib.h>
#define m 13
#define n 11

int insert_linearProbe(int *, int);
int search_linearProbe(int *, int);
int insert_quadraticProbe(int *, int);
int search_quadraticProbe(int *, int);
int insert_doubleProbe(int *, int);
int search_doubleProbe(int *, int);
void initialize(int *, int);

int main()
{
	system("clear");
	int a[m]={0}, ch, item, result;
		
	
	printf("\n***Considering hash function h(k) = k(mod m).***\n\n");
	
	while(1)
	{
		printf("\n1.Insert Linear Probing\n2.Search Linear Probing\n3.Insert Quadratic Probing\n4.Search Quadratic Probing\n5.Insert Double Hash\n6.Search Double Hash\n0.Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the key you want to insert into Hash table: ");
				scanf("%d", &item);
				insert_linearProbe(a,item);				
				break;
			case 2:
				printf("\nEnter the key whose position you want to know in Hash Table: ");
				scanf("%d", &item);
				result = search_linearProbe(a,item);
				if(result==-1)
					printf("\nKey (%d) not found in hash table\n", item);
				else
					printf("\nPosition of key(%d) : %d\n", item, result);
				break;
			case 3:
				printf("\nEnter the key you want to insert into Hash table: ");
				scanf("%d", &item);
				insert_quadraticProbe(a,item);				
				break;
			case 4:
				printf("\nEnter the key whose position you want to know in Hash Table: ");
				scanf("%d", &item);
				result = search_quadraticProbe(a,item);
				if(result==-1)
					printf("\nKey (%d) not found in hash table\n", item);
				else
					printf("\nPosition of key(%d) : %d\n", item, result);
				break;	
			case 5:
				printf("\nEnter the key you want to insert into Hash table: ");
				scanf("%d", &item);
				insert_doubleProbe(a,item);				
				break;
			case 6:
				printf("\nEnter the key whose position you want to know in Hash Table: ");
				scanf("%d", &item);
				result = search_doubleProbe(a,item);
				if(result==-1)
					printf("\nKey (%d) not found in hash table\n", item);
				else
					printf("\nPosition of key(%d) : %d\n", item, result);
				break;
			case 0:
				exit(0);
			default:
				printf("\nWrong Input!!Please Try again...\n");
		}
	
	}	
	return(0);
}

int insert_linearProbe(int *T, int k)
{
	int i=0,u,j;
	u=k%m;
	do{
		j=(u+i)%m;
		if(T[j]==0)
		{
			T[j]=k;
			return(j);
		}
		i++;
	}while(i!=m);
	return(-1);
}

int search_linearProbe(int *T, int k)
{
	int i=0,u,j;
	u=k%m;
	do{
		j=(u+i)%m;
		if(T[j]==k)
			return(j);
		i++;
	}while(T[j]!=0 || i!=m);
	return(-1);
}

int insert_quadraticProbe(int *T, int k)
{
	int i=0,u,j;
	u=k%m;
	do{
		j=(u+i*i)%m;
		if(T[j]==0)
		{
			T[j]=k;
			return(j);
		}
		i++;
	}while(i!=m);
	return(-1);
}

int search_quadraticProbe(int *T, int k)
{
	int i=0,u,j;
	u=k%m;
	do{
		j=(u+i*i)%m;
		if(T[j]==k)
			return(j);
		i++;
	}while(T[j]!=0 || i!=m);
	return(-1);
}

int insert_doubleProbe(int *T, int k)
{
	int i=0,u,v,j;
	u=k%m;
	v=1+(k%n);
	do{
		j=(u+i*v)%m;
		if(T[j]==0)
		{
			T[j]=k;
			return(j);
		}
		i++;
	}while(i!=m);
	return(-1);
}

int search_doubleProbe(int *T, int k)
{
	int i=0,u,v,j;
	u=k%m;
	v=1+(k%n);
	do{
		j=(u+i*v)%m;
		if(T[j]==k)
			return(j);
		i++;
	}while(T[j]!=0 || i!=m);
	return(-1);
}


