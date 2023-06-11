#include<bits/stdc++.h>
using namespace std;

void swapPointer(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapReferences(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a, b;
	cout<<"Enter a = ";
	cin>>a;
	cout<<"Enter b = ";
	cin>>b;
	
	cout<<"Values of a and b before swapping: "<<endl;
	cout<<"a = "<<a<<"\tb = "<<b<<endl;
	
	swapPointer(&a, &b);
	cout<<"Values of a and b after swapping pointer:"<<endl;
	cout<<"a = "<<a<<"\tb = "<<b<<endl;
	
	swapReferences(a, b);
	cout<<"Values of a and b after swapping references:"<<endl;
	cout<<"a = "<<a<<"\tb = "<<b<<endl;
	return 0;
}