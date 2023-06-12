#include<bits/stdc++.h>
using namespace std;
int length(string &str){
	return str.length();
}
int main(){
	string s;
	cout<<"Enter a string: ";
	getline(cin, s);
	int index = length(s);
	cout<<"Length a string: "<<index<<endl;
	return 0;
}