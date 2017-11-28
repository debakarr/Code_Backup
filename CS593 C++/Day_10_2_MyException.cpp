#include<iostream>

using namespace std;

bool isPrimeNum(int);

class MyException {
	string msg;
public:
	MyException();
	MyException(string);
	~MyException();
	void showMsg();
};

MyException::MyException() {
	msg = "Number is prime exception.";
}

MyException::MyException(string msg) {
	this->msg = msg;
}

MyException::~MyException() {}

void MyException::showMsg() {
	cout << msg << endl;
}

int main()
{
	int num;

	cout << "Enter a number: ";
	cin >> num;

	try {
		if (num == 0) {
			throw num;
		}
		if (isPrimeNum(num)) {
			throw MyException();
		}

		cout << "Number entered: " << num << endl;

	}
	catch (int i) {
		cout << "Throw integer exception with value " << i << endl;
	}
	catch (MyException e) {
		e.showMsg();
	}
	catch (...) {
		cout << "Unexpected Exception" << endl;
	}

	return 0;
}

bool isPrimeNum(int num) {
	for (int i = 2; i <= num / 2; ++i){
		if (num % i == 0)
			return false;
	}
	return true;
}

/*
Enter a number: 127
Number is prime exception.

Enter a number: 0
Throw integer exception with value 0

Enter a number: 26
Number entered: 26
*/