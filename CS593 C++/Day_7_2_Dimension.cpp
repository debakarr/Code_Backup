#include <iostream>

using namespace std;

class Dimension {
public:
	Dimension();
	~Dimension();
	virtual void area();
};
Dimension::Dimension() {}
Dimension::~Dimension() {}
void Dimension::area() {
	cout << "Function to be override";
}

class Rectangle: public Dimension
{
	double l, b;
public:
	Rectangle(double, double);
	~Rectangle();
	void area();
};

Rectangle::Rectangle(double l, double b) {
	this->l = l;
	this->b = b;
}

Rectangle::~Rectangle() {}

void Rectangle::area() {
	cout << "Area of Rectangle of length " << l << " units and breadth " << b << " units = " << l*b << " sq units\n" << endl;
}

class Triangle: public Dimension
{
	double h, b;
public:
	Triangle(double, double);
	~Triangle();
	void area();
};

Triangle::Triangle(double h, double b) {
	this->h = h;
	this->b = b;
}

Triangle::~Triangle() {}

void Triangle::area() {
	cout << "Area of Triangle of height " << h << " units and breadth " << b << " units = " << 0.5 * h*b << " sq units\n" << endl;
}

class Circle: public Dimension
{
	double r;
public:
	Circle(double);
	~Circle();
	void area();
};

Circle::Circle(double r) {
	this->r = r;
}

Circle::~Circle() {}

void Circle::area() {
	cout << "Area of Circle of radius " << r << " units = " << (22.0 / 7) * r*r << " sq units\n" << endl;
}

int main() {
	int x, y;
	Dimension *d[3];

	cout << "Enter the radius of Circle: ";
	cin >> x;
	Circle c(x);
	d[0] = &c;
	d[0]->area();

	cout << "Enter the length and breath of Rectangle: ";
	cin >> x >> y;
	Rectangle r(x, y);
	d[1] = &r;
	d[1]->area();

	cout << "Enter the height and breath of Triangle: ";
	cin >> x >> y;
	Triangle t(x, y);
	d[2] = &t;
	d[2]->area();

	return (0);
}

/*
Enter the radius of Circle: 5
Area of Circle of radius 5 units = 78.5714 sq units

Enter the length and breath of Rectangle: 4 7
Area of Rectangle of length 4 units and breadth 7 units = 28 sq units

Enter the height and breath of Triangle: 6 2
Area of Triangle of height 6 units and breadth 2 units = 6 sq units
*/