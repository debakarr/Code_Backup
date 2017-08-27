#include<stdio.h>

int powFirst(int, int);
int powSecond(int, int);

int main() {
	int resultFirst = powFirst(2, 5), resultSecond = powSecond(2, 7);
	printf("%d\t%d", resultFirst, resultSecond);
	return (0);
}

int powFirst(int X, int n) {
	if (n == 0)
		return (1);
	if (n % 2 == 0)
		return (powFirst(X, n / 2) * powFirst(X, n / 2));
	else
		return (X * powFirst(X, n / 2) * powFirst(X, n / 2));
}

int powSecond(int X, int n) {
	if (n == 0)
		return (1);
	int temp = powSecond(X, n / 2);

	if (n % 2 == 0)
		return (temp * temp);
	else
		return (X * temp * temp);
}