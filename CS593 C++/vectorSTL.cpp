#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

void show(vector<int> &);

int main() {
	system("clear");
	vector<int> v;
	int num, i;
	char c;

	do {
		cout << "\n1.Push\n2.Insert\n3.Remove\n4.Display\nEnter your choice: ";
		cin >> num;

		switch (num) {
		case 1:
			cout << "Enter the value to insert: ";
			cin >> num;
			v.push_back(num);
			break;
		case 2:
			cout << "Enter the position to insert value in: ";
			cin >> i;
			cout << "Enter the value to insert: ";
			cin >> num;
			v.insert(v.begin() + i - 1, num);
			break;
		case 3:
			cout << "Enter the position from you want to remove: ";
			cin >> i;
			v.erase(v.begin() + i - 1);
			break;
		case 4:
			show(v);
			break;
		default:
			cout << "Invalid input!!";

		}
		cout << "Want to enter more? (Y/N): ";
		cin >> c;
	} while (c == 'Y' || c == 'y');

	return (0);
}

void show(vector<int> &v) {
	vector<int>::iterator itr;
	itr = v.begin();

	for (; itr != v.end(); itr++)
		cout << *itr << endl;
}

/*
1.Push
2.Insert
3.Remove
4.Display
Enter your choice: 1
Enter the value to insert: 5
Want to enter more? (Y/N): y

1.Push
2.Insert
3.Remove
4.Display
Enter your choice: 2
Enter the position to insert value in: 1
Enter the value to insert: 6
Want to enter more? (Y/N): y

1.Push
2.Insert
3.Remove
4.Display
Enter your choice: 4
6
5
Want to enter more? (Y/N): y

1.Push
2.Insert
3.Remove
4.Display
Enter your choice: 3
Enter the position from you want to remove: 1
Want to enter more? (Y/N): y

1.Push
2.Insert
3.Remove
4.Display
Enter your choice: 4
5
Want to enter more? (Y/N): n
*/
