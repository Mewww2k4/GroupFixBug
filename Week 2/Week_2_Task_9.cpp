#include<bits/stdc++.h>
using namespace std;

int computeArea(int lenght, int width){
	return lenght * width;
}

float computeArea(float base, float height){
	return 0.5 * base * height;
}

float computeArea(float r){
	return M_PI * r * r;
}
int main(){
	int length, width;
	cout<<"\nEnter length: "; cin>> length;
	cout<<"Enter width: ";cin>> width;
	
	float base, height;
	cout<<"\nEnter base: "; cin>> base;
	cout<<"Enter heigth: "; cin>>height;
	
	float r;
	cout<<"\nEnter radius: "; cin>>r;
	
	int rectangle = computeArea(length, width);
	cout<<"\nArea of rectangle : "<<rectangle<<endl;
	
	float triangle = computeArea(base, height);
	cout<<"\nArea of triangle : "<<triangle<<endl;
	
	float circle = computeArea(r);
	cout<<"\nArea of circle : "<<circle<<endl;
	return 0;
}