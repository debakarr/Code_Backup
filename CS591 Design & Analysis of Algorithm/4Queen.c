#include<stdio.h>
#include<stdlib.h>

int x[20];
void queen(int , int );
void print(int );
int place(int , int );


int main()
{
  int i, j;

  printf("\n4 Queens Problem Solution: ");
  queen(1, 4);
  return 0;
}

void print(int n)
{
  int i, j, count = 0;
  printf("\n\nSolution %d:\n", ++count);


  for (i = 1; i <= n; ++i)
  {
    printf("\n\n");
    for (j = 1; j <= n; ++j)
    {
      if (x[i] == j)
        printf("Q\t");
      else
        printf("-\t");
    }
  }
  printf("\n");
}

int place(int k, int i)
{
  int j;
  for (j = 1; j <= k - 1; ++j)
  {
    if (x[j] == i || (abs(x[j] - i) == abs(j - k)))
      return 0;
  }
  //printf("\n(%d, %d)", j-1, k);

  return 1;
}

void queen(int k, int n)
{
  int i;
  for (i = 1; i <= n; ++i)
  {
    if (place(k, i))
    {
      x[k] = i;
      //printf("\n(%d)", x[k]);
      if (k == n)
        print(n);
      else
        queen(k + 1, n);
    }
  }
}