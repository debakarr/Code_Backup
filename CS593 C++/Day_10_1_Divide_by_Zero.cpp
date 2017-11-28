#include<iostream>

using namespace std;

int main() {
	float a, b;

	cout << "Enter two numbers: ";
	cin >> a >> b;

	try {
		if (b == 0)
			throw "Divide by zero exception.";
		cout << a << "/" << b << " = " << a / b << endl;
	}
	catch (const char *msg) {
		cout << msg << endl;
	}
	return (0);
}

/*
Enter two numbers: 6 2
6/2 = 3

Enter two numbers: 7 0
Divide by zero exception.
*/