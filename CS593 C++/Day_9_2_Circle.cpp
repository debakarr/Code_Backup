#include<iostream>

using namespace std;

template <class T>
class Circle {
	T radius;
public:
	Circle(T);
	~Circle();
	void area();
};

template<class T>
Circle <T>:: Circle(T radius) {
	this->radius = radius;
}

template<class T>
Circle<T>::~Circle() {}

template<class T>
void Circle<T>::area() {
	cout << "Area of circle with radius " << radius << " = " << (22.0 / 7)*radius*radius<<"\n\n";
};

int main() {
	int a;
	float b;
	double c;

	cout << "Enter the radius in integer: ";
	cin >> a;
	Circle<int> c1(a);
	c1.area();

	cout << "Enter the radius in float: ";
	cin >> b;
	Circle<float> c2(b);
	c2.area();

	cout << "Enter the radius in double: ";
	cin >> c;
	Circle<double> c3(c);
	c3.area();

	return (0);
}

/*
Enter the radius in integer: 6
Area of circle with radius 6 = 113.143

Enter the radius in float: 7.3
Area of circle with radius 7.3 = 167.483

Enter the radius in double: 9.005
Area of circle with radius 9.005 = 254.854
*/