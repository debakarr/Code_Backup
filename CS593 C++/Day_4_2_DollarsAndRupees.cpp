#include<iostream>
#include <iomanip>

using namespace std;

class Dollar {
	float value;
public:
	void setValue(float value) {
		this->value = value;
	}
	float getValue() {
		return value;
	}
};

class Rupee {
	float value;
public:
	void setValue(float value) {
		this->value = value;
	}
	float getValue() {
		return value;
	}
};

Rupee convertIntoRupee(Dollar d) {
	Rupee r;
	r.setValue(d.getValue() * 60);
	return r;
}

Dollar convertIntoDollar(Rupee r) {
	Dollar d;
	d.setValue(r.getValue() / 60);
	return d;
}

int main() {
	Dollar d1, d2;
	Rupee r1, r2;
	d1.setValue(58);
	r1 = convertIntoRupee(d1);
	cout<<"\nDollars: "<<d1.getValue()<<" = Rupees: "<<r1.getValue();
	r2.setValue(67);
	d2 = convertIntoDollar(r2);
	cout<<"\nRupees: "<<r2.getValue()<<" = Dollars: "<<d2.getValue();
	return (0);
}