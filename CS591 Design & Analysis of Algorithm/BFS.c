#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 20

typedef struct queue {
	int value[MAX], r, f;
} Q;

typedef struct node {
	struct node *next;
	int vertex;
} G;

G *graph[MAX];
int n;


void enQueue(Q *, int);
int deQueue(Q *);
bool isEmpty(Q *);
bool isFull(Q *);

void makeGraph();
void insertEdge();

void BFS(int);

int main() {

	printf("\nEnter number of vertices: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		graph[i] = NULL;
	}

	makeGraph();

	BFS(1);
}

void BFS(int v)
{
	int w, i, visited[MAX], distance[MAX], pre[MAX];
	Q q;
	G *p;

	q.r = q.f = -1;

	for (i = 0; i <= n; i++) {
		visited[i] = 0;
		distance[i] = -1;
		pre[i] = -1;
	}

	enQueue(&q, v);

	printf("\nVisited\tDist\tPre\n%d\t0\tNIL", v);

	visited[v] = 1;
	distance[v] = 0;
	pre[v] = -1;

	while (!isEmpty(&q))
	{
		v = deQueue(&q);

		for (p = graph[v]; p != NULL; p = p->next)
		{
			w = p->vertex;

			if (visited[w] == 0)
			{
				enQueue(&q, w);
				visited[w] = 1;
				distance[w] = distance[v] + 1;
				pre[w] = v;
				printf("\n%d\t%d\t%d", w, distance[w], pre[w]);
			}
		}
	}
	printf("\n");
}


void enQueue(Q *queue, int value) {
	if (isFull(queue))
		return;
	if (queue->r == -1) {
		queue->r = queue->f = 0;
		queue->value[queue->r] = value;
	}
	else {
		++queue->r;
		queue->value[queue->r] = value;
	}
}

int deQueue(Q *queue) {
	if (isEmpty(queue))
		return -1;

	int temp = queue->value[queue->r];
	if (queue->r == queue->f)
		queue->r = queue->f = -1;
	else
		++queue->f;

	return temp;
}

bool isEmpty(Q *queue) {
	if (queue->r == -1)
		return true;
	else
		return false;
}

bool isFull(Q *queue) {
	if (queue->r == MAX - 1)
		return true;
	else
		return false;
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
		insertEdge(y, x);
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

/*
Enter number of vertices: 5

Enter number of edges: 6

Enter edge 1: 1 4

Enter edge 2: 3 4

Enter edge 3: 5 3

Enter edge 4: 4 5

Enter edge 5: 5 2

Enter edge 6: 3 2

Visited	Dist	Pre
1		0		NIL
4		1		1
3		2		4
5		2		4
2		3		5
*/