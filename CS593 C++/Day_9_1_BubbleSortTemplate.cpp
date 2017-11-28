#include<iostream>

using namespace std;

template <class T>
void bubbleSort(T * a, int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

template <class T>
void swap(T & a, T & b) {
	T old;
	old = a;
	a = b;
	b = old;
}

template <class T>
void showArray(T *a, int n) {
	cout<<"\nSorted array:\n";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

int main() {
	int a[20], n;
	float b[20];
	double c[20];

	cout << "Enter number of elements: ";
	cin >> n;

	cout << "\nEnter " << n << " integers: \n";
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	bubbleSort(a, n);
	showArray(a, n);

	cout << "\nEnter " << n << " floats: \n";
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}

	bubbleSort(b, n);
	showArray(b, n);

	cout << "\nEnter " << n << " doubles: \n";
	for (int i = 0; i < n; ++i)
	{
		cin >> c[i];
	}
	bubbleSort(c, n);
	showArray(c, n);

	return 0;
}

/*
Enter number of elements: 5

Enter 5 integers: 
6 1 7 2 4

Sorted array:
1	2	4	6	7	

Enter 5 floats: 
2.6 1.5 6.2 1.9 3.2

Sorted array:
1.5	1.9	2.6	3.2	6.2	

Enter 5 doubles: 
5.1 7.2 1.9 3.6 1.0

Sorted array:
1	1.9	3.6	5.1	7.2
*/