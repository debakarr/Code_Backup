#include<stdio.h>

void mColouring(int);
void nextValue(int);

int g[20][20], x[20], m, n;

int main() {
	int e, a, b, i, j;

	printf("\nEnter the number of vertices and edges: ");
	scanf("%d %d", &n, &e);

	for (i = 1; i <= e; i++)
	{
		printf("\nEnter vertex pair: ");
		scanf("%d %d", &a, &b);
		g[a][b] = 1;
		g[b][a] = 1;
	}

	for (i = 1; i <= n; ++i)
		x[i] = 0;

	printf("\nEnter how many colors to color with: ");
	scanf("%d", &m);

	printf("\nNumber of ways to colour the graph: \n");
	mColouring(1);

	return (0);
}

void mColouring(int k) {
	int i;
	do {
		nextValue(k);
		if (x[k] == 0)
			break;
		if (k == n) {
			for (i = 1; i <= n; i++)
				printf("%d ", x[i]);
			printf("\n");
		}
		else
			mColouring(k + 1);
	} while (1);
}

void nextValue(int k) {
	int j;
	do {
		x[k] = (x[k] + 1) % (m + 1);
		if (x[k] == 0)
			return;
		for (j = 1; j <= n; j++)
			if (g[k][j] != 0 && x[j] == x[k])
				break;
		if (j == n + 1)
			return;

	} while (1);
}