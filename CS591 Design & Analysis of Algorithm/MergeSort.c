#include<stdio.h>

void Input(int [], int);
void Merge(int[], int, int, int);
void MergeSort(int [], int, int);

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

	MergeSort(A, 0, n - 1);

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

void Merge(int A[], int p, int q, int r) {
	int n1 = q - p + 1, n2 = r - q;
	int i, j, k, L[n1 + 1], R[n2 + 1];
	for (i = 0; i < n1; i++)
		L[i] = A[p + i];
	for (j = 0; j < n2; j++)
		R[j] = A[q + j + 1];
	L[i] = 9999;
	R[j] = 9999;
	i = j = 0;
	for (k = p; k <= r; k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i++];
		}
		else {
			A[k] = R[j++];
		}
	}
}

void MergeSort(int A[], int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		Merge(A, p, q, r);
	}
}