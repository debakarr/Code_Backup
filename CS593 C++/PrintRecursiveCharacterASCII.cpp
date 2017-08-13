#include<iostream>

using namespace std;

class CharacterASCII {
public:
	void characterToASCII(char c);
};

void CharacterASCII::characterToASCII(char c) {
	if (c == 'z' || c == 'Z' || c == '9') {
		cout << c << " = " << (int) c << endl;
		return;
	} else {
		cout << c << " = " << (int) c << endl;
		characterToASCII(c + 1);
	}
}

int main() {
	CharacterASCII c;
	c.characterToASCII('a');
	c.characterToASCII('A');
	c.characterToASCII('0');
	return (0);
}
