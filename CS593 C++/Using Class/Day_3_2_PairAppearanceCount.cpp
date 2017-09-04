//#include <cstring>
#include <iostream>

using namespace std;

//int countPairApperanceString(string, string pair);
int countPairApperanceCharArray(char*, char* pair);

int main() {
	char myChar[40], searchChar[3];

	cout << "\nEnter the String: ";
	cin.getline(myChar, 40);

	cout << "\nEnter the substring: ";
	cin.getline(searchChar, 3);

	//string myString = "ajxkjabkjfdfjkabjsjdkjababaabjad", searchString = "ab";

	cout << "Number of occurrence of substring : " << countPairApperanceCharArray(myChar, searchChar) << endl;


	//cout << "Number of occurrence of 'ab' in 'ajxkjabkjfdfjkabjsjdkjababaabjad' : " << countPairApperanceString(myString, searchString);
}

/*
int countPairApperanceString(string mystring, string pair) {
	int count = 0, pos = 0;
	while ( (pos = mystring.find(pair, pos)) != string::npos ) {
		++count;
		++pos;
	}

	return count;
}
*/

int countPairApperanceCharArray(char* chararray, char* pair) {
	int count = 0, i = 0;

	while (chararray[i + 1] != '\0') {
		if ( chararray[i] == pair[0] && chararray[i + 1] == pair[1])
			++count;
		++i;
	}
	return count;
}

/*

$ g++ Day_3_2_PairAppearanceCount.cpp

$ a.exe

Enter the Stirng: ab fj ks dj ab js kd ab

Enter the substring: ab
Number of occurrence of substring : 3

*/