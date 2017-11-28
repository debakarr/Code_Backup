#include<iostream>

using namespace std;

void ExceptionExample(int x);

int main() {
	int num;

	cout << "\nEnter any number: ";
	cin >> num;
	ExceptionExample(num);


	cout << "\nEnter any number again: ";
	cin >> num;
	ExceptionExample(num);	return (0);
}

void ExceptionExample(int x) {
	try {
		if (x < 10)
			throw x;
		else
			throw 'x';
	} catch (int e) {
		cout << "\nNumber is less then 10 and number is " << x << endl;
	} catch (char c) {
		cout << "\nNumber is greater then or equal to 10.";
	} catch (...) {
		cout << "\nUnexpected Exception.";
	}
}
/*
Enter any number: 4

Number is less then 10 and number is 4

Enter any number again: 10

Number is greater then or equal to 10
*/