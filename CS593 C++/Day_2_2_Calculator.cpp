#include<iostream>
#include <stdlib.h>

using namespace std;

class Calculator {
public:
	void calculate(float a, float b, char c);
};

void Calculator::calculate(float a, float b, char c) {
	if (c == '+')
		cout << a << " + " << b << " = " << (a + b) << endl;
	else if (c == '-')
		cout << a << " + " << b << " = " << (a - b) << endl;
	else if (c == '*')
		cout << a << " * " << b << " = " << (a * b) << endl;
	else if (c == '/')
		cout << a << " / " << b << " = " << (a / b) << endl;
	else
		cout << "Invalid input." << endl;
}

int main(int argc, char** argv) {
	float a = atof(argv[1]), b = atof(argv[3]);
	char c = argv[2][0];
	Calculator c1;
	c1.calculate(a, b, c);
	return (0);
}
