#include<iostream>
#define PI 3.14159

using namespace std;

class AreaOfCircle {
	float r;
public:
	void getData();
	void calculateArea();
};
void AreaOfCircle::getData() {
	cout << "\nEnter the radius: ";
	cin >> r;
}

void AreaOfCircle::calculateArea() {
	cout << "\nArea of circle with radius " << r << " = " << PI * r * r;
}

int main() {
	AreaOfCircle obj1;
	obj1.getData();
	obj1.calculateArea();
	return (0);
}
