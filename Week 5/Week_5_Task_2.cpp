#include<bits/stdc++.h>
using namespace std;
class Time{
	private: 
		int hour;
		int minute;
		int second;
	public: 
		Time(){
		}
		Time(int s, int m, int h){
			this->second=s;
			this->minute=m;
			this->hour=h;
		}
		Time(Time &other){
			this->hour=other.hour;
			this->minute=other.minute;
			this->second=other.second;
		}
		void input(){
			do{
				cout<<"Enter the number of hours: ";cin>>hour;
				cout<<"Enter the number of minute: ";cin>>minute;
				cout<<"Enter the number of second: ";cin>>second;
				if(hour > 24 || minute > 60 || second > 60 ||  hour < 0 || minute < 0 || second < 0){
					cout<<"Invalid time please re-enter !"<<endl;
				}
			}while(hour > 24 || minute > 60 || second > 60 ||  hour < 0 || minute < 0 || second < 0);
		}
		void display(){
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
};
int main(){
	Time t1;
	t1.input();
	Time t2(10,34,45);
	Time t3 = t2;
	cout<<"Time 1 ";
	t1.display();
	cout<<"Time 2 ";
	t2.display();
	cout<<"Time 3 ";
	t3.display();
	return 0;
}
