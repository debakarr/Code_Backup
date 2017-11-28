#include<iostream>
#include<map>
#include<cstdlib>

using namespace std;

class Student {
	int age;
	string name;
public:
	Student(int, string);
	~Student();
	void show();
};

Student::Student(int age, string name) {
	this->age = age;
	this->name = name;
}

Student::~Student() {}

void Student::show() {
	cout << name << "\t" << age;
}

void show(map<string, Student> &m) {
	map<string, Student>::iterator itr = m.begin();

	for (; itr != m.end(); itr++) {
		cout << "\n" << itr->first << "\t";
		itr->second.show();
	}
}

int main() {
	system("clear");
	map<string, Student> m;
	string rollNumber, StudentName;
	int age;

	for (int i = 1; i <= 3; i++) {
		cout<<"Enter the student data: ";
		cin >> rollNumber >> age;
		getline(cin, StudentName);
		m.insert(pair<string, Student>(rollNumber, Student(age, StudentName)));
	}

	cout << "\nRoll\tName\tAge\n";
	show(m);

	cin.clear();

	cout << "\n\nEnter the roll number to search: ";
	getline(cin, rollNumber);
	map<string, Student>::iterator itr = m.find(rollNumber);

	if (itr != m.end()) {
		cout << "\n" << itr->first << "\t";
		itr->second.show();
	} else
		cout << "No student registered with roll number " << rollNumber<<endl;
}

/*
Enter the student data: 1001 20 Debakar Roy
Enter the student data: 1002 19 Dr Null
Enter the student data: 1003 18 Baka

Roll	Name	Age

1001	 Debakar Roy	20
1002	 Dr Null	19
1003	 Baka	18

Enter the roll number to search: 1002

1002	 Dr Null	19
*/