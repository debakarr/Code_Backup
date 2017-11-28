#include<iostream>

using namespace std;

class OperatorOverload {
	int value ;
public:
	OperatorOverload();

	OperatorOverload(int);

	~OperatorOverload();

	OperatorOverload operator ++ ();

	OperatorOverload operator -- ();

	OperatorOverload operator -- (int);

	OperatorOverload operator ++ (int);

	OperatorOverload operator+(OperatorOverload);

	OperatorOverload operator-(OperatorOverload);

	void display();
};

OperatorOverload::OperatorOverload() {
	value = 0 ;
}
OperatorOverload::OperatorOverload(int value) {
	this->value = value ;
}
OperatorOverload::~OperatorOverload() {}

OperatorOverload OperatorOverload::operator ++ () {
	return OperatorOverload(++value);
}

OperatorOverload OperatorOverload::operator -- () {
	return OperatorOverload(--value);
}

OperatorOverload OperatorOverload::operator -- (int) {
	return OperatorOverload(value--);
}

OperatorOverload OperatorOverload::operator ++ (int) {
	return OperatorOverload(value++);
}

OperatorOverload OperatorOverload::operator+(OperatorOverload op) {
	/*OperatorOverload r;
	r.value = value + op.value;*/
	return OperatorOverload(value + op.value);
}

OperatorOverload OperatorOverload::operator-(OperatorOverload op) {
	OperatorOverload r;
	r.value = value - op.value;
	return (r);
}

void OperatorOverload::display() {
	cout << value << "\n";
}

int main() {
	OperatorOverload a(3), b(7), c(4), d;

	cout << "\na = ";
	a.display();

	cout << "\nb = ";
	b.display();

	cout << "\nc = ";
	c.display();

	cout << "\n++a = ";
	++a;
	a.display();

	cout << "\nb-- = ";
	b--;
	b.display();

	cout << "\nd = a + b - c";
	d = a + b - c;

	cout << "\nd = ";
	d.display();

	return 0;
}