#include<bits/stdc++.h>
using namespace std;
class String{
	private:
		char *s;
	public:
		String(){
			s=nullptr;
		}
		String(const char *str){
				s = new char[strlen(str)+1];
				strcpy(s,str);
		}
		String(const String &other){
				s = new char[strlen(other.s)+1];
				strcpy(s,other.s);
		}
		void Input(){
			char str[100];
			cout<<"Enter the string: ";
			cin.getline(str,100);
			if(s){
				delete []s;
			}	
			s = new char(strlen(str)+1);
			strcpy(s,str);
		}
		void Display(){
				cout<<s<<endl;
		}
		~String(){
			delete []s;
		}
		void ChangeCase(){
			for(int i=0;i<strlen(s);i++){
				if (islower(s[i])) {
	                s[i] = toupper(s[i]);
	                }
	            else if (isupper(s[i])) {
	                s[i] = tolower(s[i]);
	            }
	        }
		}
		void Reverse(){
				int len = strlen(s);
				for(int i=0;i<len/2;i++){
					char temp = s[i];
					s[i] = s[len-i-1];
					s[len-i-1] = temp;
				}
		}	
};
int main(){
	String str1;
	str1.Input();
	String str2(str1);
	cout<<"\nString after input: ";
	str1.Display();
	
	cout<<"\nString after coppy: ";
	str2.Display();
	cout<<endl;
	
	cout<<"\nString after conversion: ";
	str2.ChangeCase();
	str2.Display();
	cout<<endl;
	
	str2.Reverse();
	cout<<"\nString after reverse: ";
	str2.Display();
	cout<<endl;
	
	return 0;
}
