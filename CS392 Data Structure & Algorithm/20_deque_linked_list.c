#include<stdio.h>

typedef struct deque{
	int info;
	struct deque *left, *right;
}dq;

void deque_empty(dq *);
