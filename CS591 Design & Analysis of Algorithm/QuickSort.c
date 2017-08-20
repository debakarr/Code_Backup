#include<stdio.h>

void Input(int [], int);
int Partition(int[], int, int);
void QuickSort(int [], int, int);

int main() {
	int n, i;

	printf("\nEnter the number of elements you wan to store in the array: ");
	scanf("%d", &n);

	int A[n];

	printf("\nEnter %d values: ", n);
	Input(A, n);

	printf("\nBefore sorting: ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);

	QuickSort(A, 0, n - 1);

	printf("\nAfter sorting: ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);

	return (0);
}

void Input(int A[], int n) {
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
}

int Partition(int A[], int p, int r) {
	int x = A[r], i = p - 1, j, temp;
	for (j = p; j <= r - 1; j++) {
		if (A[j] <= x) {
			i++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;
	return (i + 1);
}

void QuickSort(int A[], int p, int r) {
	int q;
	if (p < r) {
		q = Partition(A, p, r);
		QuickSort(A, p, q - 1);
		QuickSort(A, q + 1, r);
	}
}