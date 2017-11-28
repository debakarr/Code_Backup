#include<iostream>

using namespace std;

class SimpleInterest {
	float t, p, r;
public:
	void getData();
	void calculateInterest();
};
void SimpleInterest::getData() {
	cout << "\nEnter the principal amount, time and rate of interest: ";
	cin >> p >> t >> r;
}

void SimpleInterest::calculateInterest() {
	cout << "\nSimple Interest of principal amount Rs. " << p << " at rate of " << r << "% for " << t << " years = Rs. " << (p * t * r) / 100;
}

int main() {
	SimpleInterest obj1;
	obj1.getData();
	obj1.calculateInterest();
	return (0);
}

/*
$ g++ Day_1_2_SimpleInterestNormal.cpp

$ a.exe

Enter the principal amount, time and rate of interest: 10000 2 15

Simple Interest of principal amount Rs. 10000 at rate of 15% for 2 years = Rs. 3000
*/