#include<iostream>

using namespace std;

float calculateArea(float);

int main() {
	float r;

	cout << "\nEnter the radius: ";
	cin >> r;

	cout << "\nArea of circle with radius " << r << " = " << calculateArea(r);

	return (0);
}

float calculateArea(float r) {
	return (3.14159 * r * r);
}