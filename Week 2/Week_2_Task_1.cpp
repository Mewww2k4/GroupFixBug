#include<bits/stdc++.h>
using namespace std;

struct Student{
	string id;
	string name;
	float gpa;
};
void input(Student &a){
	cout<<"\nEnter Infomation Student: "<<endl;
	cout<<"Enter ID: ";
	getline(cin, a.id);
	cout<<"Enter name: ";
	getline(cin, a.name);
	cout<<"Enter GPA: ";
	cin>>a.gpa;
	cin.ignore();
}
void output(Student a){
	cout<<"\nInfomation Student: "<<endl;
	cout<<"ID: "<<a.id<<endl;
	cout<<"Name: "<<a.name<<endl;
	cout<<"GPA: "<<a.gpa<<endl;
}
void editStudent(Student& student) {
    cout << "\nEdit Infomation Student:";
    input(student);
}
int main(){
	Student a;
	input(a);
	output(a);
	editStudent(a);
	output(a);
	return 0;
}