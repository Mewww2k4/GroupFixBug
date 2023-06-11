#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char* s;

public:
    String() {
        s = NULL;
    }

    String(const char* str) {
        s = new char[strlen(str) + 1];
        strcpy(s, str);
    }

    String(const String& other) {
        s = new char[strlen(other.s) + 1];
        strcpy(s, other.s);
    }

    void Input() {
        char str[100];
        cout << "Enter the string: ";
        cin.getline(str, 100);

        if (s) {
            delete[] s;
        }

        s = new char[strlen(str) + 1];
        strcpy(s, str);
    }

    void Display() const {
        cout << s << endl;
    }

    ~String() {
        delete[] s;
    }

    void ChangeCase() {
        for (int i = 0; i < strlen(s); i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
        }
    }

    void Reverse() {
        int len = strlen(s);
        for (int i = 0; i < len / 2; i++) {
            char temp = s[i];
            s[i] = s[len - i - 1];
            s[len - i - 1] = temp;
        }
    }
	// 1. Overload + operator to concatenate 2 string objects. {Note:- proper memory allocation to be done}
    String& operator+(const String& other) {
        char* temp = new char[strlen(s) + strlen(other.s) + 1];
        strcpy(temp, s);
        strcat(temp, other.s);

        delete[] s;
        s = temp;

        return *this;
    }
    //3. Overload “[ ]” to retrieve a character from the specified index
    char& operator[](int index) {
    if (index >= 0 && index < strlen(s)) {
        return s[index];
    }
    return s[0];
}

	//2. Overload input and output operators.
    friend istream& operator>>(istream& is, String& str);
    friend ostream& operator<<(ostream& os, const String& str); //
};

istream& operator>>(istream& is, String& str) {
    char temp[100];
    cout << "Enter the string: ";
    is.getline(temp, 100);

    if (str.s) {
        delete[] str.s;
    }

    str.s = new char[strlen(temp) + 1];
    strcpy(str.s, temp);

    return is;
}

ostream& operator<<(ostream& os, const String& str) {
    os << str.s;
    return os;
}

int main() {
    String str1;
    str1.Input();

    String str2(str1);
    cout << "\nString after input: ";
    str1.Display();

    cout << "\nString after copy: ";
    str2.Display();
    cout << endl;

    cout << "\nString after conversion: ";
    str2.ChangeCase();
    str2.Display();
    cout << endl;

    str2.Reverse();
    cout << "\nString after reverse: ";
    str2.Display();
    cout << endl;

    String str3, str4, str;
    str3.Input();
    str4.Input();
    str= str3 + str4;
    cout << "\nString after concatenation: ";
    str3.Display();
    
    String str5;
    cin >> str5;
    cout <<"The String 5 : "<< str5 << endl;
    cout << "\nString  at index 3: " << str5[3] << endl;

    return 0;
}

