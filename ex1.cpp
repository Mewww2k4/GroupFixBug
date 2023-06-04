#include<iostream>
using namespace std;

void Input(int a[], int &n)          // (Input Array)
{
	for(int i = 0 ; i < n ; i++)
	 {
		 cout <<"Input element the "<< i+ 1 <<":   ";
		 cin >> a[i];
    }
}
int search_integer(int a[], int n, int search)     //(Find Element)
{

	for(int i = 0 ; i < n ; i++)
	{
		if (a[i] == search)
			return 1;
		}
	return -1;
}
int Max(int a[], int n)    // Find element max
{
	int max;
	for( int i = 0; i < n ; i ++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max ;
}
int main(){
	//1.Integer Arrays
	 int a[100];
	 int n, search;
	 cin >> n ;//Input quantity elment    (length)
	 Input(a,n) ;
	 
	 
	 cout<<"Input number to find : " ; cin >> search;
	 int result = search_integer(a,n,search);
	 if(result == 1)
	 {
	 	cout <<"Integers found in the list !!!"<<endl;
	 }
	 else {
	 	cout <<"Integers not found in the list !!!"<<endl;
	 }
	
	//2.Max
	int result1 = Max(a,n);
	cout <<"The Integer Max :  "<< result1 <<endl;
	
	return 0;
}
