#include <iostream>
#include <cstring>

using namespace std;

#define MAX 100

int main() {
    char* a = new char[MAX];
    char* b = new char[MAX];

    cout << "Enter the first string: ";
    cin.getline(a, 100);
    cout << "Enter the second string: ";
    cin.getline(b, 100);

    cout << "Length of the first string: " << strlen(a) << endl;
    cout << "Length of the second string: " << strlen(b) << endl;

    int compareResult = strcmp(a, b);
    
    if (compareResult == 0) {
        cout << "2 string are equal!" << endl;
    } else if (compareResult < 0) {
        cout << "Second string is greater than first string!" << endl;
    } else {
        cout << "First string is greater than second string!" << endl;
    }

    char* result = new char[strlen(a) + strlen(b) + 1];
    
    strcpy(result, a);
    strcat(result, b);
    
    cout << "Concatenated string: " << result << endl;

    delete[] a;
    delete[] b;
    delete[] result;

    return 0;
}
