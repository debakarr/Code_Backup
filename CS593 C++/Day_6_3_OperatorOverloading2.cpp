#include<iostream>

using namespace std;

class OperatorOverload {
	int value ;
public:
	OperatorOverload() {
		value = 0 ;
	}

	OperatorOverload(int value) {
		this->value = value ;
	}

	OperatorOverload operator+(int op) {
		OperatorOverload r;
		r.value = value + op;
		return (r);
	}

		OperatorOverload operator+(OperatorOverload op) {
		this->value = this->value + op.value;
		return (*this);
	}

	OperatorOverload operator=(int op) {
		OperatorOverload r;
		r.value =  op;
		return (r);
	}

	OperatorOverload operator-(int op) {
		OperatorOverload r;
		r.value = value - op;
		return (r);
	}

	void display(void) {
		cout << value << "\n";
	}
};

int main() {
	OperatorOverload a, b(7);

	cout << "\na = ";
	a.display();

	cout << "\nb = ";
	b.display();

	cout << "\na = b + 7";
	a = b + 7;

	cout << "\na = ";
	a.display();

	cout << "\na = 7 + b";
	a = 7 + b;

	cout << "\na = ";
	a.display();

	return 0;
}