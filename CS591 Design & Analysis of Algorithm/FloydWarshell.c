#include<stdio.h>
#define V 4
#define INF 9999

int Dist[V][V];
int Pre[V][V];

void FloydWarsall(int [][V]);
void Print(int [][V]);
void PrintAllPairShortestPath(int [][V], int, int) ;

int main() {

	int W[V][V] = {{0,   7,  5, INF}, {INF, 0, 7,  6}, {INF, INF, 0,   INF}, {4, 1, 11, 0}};

	FloydWarsall(W);
	PrintAllPairShortestPath(Pre, 0, 3);
	return 0;
}

void FloydWarsall(int W[][V]) {
	int i, j, k;

	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++) {
			Dist[i][j] = W[i][j];
			if (i == j || W[i][j] == INF)
				Pre[i][j] = INF;
			else
				Pre[i][j] = i;
		}

	for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				if (Dist[i][j] > Dist[i][k] + Dist[k][j]) {
					Dist[i][j] = Dist[i][k] + Dist[k][j];
					Pre[i][j] = Pre[k][j];
				}
			}
		}
	}

	printf("\nShortest path distance between vertices: \n");
	Print(Dist);

	printf("\nPredecessor matrix: \n");
	Print(Pre);
}

void Print(int Arr2D[][V]) {
	int i, j;

	for (i = 0; i < V; i++) {
		for (j = 0; j < V; j++) {
			if (Arr2D[i][j] == 9999)
				printf("INF\t");
			else
				printf("%d\t", Arr2D[i][j]);
		}
		printf("\n");
	}
}

void PrintAllPairShortestPath(int Pre [][V], int i, int j) {
	if (i == j)
		printf("%d ", i);
	else if (Pre[i][j] == INF)
		printf("No path from %d to %d exist\n", i, j);
	else {
		PrintAllPairShortestPath(Pre, i, Pre[i][j]);
		printf("%d ", j);
	}
}