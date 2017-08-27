#include<stdio.h>

int parent(int);
int left(int);
int right(int);
void MaxHeapify(int [], int, int);
void BuildMaxHeap(int [], int);
void HeapSort(int [], int);
void display(int[], int);
int heapSize;

int main() {
	int a[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	HeapSort(a, 10);
	display(a, 10);
	return (0);
}

int parent(int i) {
	return (i / 2+1);
}

int left(int i) {
	return (2 * i +1);
}

int right(i) {
	return (2 * i + 2);
}

void MaxHeapify(int A[], int i, int n) {
	int l = left(i), r = right(i), largest, temp;

	if (l <= n - 1 && A[l] > A[i])
		largest = l;
	else largest = i;

	if (r <= n - 1 && A[r] > A[largest])
		largest = r;

	if (largest != i) {
		temp = A[largest];
		A[largest] = A[i];
		A[i] = temp;
		MaxHeapify(A, largest, n);
	}
}

void BuildMaxHeap(int A[], int n) {
	int i;

	for (i = n / 2 - 1; i >= 0; i--)
		MaxHeapify(A, i, n);
}

void HeapSort(int A[], int n) {
	BuildMaxHeap(A, n);

	int i, temp;

	for (i = n - 1; i > 0; i--) {
		temp = A[0];
		A[0] = A[i];
		A[i] = temp;
		MaxHeapify(A, 0, --n);

	}
}

void display(int A[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}
}