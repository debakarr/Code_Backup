#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<cstdlib>

using namespace std;

int main(){
	system("clear");
	vector<int> v;
	vector<int>::iterator vi;
	list<int> l;
	list<int> li;
	
	for(int i = 1; i<=5; i++)
		v.push_back(i);

	//v.insert(10, 1);
	for(vi=v.begin();vi!=v.end();vi++)
		cout<<*vi<<endl;

	for(int i = 1; i<=5; i++)
		l.push_back(i);	
}
