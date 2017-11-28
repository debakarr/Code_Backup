#include<iostream>

using namespace std;

class Account
{
protected:
	static string bankName;
	double balance;
public:
	Account();
	~Account();
	void deposit(double);
	void withdraw(double);
};

string Account::bankName = "ABC Bank";

Account::Account() {
	balance = 0.0;
}

Account::~Account() {}

void Account::deposit(double amount) {
	balance = balance + amount;
}

void Account::withdraw(double amount) {
	balance = balance - amount;
}

class SavingsAccount: public Account {
public:
	int acc_no;
	float interest_rate;

	SavingsAccount();
	SavingsAccount(int, float);
	~SavingsAccount();
	void display();
};

SavingsAccount::SavingsAccount() {
	acc_no = 0;
	interest_rate = 0.0;
}

SavingsAccount::SavingsAccount(int acc_no, float interest_rate) {
	this->acc_no = acc_no;
	this->interest_rate = interest_rate;
}

SavingsAccount::~SavingsAccount() {}

void SavingsAccount::display() {
	cout << "Bank Name: " << bankName << endl;
	cout << "Account Number: " << acc_no << endl;
	cout << "Savings Balance: " << balance << endl;
}

class RecurringAccount: public Account {
public:
	int acc_no;
	float interest_rate;

	RecurringAccount();
	RecurringAccount(int, float);
	~RecurringAccount();
	void display();
};

RecurringAccount::RecurringAccount() {
	acc_no = 0;
	interest_rate = 0.0;
}

RecurringAccount::RecurringAccount(int acc_no, float interest_rate) {
	this->acc_no = acc_no;
	this->interest_rate = interest_rate;
}

RecurringAccount::~RecurringAccount() {}

void RecurringAccount::display() {
	cout << "\nBank Name: " << bankName << endl;
	cout << "Account Number: " << acc_no << endl;
	cout << "Recurring Balance: " << balance << "\n";
}

int main()
{
	int acc_no, interest_rate, balance;
	char c;

	cout << "\nEnter the Account number and interest rate for Savings Account: ";
	cin >> acc_no >> interest_rate;
	SavingsAccount s(acc_no, interest_rate);

	cout << "\nEnter the Account number and interest rate for Rucurring Account: ";
	cin >> acc_no >> interest_rate;
	RecurringAccount r(acc_no, interest_rate);

	do {
		int choice, subChoice;

		cout << "\n1. Savings \n2. Recurring\nEnter your choice: ";
		cin >> choice;

		cout << "\n1. Deposit\n2. Withdraw\n3. Display Balace\nEnter your choice: ";
		cin >> subChoice;

		if (subChoice != 3) {
			cout << "\nEnter the ammount: ";
			cin >> balance;
		}

		switch (choice) {
		case 1:
			if (subChoice == 1)
				s.deposit(balance);
			else if (subChoice == 2)
				s.withdraw(balance);
			else
				s.display();
			break;
		case 2:
			if (subChoice == 1)
				r.deposit(balance);
			else if (subChoice == 2)
				r.withdraw(balance);
			else
				r.display();
			break;
		default:
			cout << "\nInvaid choice.";
		}
		cout << "\nWant to deposit/withdraw more? (Y/N): ";
		cin >> c;
	} while (c == 'y' || c == 'Y');

	return 0;
}

/*
Enter the Account number and interest rate for Savings Account: 100001 15

Enter the Account number and interest rate for Rucurring Account: 100002 20

1. Savings
2. Recurring
Enter your choice: 1

1. Deposit
2. Withdraw
3. Display Balace
Enter your choice: 1

Enter the ammount: 6000

Want to deposit/withdraw more? (Y/N): y

1. Savings
2. Recurring
Enter your choice: 2

1. Deposit
2. Withdraw
3. Display Balace
Enter your choice: 1

Enter the ammount: 100000

Want to deposit/withdraw more? (Y/N): y

1. Savings
2. Recurring
Enter your choice: 1

1. Deposit
2. Withdraw
3. Display Balace
Enter your choice: 3

Bank Name: ABC Bank
Account Number: 100001
Savings Balance: 6000

Want to deposit/withdraw more? (Y/N): y

1. Savings
2. Recurring
Enter your choice: 2

1. Deposit
2. Withdraw
3. Display Balace
Enter your choice: 3

Bank Name: ABC Bank
Account Number: 100002
Recurring Balance: 100000

Want to deposit/withdraw more? (Y/N): n
*/