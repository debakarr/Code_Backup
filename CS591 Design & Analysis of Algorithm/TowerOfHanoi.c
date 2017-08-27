#include <stdio.h>

void TowerOfHanoi(int, char, char, char);

int main() {
	int n = 4;
	TowerOfHanoi(n, 'A', 'C', 'B');
	return 0;
}

void TowerOfHanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("\nDisk 1: %c -> %c", A, B);
		return;
	}
	TowerOfHanoi(n - 1, A, C, B);
	printf("\nDisk %d: %c -> %c", n, A, B);
	TowerOfHanoi(n - 1, C, B, A);
}