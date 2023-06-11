#include<bits/stdc++.h>
using namespace std;
void swap(string str[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<(n-i-1);j++){
			if(str[j] > str[j+1]){
				swap(str[j], str[j + 1]);
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter the number of strings in the array: ";
	cin>>n;
	cin.ignore();
	
	string *str = new string[n];
	cout<<"\nEnter contents of the string: \n";
	for(int i=0;i<n;i++){
		cout<<"Enter string "<<i+1<<": ";
		cin>>str[i];
	}
	swap(str, n);
	cout<<"\nContents of the string: \n";
	for(int i=0;i<n;i++){
		cout<<" String contents "<<i+1<<": "<<str[i]<<endl;
	}
	delete []str;
	return 0;
}