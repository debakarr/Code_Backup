#include<iostream>
#include<cstring>

using namespace std;

class String2;
class String1
{
	char value[20];
public:
	String1();
	void setdata(char [20]);
	void print();
	int compareString(String1);
	friend void compareTwo(String1, String2);
};

String1::String1() {
	memset(value, ' ', 20);
	value[20]='\0';
}

void String1::setdata(char value[20]) {
	strcpy(this->value, value);
}

void String1::print() {
	for (int i = 0; i < strlen(value); i++)
		cout << value[i];
}

int String1::compareString(String1 s) {
	return (!strcmp(value, s.value));
}

class String2
{
	char value[20];
public:
	String2();
	void setdata(char [20]);
	void print();
	int compareString(String2);
	friend void compareTwo(String1, String2);
};

String2::String2() {
	memset(value, ' ', 20);
	value[20]='\0';
}

void String2::setdata(char value[20]) {
	strcpy(this->value, value);
}

void String2::print() {
	for (int i = 0; i < strlen(value); i++)
		cout << value[i];
}

int String2::compareString(String2 s) {
	return (!strcmp(value, s.value));
}

void compareTwo(String1 s1, String2 s2) {
	if (strcmp(s1.value, s2.value) == 0)
		cout << "String are equal.";
	else
		cout << "String are not equal.";
}

int main()
{
	String1 s1, s2;
	String2 s3, s4;

	char c1[] = "Myname", c2[] = "YourName";


	s1.setdata(c1);
	s2.setdata(c2);

	s3.setdata(c1);
	s4.setdata(c1);

	cout<<s4.compareString(s3)<<endl;

	compareTwo(s2, s3);
	return 0;
}