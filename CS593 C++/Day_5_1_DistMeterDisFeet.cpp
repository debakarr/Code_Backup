#include<iostream>

using namespace std;

//class DistMeter;
class DistFeet;

class DistMeter {
	float meter, cm;
public:
	DistMeter(float meter, float cm) {
		this->meter = meter;
		this->cm = cm;
	}

	float getMeter() {
		return (meter);
	}

	float getCm() {
		return (cm);
	}

	void Display() {
		cout << "\nDistance = " << meter << " meters and " << cm << " centimeters";
	}

	friend DistMeter Add(DistMeter dm, DistFeet df);
};

class DistFeet {
	float feet, inches;
public:
	DistFeet(float feet, float inches) {
		this->feet = feet;
		this->inches = inches;
	}

	float getFeet() {
		return (feet);
	}

	float getInches() {
		return (inches);
	}

	void Display() {
		cout << "\nDistance = " << feet << " feets and " << inches << " inches";
	}

	friend DistFeet Add(DistFeet df, DistMeter dm);
};

DistMeter Add(DistMeter dm, DistFeet df) {
	float meter;
	meter = dm.getMeter() + (dm.getCm() / 100) + (df.getFeet() * 0.3048) + (df.getInches() * 0.0254);
	DistMeter dmNew(meter, 0);
	return (dmNew);
}

DistFeet Add(DistFeet df, DistMeter dm) {
	float feet;
	feet = df.getFeet() + (df.getInches() / 12) + (dm.getMeter() * 3.284) + (dm.getCm() * 0.0328084);
	DistFeet dfNew(feet, 0);
	return (dfNew);
}

int main() {
	DistMeter dm(50, 70);
	DistFeet df(60, 50);

	DistMeter dm2(0, 0);
	dm2 = Add(dm, df);
	dm2.Display();
	return (0);
}