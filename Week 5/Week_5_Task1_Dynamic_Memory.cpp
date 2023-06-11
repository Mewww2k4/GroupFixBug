#include<bits/stdc++.h>
using namespace std;
class IntArr{
	private:
		int *a;
		int n;
	public:
		IntArr(){
			a=NULL;
			n=0;
		}	
		IntArr(int *a, int n){
			this->n=n;
			this->a=new int[n];
			for(int i=0;i<n;i++){
				this->a[i]=a[i];
			}
		}
		IntArr(IntArr &other){
			this->n=other.n;
			this->a=new int[n];
			for(int i=0;i<n;i++){
				this->a[i]=other.a[i];
			}
		}
		void Input(){
			cout<<"\nEnter the number of elements in the array: ";cin>>n;
			a=new int[n];
			for(int i=0;i<n;i++){
				cout<<"Enter an element value "<<i+1<<": ";
				cin>>a[i];
			}
		}
		void Output(){
			cout<<"\nThe elements in the array: ";
			for(int i=0;i<n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		int search(int x){
			for(int i=0;i<n;i++){
				if(a[i]==x){
					return 1;
				}
			}
			return 0;
		}
		bool compare(IntArr b){
			if(n != b.n){
				return false;
			}
			for(int i=0;i<n;i++){
				if(a[i] != b.a[i]){
					return false;
				}
			}
			return true;
		}
		~IntArr(){
			delete []a;
		}
};

int main(){
	IntArr a,b;
	a.Input();
	b.Input();
	
	a.Output();
	b.Output();
	
	int x;
	cout<<"Enter the value to search for in array a: ";cin>>x;
	int index = a.search(x);
	
	if(index == 1){
		cout<<"Valuable "<<x<<" in array A !"<<endl;
	}
	else if(index == 0){
		cout<<"Valuable "<<x<<" not in array A !"<<endl;
	}
	
	if(a.compare(b)){
		cout<<"Array a equals array b !"<<endl;
	}
	else{
		cout<<"Array a differs from array b !"<<endl;
	}
	return 0;
}