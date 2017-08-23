#include<iostream>
#include <cstdlib>

using namespace std;

float calculate(float, float, char);

int main(int argc, char** argv) {
	float a = atof(argv[1]), b = atof(argv[3]);
	char c = argv[2][0];

	if (calculate(a, b, c) != -9999)
		cout << a << " " << c << " " << b << " = " << calculate(a, b, c) << endl;
	else
		cout << "\nInvalid Input." << endl;
	
	return (0);
}

float calculate(float a, float b, char c) {
	if (c == '+')
		return (a + b);
	else if (c == '-')
		return (a - b) ;
	else if (c == '*')
		return (a * b);
	else if (c == '/')
		if (b != 0)
			return (a / b);
		else
			return (-9999);
	else
		return (-9999);
}


/*

$ g++ Day_2_2_CalculatorNormal.cpp

$ ./a.out 100 + 54
100 + 54 = 154

*/