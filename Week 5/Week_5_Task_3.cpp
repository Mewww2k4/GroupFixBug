#include<bits/stdc++.h>
using namespace std;
class Bank{
	private:
		string name;
		string accountNumber;
		string accountType;
		double balance;
		static double interestRate;
	public:
		Bank(){
		}	
		Bank(string name, string accountNumber, string accountType, double balance){
			this->name=name;
			this->accountNumber=accountNumber;
			this->accountType=accountType;
			this->balance=balance;
		}
		Bank(const Bank &other){
			this->name=other.name;
			this->accountNumber=other.accountNumber;
			this->accountType=other.accountType;
			this->balance=other.balance;
		}
		void Input(){
			cout<<"\n\t\tENTER INFORMATION ACCOUNT: \n";
			cout<<"Enter name: "; getline(cin,name);
			cout<<"Enter your account number: "; getline(cin,accountNumber); 
			cout<<"Enter account type: "; getline(cin,accountType);
			cout<<"Enter your account balance: "; cin>>balance;
			cin.ignore();
		}
		void Deposits(double money){
			balance+=money;
		}
		void Withdrawals(double money){
			if(balance - money < 0){
				cout<<"Account Insufficient funds !";
			}
			else{
				balance -= money;
			}
		}
		void Output(){
			cout<<"\n\t\tINFORMATION ACCOUNT: \n";
			cout<<"Name: "<<name<<endl; 
			cout<<"Account number: "<<accountNumber<<endl; 
			cout<<"Account type: "<<accountType<<endl; 
			cout<<"Account balance: "<<balance<<endl; 
			cout<<"Interest rate: "<<interestRate<<"%"<<endl;
		}
};
double Bank::interestRate = 3;

int main(){
	Bank account;
	account.Input();
	int type;
	double withdrawals, deposits;
	system("cls");
	cout<<"\nYou want to withdraw or deposit ?\n";
	cout<<"1.Withdrawals "<<endl;
	cout<<"2.Deposits "<<endl;
	cout<<"Enter your selection: ";
	cin>>type;
	if(type == 1){
		cout<<"Enter the amount to withdraw: ";
		cin>>withdrawals;
		account.Withdrawals(withdrawals);
	}
	else if(type == 2){
		cout<<"Enter the amount to deposits: ";
		cin>>deposits;
		account.Deposits(deposits);
	}
	account.Output();
	return 0;
}