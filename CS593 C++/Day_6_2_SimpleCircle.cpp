#include<iostream>

using namespace std;

class SimpleCircle {
	double radius ;
public:
	SimpleCircle();

	SimpleCircle(int);

	~SimpleCircle();

	SimpleCircle operator ++ ();

	SimpleCircle operator -- ();

	SimpleCircle operator -- (int);

	SimpleCircle operator ++ (int);

	SimpleCircle operator = (SimpleCircle);

	void display();
};

SimpleCircle::SimpleCircle() {
	radius = 0 ;
}

SimpleCircle::SimpleCircle(int radius) {
	this->radius = radius ;
}

SimpleCircle::~SimpleCircle() {}

SimpleCircle SimpleCircle::operator ++ () {
	return SimpleCircle(++radius);
}

SimpleCircle SimpleCircle::operator -- () {
	return SimpleCircle(--radius);
}

SimpleCircle SimpleCircle::operator -- (int) {
	return SimpleCircle(radius--);
}

SimpleCircle SimpleCircle::operator ++ (int) {
	return SimpleCircle(radius++);
}

SimpleCircle SimpleCircle::operator = (SimpleCircle r) {
	radius = r.radius;
	return (*this);
}

void SimpleCircle::display() {
	cout << radius << "\n";
}


int main() {
	SimpleCircle a, b(9);

	cout << "\na = ";
	a.display();

	cout << "\nb = ";
	b.display();

	cout << "\n++a = ";
	++a;
	a.display();

	cout << "\nb-- = ";
	b--;
	b.display();

	cout << "\nAfter b = a";
	b = a;

	cout << "\nb = ";
	b.display();

	return 0;
}