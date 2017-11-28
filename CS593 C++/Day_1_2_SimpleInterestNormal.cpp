#include<iostream>

using namespace std;

float calculateInterest(float, float, int);

int main() {
	float p, r;
	int t;

	cout << "\nEnter the principal amount, time and rate of interest: ";
	cin >> p >> t >> r;

	cout << "\nSimple Interest of principal amount Rs. " << p << " at rate of " << r << "% for " << t << " years = Rs. " << calculateInterest(p, r, t);

	return (0);
}

float calculateInterest(float p, float r, int t) {
	return ((p * t * r) / 100);
}

/*
$ g++ Day_1_2_SimpleInterestNormal.cpp

$ a.exe

Enter the principal amount, time and rate of interest: 10000 2 15

Simple Interest of principal amount Rs. 10000 at rate of 15% for 2 years = Rs. 3000
*/