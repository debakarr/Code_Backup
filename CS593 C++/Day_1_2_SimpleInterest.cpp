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
	cout << "\nSimple Interest = " << (p * t * r) / 100;
}

int main() {
	SimpleInterest obj1;
	obj1.getData();
	obj1.calculateInterest();
	return (0);
}
