#include<iostream>
#include<iomanip>

using namespace std;

class Clock
{
	int hour, minute;
public:
	Clock() {
		hour = minute = 0;
	}

	Clock(int h, int m) {
		hour = h;
		minute = m;
	}

	void displayTime() {
		cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute;
	}

	Clock addTime(Clock c) {
		Clock newTime;

		if (c.hour + hour >= 24)
			newTime.hour = c.hour + hour - 24;
		else
			newTime.hour = c.hour + hour;
		if (c.minute + minute >= 60) {
			newTime.minute = c.minute + minute - 60;
			newTime.hour++;
		}
		else
			newTime.minute = c.minute + minute;

		return newTime;
	}


};
int main()
{
	Clock c1(23, 59), c2(5, 6), c3;
	c3 = c1.addTime(c2);
	c1.displayTime();
	cout << " + ";
	c2.displayTime();
	cout << " = ";
	c3.displayTime();
	return 0;
}