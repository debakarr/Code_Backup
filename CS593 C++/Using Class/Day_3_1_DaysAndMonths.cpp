#include<iostream>
//#include<iomanip>

using namespace std;

struct Month {
	char name[20];
	int days;
};

void Display(int [], char [][12], int);
void DisplayStruct(Month [], int );

int main() {
	const int NUM_MONTHS = 12;
	int DaysInMonths[NUM_MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,
	                                 31
	                               };
	char Months[][NUM_MONTHS] = { "January", "February", "March", "April",
	                              "May", "June", "July", "August", "September", "October", "November",
	                              "December"
	                            };
	Display(DaysInMonths, Months, NUM_MONTHS);

	Month months[NUM_MONTHS] = { { "January", 31 }, { "February", 28 }, {
			"March", 31
		}, { "April", 30 }, { "May", 31 }, { "June", 30 }, {
			"July", 31
		}, { "August", 31 }, { "September", 30 },
		{ "October", 31 }, { "November", 30 }, { "December", 31 }
	};

	cout << "\n";

	DisplayStruct(months, NUM_MONTHS);

	return (0);
}

void Display(int DaysInMonths[], char Months[][12], int NUM_MONTHS) {
	cout << "\nUsing char and int Array: \n";
	for (int i = 0; i < NUM_MONTHS; i++)
		cout <<  Months[i] << " - " << DaysInMonths[i] << "\n";
}

void DisplayStruct(Month months[], int NUM_MONTHS) {
	cout << "\nUsing Structure Array: \n";
	for (int i = 0; i < NUM_MONTHS; i++)
		cout <<  months[i].name << " - " << months[i].days << "\n";

}

/*
$ g++ Day_3_1_DaysAndMonths.cpp

$ ./a.out
Using char and int Array:
January - 31
February - 28
March - 31
April - 30
May - 31
June - 30
July - 31
August - 31
September - 30
October - 31
November - 30
December - 31


Using Structure Array:
January - 31
February - 28
March - 31
April - 30
May - 31
June - 30
July - 31
August - 31
September - 30
October - 31
November - 30
December - 31
*/