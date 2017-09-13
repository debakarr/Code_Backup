#include<stdio.h>
#include<time.h>

int Fibonacci(int);

int main() {
	double t;
	clock_t start, stop;
	int i;

	for (i = 0; i < 45; ++i)
	{
		start = clock();
		Fibonacci(i);
		stop = clock();

		t = (double)(stop - start) / CLOCKS_PER_SEC;

		printf("%f\n", t);
	}
	return (0);
}

int Fibonacci(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return (Fibonacci(n - 1) + Fibonacci(n - 2));
}