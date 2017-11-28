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


/*
$ g++ Day_1_1_AreaOfCircleNormal.cpp

$ a.exe

Enter the radius: 6

Area of circle with radius 6 = 113.097
*/