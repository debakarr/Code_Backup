/*
Algorithm LinearSearch(A, v, n)
Input: A is an array with n elements and a value v which is to be search.
Output: An index i such that v = A[i] or nil if v does not belongs to A
if n = -1 then
	return n
end if
if A[n] = v then
	return n
end if
LinearSearch(A, v, n - 1)
*/

#include<stdio.h>

void Input(int [], int);
int LinearSearch(int [], int, int);

int main() {
	int n, pos, v;

	printf("\nEnter the number of elements you wan to store in the array: ");
	scanf("%d", &n);

	int A[n];

	printf("\nEnter %d values: ", n);
	Input(A, n);

	printf("\nEnter the value you want to search: ");
	scanf("%d", &v);

	pos = LinearSearch(A, v, n);

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

int LinearSearch(int A[], int v, int n) {
	if (n == -1)
		return (n);
	if (A[n] == v)
		return (n);
	LinearSearch(A, v, n - 1);
}

/*
$ gcc LinearSearchRecursive.c

$ ./a.out

Enter the number of elements you wan to store in the array: 8

Enter 8 values: 1 2 3 4 5 6 7 8

Enter the value you want to search: 4

4 found in position: 4 in array A.
*/