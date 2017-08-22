#include<iostream>

using namespace std;

int calculateFactorial(int);

int main() {
	int n;

	cout << "\nEnter the number: ";
	cin >> n;

	cout << "Factorial = " << calculateFactorial(n);
	
	return (0);
}

int calculateFactorial(int n) {
	int f = 1, i = 1;
	while (i <= n) {
		f = f * i;
		i++;
	}
	return f;
}
