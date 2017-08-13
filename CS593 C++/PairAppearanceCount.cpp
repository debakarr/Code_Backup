#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int countPairApperanceString(string, string pair);
int countPairApperanceCharArray(char*, char* pair);

int main() {
	char myChar[40] = "axabaacbaxabba", searchChar[3] = "ab";
	string myString = "ajxkjabkjfdfjkabjsjdkjababaabjad", searchString = "ab";

	cout << "Number of occurrence of 'ab' in 'axabaacbaxabba' : " << countPairApperanceCharArray(myChar, searchChar) << endl;


	cout << "Number of occurrence of 'ab' in 'ajxkjabkjfdfjkabjsjdkjababaabjad' : " << countPairApperanceString(myString, searchString);
}

int countPairApperanceString(string mystring, string pair) {
	int count = 0, pos = 0;
	while ( (pos = mystring.find(pair, pos)) != string::npos ) {
		++count;
		++pos;
	}

	return count;
}

int countPairApperanceCharArray(char* chararray, char* pair) {
	int count = 0;

	while (*chararray != 0) {
		if ( strncmp(chararray, pair, 1) == 0 )
			if ( strncmp(chararray + 1, pair + 1, 1) == 0 )
				++count;
		++chararray;
	}
	return count;
}