#include<bits/stdc++.h>
using namespace std;
class Complex{
	private:
		double real;
		double imaginary;
	public:
		Complex(double r=0, double i=0){
			this->real=r;
			this->imaginary=i;
		}
		Complex(const Complex &b){
			this->real=b.real;
			this->imaginary=b.imaginary;
		}	
		void Input(){
			cout<<"Enter the real: ";
			cin>>real;
			cout<<"Enter the imaginary: ";
			cin>>imaginary;
		}
		void display(){
			cout<<real<<" + "<<imaginary<<"i"<<endl;
		}
};
int main(){
	Complex c1;
	c1.Input();
	Complex c2(3.4, 7);
	Complex c3 = c2;
	
	cout<<"Complex 1: ";
	c1.display();
	cout<<"Complex 2: ";
	c2.display();
	cout<<"Complex 3: ";
	c3.display();
	return 0;
}