#include<stdio.h>

void countingSort(int [], int [], int, int);
void display(int[], int);

int main() {
	int a[] = {5, 3, 8, 2, 9, 1, 10}, b[7];
	countingSort(a, b, 10 , 7);
	return (0);
}

void countingSort(int A[], int B[], int k, int n) {
	int C[k + 1], i, j;

	for (i = 0; i <= k; i++) {
		C[i] = 0;
	}


	for (j = 0; j < n; j++)
		C[A[j]] = C[A[j]] + 1;

	for (i = 1; i <= k; i++)
		C[i] = C[i] + C[i - 1];

	for (j = n - 1; j >= 0; j--) {
		B[C[A[j]] - 1] = A[j];
		C[A[j]] = C[A[j]] - 1;
	}
}

void display(int A[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}
}