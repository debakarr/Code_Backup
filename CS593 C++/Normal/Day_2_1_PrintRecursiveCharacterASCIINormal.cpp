#include<iostream>

using namespace std;

void characterToASCII(char c) {
	if (c == 'z' || c == 'Z' || c == '9') {
		cout << c << " = " << (int) c << endl;
		return;
	} else {
		cout << c << " = " << (int) c << endl;
		characterToASCII(c + 1);
	}
}

int main() {
	characterToASCII('a');
	characterToASCII('A');
	characterToASCII('0');
	return (0);
}