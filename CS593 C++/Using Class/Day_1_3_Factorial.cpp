#include<iostream>

using namespace std;

class Factorial {
	float n;
public:
	void getData();
	int calculateFactorial();
};
void Factorial::getData() {
	cout << "\nEnter the number: ";
	cin >> n;
}

int Factorial::calculateFactorial() {
	int f = 1, i = 1;
	while (i <= n) {
		f = f * i;
		i++;
	}
	return f;
}

int main() {
	Factorial obj1;
	obj1.getData();
	cout << "Factorial = " << obj1.calculateFactorial();
	return (0);
}
