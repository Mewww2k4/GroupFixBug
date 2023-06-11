#include <iostream>
#include <string>

using namespace std;

string concatenateStrings(const string& str1, const string& str2) {
    return str1 + str2;
}

int main() {
    string a, b;
    
    cout<< "Enter the first string: "<< endl;
    getline(cin, a);
    cout<< "Enter the second string: "<< endl;
    getline(cin, b);
    
    string x = concatenateStrings(a, b);
    
    cout << "Concatenated string: " << x << endl;
    
    return 0;
}
