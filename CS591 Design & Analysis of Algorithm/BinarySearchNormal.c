#include<stdio.h>

void Input(int [], int);
int BinarySearch(int [], int, int);

int main() {
	int n, pos, v;

	printf("\nEnter the number of elements you wan to store in the array: ");
	scanf("%d", &n);

	int A[n];

	printf("\nEnter %d values: ", n);
	Input(A, n);

	printf("\nEnter the value you want to search: ");
	scanf("%d", &v);

	pos = BinarySearch(A, v, n);

	if (pos == -1)
		printf("\nValue not found in array A.");
	else
		printf("\n%d found in position: %d in array A.", v, pos + 1);
	return (0);
}

void Input(int A[], int n) {
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
}

int BinarySearch(int A[], int v, int n) {
	int l = 0, r = n, mid;

	while (l <= r) {
		mid = (l + r) / 2;
		if (A[mid] == v)
			return (mid);
		if (A[mid] < v)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}

/*
$ gcc BinarySearchNormal.c

$ ./a.out

Enter the number of elements you wan to store in the array: 8

Enter 8 values: 1 2 3 4 5 6 7 8

Enter the value you want to search: 4

4 found in position: 4 in array A.
*/