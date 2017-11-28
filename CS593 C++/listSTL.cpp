#include<iostream>
#include<list>
#include<cstdlib>

using namespace std;

void show(list<int> &);

int main() {
	system("clear");
	list<int> l1, l2;
	//list<int> l2;
	int num;

	cout << "\nInserting 5 random number in list 1:";
	for (int i = 0; i < 5; i++) {
		num = rand() % 20;
		cout << "\nInserting " << num << " in List 1...";
		l1.push_back(num);
	}

	cout << "\n\nInserting 5 random number in list 2:";
	for (int i = 0; i < 5; i++) {
		num = rand() % 20;
		cout << "\nInserting " << num << " in List 2...";
		l2.push_back(num);
	}

	cout << "\n\nPrinting List1: " << endl;
	show(l1);
	cout << "\n\nPrinting List2: " << endl;
	show(l2);

	l1.sort();
	l2.sort();

	cout << "\n\nAfter sorting List1: " << endl;
	show(l1);
	cout << "\n\nAfter sorting List2: " << endl;
	show(l2);

	l1.merge(l2);

	cout << "\n\nAfter merging List1 and List2: " << endl;
	show(l1);

	return (0);
}

void show(list<int> &l) {
	list<int>::iterator itr;
	itr = l.begin();

	for (; itr != l.end(); itr++)
		cout << *itr << " ";
}
