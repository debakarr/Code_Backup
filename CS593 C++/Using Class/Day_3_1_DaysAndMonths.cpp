#include<iostream>
#include<iomanip>

using namespace std;

struct Month {
	string name;
	int days;
};

int main() {
	const int NUM_MONTHS = 12;
	int DaysInMonths[NUM_MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,
	                                 31
	                               };
	char Months[][NUM_MONTHS] = { "January", "February", "March", "April",
	                              "May", "June", "July", "August", "September", "October", "November",
	                              "December"
	                            };
	for (int i = 0; i < NUM_MONTHS; i++) {
		cout << setw(10) << Months[i] << setw(5) << DaysInMonths[i] << endl;
	}

	Month months[NUM_MONTHS] = { { "January", 31 }, { "February", 28 }, {
			"March", 31
		}, { "April", 30 }, { "May", 31 }, { "June", 30 }, {
			"July", 31
		}, { "August", 31 }, { "September", 30 },
		{ "October", 31 }, { "November", 30 }, { "December", 31 }
	};

	cout << endl;

	for (int i = 0; i < NUM_MONTHS; i++) {
		cout << setw(10) << months[i].name << setw(5) << months[i].days << endl;
	}

	return (0);
}
