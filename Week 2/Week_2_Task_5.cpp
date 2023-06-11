#include <iostream>
#include <string>

using namespace std;

int compareStrings(const string str1, const string str2) {
	int compareResult = str1.compare(str2);
	
    if (compareResult == 0) {
    	return 0;
	}
	else if (compareResult > 0) {
		return 1;
	}
	else 
		return -1;
}

int main() {
    string a, b;
    
    cout<< "Enter the first string: "<< endl;
    getline(cin, a);
    cout<< "Enter the second string: "<< endl;
    getline(cin, b);
    
    int x = compareStrings(a, b);
    
    switch (x) {
    	case -1: cout<< "Second string is greater than first string!";
		break;
    	
    	case 0: cout<< "2 string are equal!";
		break;
    	
    	case 1: cout<< "First string is greater than second string!";
		break;
	}
    
    return 0;
}
