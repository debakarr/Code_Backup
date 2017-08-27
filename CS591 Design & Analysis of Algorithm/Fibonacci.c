#include<stdio.h>

int Fibonacci(int);

int main() {
	printf("%d\n", Fibonacci(7));
	return (0);
}

int Fibonacci(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return (Fibonacci(n - 1) + Fibonacci(n - 2));
}