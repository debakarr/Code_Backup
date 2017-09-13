#include<stdio.h>

void MatrixChainOrder(int [], int, int [][10], int [][10]);
void PrintOptimalParens(int [][10], int, int);


int main() {

	int n = 4;
	int p[5] = {10,20,50,1,100};

	int m[10][10];
	int s[10][10];

	MatrixChainOrder(p, n, m, s);
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			printf("%d  ", m[i][j]);
		}
		printf("\n");
	}

	PrintOptimalParens(s, 1, n);

	return 0;
}

void MatrixChainOrder(int p[], int n, int m[][10], int s[][10])
{
	int i;
	//initialize our array
	for (i = 1; i <= n; i++)
		m[i][i] = 0;

	int l;
	for (l = 2; l <= n; l++)
	{
		for (i = 1; i <= (n - l + 1); i++)
		{
			int j = i + l - 1;
			m[i][j] = 9999;
			int k;
			for (k = i; k <= (j - 1); k++)
			{
				int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];

				//int old = m[i][j];
				if (q < m[i][j] || m[i][j] == 9999)
				{
					m[i][j] = q;
					s[i][j] = k;
				}
			}
		}
	}

}

void PrintOptimalParens(int s[][10], int i, int j)
{
	if (i == j)
		printf("A%d", i);
	else {
		printf("(");
		PrintOptimalParens(s, i, s[i][j]);
		PrintOptimalParens(s, s[i][j] + 1, j);
		printf(")");
	}
}