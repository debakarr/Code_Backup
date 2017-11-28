#include<stdio.h>
#include<stdlib.h>
#define MAX 20

void DFS();
void DFS_VISIT(int);
void makeGraph();
void insertEdge();
void PrintEdges() ;

typedef struct node {
	struct node *next;
	int vertex;
} G;

G *graph[MAX];
int n, visited[MAX], pre[MAX], d[MAX], time, f[MAX];

int main() {

	printf("\nEnter number of vertices: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		graph[i] = NULL;
	}

	makeGraph();

	DFS();
}

void makeGraph(G graph, int n) {
	int i, x, y, e;

	printf("\nEnter number of edges: ");
	scanf("%d", &e);

	for (int i = 0; i < e; ++i)
	{
		printf("\nEnter edge %d: ", i + 1);
		scanf("%d %d", &x, &y);

		insertEdge(x, y);
	}
}

void insertEdge(int x, int y) {
	G *p, *q;

	q = (G *)malloc(sizeof(G));
	q->vertex = y;
	q->next = NULL;

	if (graph[x] == NULL)
		graph[x] = q;
	else {
		p = graph[x];
		while (p->next != NULL)
			p = p->next;
		p->next = q;
	}
}

void DFS() {
	int i;

	for (i = 1; i <= n; ++i) {
		visited[i] = 0;
		d[i] = -1;
		pre[i] = -1;
	}

	time = 0;

	for (i = 1; i <= n; i++) {
		if (visited[i] == 0) {
			DFS_VISIT(i);
		}
	}

	printf("\nNode\tDist\tPre\tFinal\n");
	for (i = 1; i <= n; ++i) {
		printf("%d\t%d\t%d\t%d\n", i, d[i], pre[i], f[i]);
	}

	PrintEdges();
}

void DFS_VISIT(int u) {
	time++;
	d[u] = time;
	visited[u] = 1;
	int w;
	G *p;

	for (p = graph[u]; p != NULL; p = p->next) {
		w = p->vertex;
		if (visited[w] == 0) {
			visited[w] = 1;
			pre[w] = u;
			DFS_VISIT(w);
		}
	}
	time++;
	f[u] = time;

}

void PrintEdges() {
	int i, u, w, treeEdge, backEdge, forwardEdge, crossEdge;
	treeEdge = backEdge = forwardEdge = crossEdge = 0;
	G *p;
	printf("\n");
	for (i = 1; i <= n; i++) {
		for (p = graph[i]; p != NULL; p = p->next) {
			w = p->vertex;
			u = i;
			if (d[u] < d[w] && f[u] > f[w]) {
				treeEdge++;
				printf("Tree edge %d: (%d, %d)\n", treeEdge, u, w);
			}
			else if (d[u] > d[w] && f[u] < f[w]) {
				backEdge++;
				printf("Back edge %d: (%d, %d)\n", backEdge, u, w);
			}
			else if (d[u] < d[w] && f[u] > f[w]) {
				forwardEdge++;
				printf("Forward edge %d: (%d, %d)\n", forwardEdge, u, w);
			}
			else if (d[u] > d[w] && f[u] > f[w]) {
				crossEdge++;
				printf("Cross edge %d: (%d, %d)\n", crossEdge, u, w);
			}
		}
	}
	printf("\nTree Edge: %d, Back Edge: %d, Forward Edge: %d, Cross Edge: %d\n", treeEdge, backEdge, forwardEdge, crossEdge);
}

/*
Enter number of vertices: 5

Enter number of edges: 6

Enter edge 1: 1 2

Enter edge 2: 3 2

Enter edge 3: 4 1

Enter edge 4: 4 2

Enter edge 5: 2 5

Enter edge 6: 5 3

Node	Dist	Pre	Final
1	1	-1	8
2	2	1	7
3	4	5	5
4	9	-1	10
5	3	2	6

Tree edge 1: (1, 2)
Tree edge 2: (2, 5)
Back edge 1: (3, 2)
Cross edge 1: (4, 1)
Cross edge 2: (4, 2)
Tree edge 3: (5, 3)

Tree Edge: 3, Back Edge: 1, Forward Edge: 0, Cross Edge: 2

*/