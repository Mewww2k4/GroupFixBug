/*4. Create a class called Stack for storing integers. The data members are an integer array for 
storing the integers and an integer for storing the top of stack (tos). Include member functions for 
initializing tos to 0, pushing an element to the stack and for popping an element from the stack. 
The push() function should check for “stack overflow” and pop() should check for “stack 
underflow */

#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
class Stack
{
	private:
		int arr[MAX];
		int tos;
		
	public:
		Stack()
		{
			tos=0;
		}
		void push(int value){
			if(tos==MAX){
				cout<<"Stack overflow!!"<<endl;
				return;
			}
			else{
				arr[MAX]=value;
				tos++;
			}
		}
		void Pop(){
			if(tos=MAX){
				cout<<"stack underflow!!"<<endl;
				return;
			}
			else{
				tos--;
			}
		}
	
};
int main()
{
	Stack s;
	s.push(10);
	s.push(30);
	s.push(32);
	s.Pop();
	s.Pop();
	s.Pop();

}