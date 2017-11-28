#include<iostream>
#include<vector>

using namespace std;

class Pair {
	string str;
	int cnt;
public:
	Pair(string, int);
	~Pair();
	void show();
	string getStr();
	void incCnt();
};

Pair::Pair(string str, int cnt) {
	this->str = str;
	this->cnt = cnt;
}

Pair::~Pair() {}

void Pair::show() {
	cout << str << "\t" << cnt << endl;
}

string Pair::getStr() {
	return str;
}

void Pair::incCnt() {
	cnt++;
}

vector<Pair> p;
int i = 0;

void countPair(string str) {
	vector<Pair>::iterator itr;
	int isFound = 0;
	for (itr = p.begin(); itr != p.end(); itr++) {
		if (itr->getStr() == str) {
			isFound = 1;
			itr->incCnt();
			break;
		}
	}

	if (isFound == 0)
		p.push_back(Pair(str, 1));
};

int main() {
	string str;
	while (cin >> str) {
		countPair(str);
	}

	cout << "\nWord\tFrequency\n";
	for (int i = 0; i < p.size(); i++)
		p[i].show();
}

/*
ram ram ram syam syam syam kam

Word	Frequency
ram	3
syam	3
kam	1
*/