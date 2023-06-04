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
int Swap(int &a, int &b)
{
	int temp = a;
	a= b;
    b = temp;
}
void bubbleArrays(int a[], int n)
{
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = 0 ; j < n - i - 1; j++)
		{
			if(a[j] > a[j+1])
			Swap(a[j],a[j+1]);
		}
	}
}
void Output(int a[], int n)
{   cout<<"Sorted Arrays : ";
	for(int i = 0 ; i < n ; i++)
	{
		cout << a[i] <<"   " ;
	}
}
 struct Rectangle{
 	double height;
 	double width;
 };
 void input(Rectangle &r)
 {
 	cout <<"\nInput the height and the width : ";
 	cin >> r.height >> r.width;
 }
 void display(Rectangle &r)
 {
 	cout <<"The height : "<< r.height<< endl;
 	cout <<"The width : " << r.width << endl;
 }
 double displayArea(Rectangle &r)
 {
 	return (r.height * r.width);
 }
 void edit(Rectangle &r){
 	cout <<"Input the height new : " ;
 	cin >> r.height;
 	cout <<"Input the width new : ";
 	cin >> r.width;
 }
int main(){
	//1.Integer Arrays
	 int a[100];
	 int n, search;
	 cout <<"Input element n : "   ;
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
	cout <<"The Integer Max :  "<< Max(a,n) <<endl;

	//3.Bubble Sort
	bubbleArrays(a,n);
	Output(a,n);

	//4. Struct Rectangle
	Rectangle r;
	 input(r);
	 display(r);
	 cout <<"The Area of Rectangle is : " << displayArea(r) << endl;
	 edit(r);
	 display(r);
	 cout <<"The Area of Rectangle new is : " << displayArea(r)<<endl;
	return 0;
}
