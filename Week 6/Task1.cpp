
#include<iostream>
using namespace std;

class IntArr {
private:
    int* a;
    int size; // Number of elements

public:
    IntArr() {
        a = NULL;
        size = 0;
    }

    IntArr(int sz) {
        size = sz;
        a = new int[size];
    }

    ~IntArr() {

        delete[] a;
    }

    IntArr(const IntArr& other) {

    	size = other.size;
        a = new int[size];
        for (int i = 0; i < size; i++) {
            a[i] = other.a[i];
        }

    }

    IntArr& operator = (const IntArr& other) {

    	size = other.size;
        a = new int[size];
        for (int i = 0; i < size; i++) {
            a[i] = other.a[i];
        }

        return *this;

    }

    int getSize() {
        return size;
    }

    void Input() {
        cout << "Input number of elements (size): ";
        cin >> size;
        a = new int[size];
        for (int i = 0; i < size; i++) {
            cout << "Input value for element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    void Output() {
        cout << "The elements in the array: ";
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
	//  1. Overload + operator to add 2 IntArr objects
    IntArr operator+(const IntArr& b) {
        if (size != b.size) {
            cout << "Arrays must have the same size for addition." << endl;
            return IntArr();
        }

        IntArr res(size);

        for (int i = 0; i < size; i++) {
            res.a[i] = a[i] + b.a[i];
        }

        return res;
    }
    //2. Overload “= =” to compare for equality of 2 objects.
	bool operator==(const IntArr& other) {
        if (size != other.size) {
            return false;
        }

        for (int i = 0; i < size; i++) {
            if (a[i] != other.a[i]) {
                return false;
            }
        }
        return true;
    }
    //3. Overload “[ ]” to retrieve an integer from the specified index.
    int& operator[](int index) {
    if (index >= 0 && index < size) {
        return a[index];
    }

    cout << "Error: Index out of range." << endl;
    exit(1);
     }
	// 4. Overload input output operators for this class
  friend istream& operator>>(istream& is, IntArr& obj) {
        for (int i = 0; i < obj.size; i++) {
            cout << "Input value for element " << i + 1 << ": ";
            is >> obj.a[i];
        }
        return is;
    }
	friend ostream& operator<<(ostream& os, IntArr& obj) {

		for (int i = 0; i < obj.size; i++) {
		    os << obj.a[i] << " ";
		}

		return os;
	}

};

int main() {
    IntArr arr1, arr2;
    cout <<"-------------------The Arrays 1-------------------\n" ;
    arr1.Input();
	arr1.Output();
	cout <<"-------------------The Arrays 2-------------------\n" ;
    arr2.Input();
	arr2.Output();

	cout <<"-------------------The Arrays 3-------------------\n" ;
    IntArr arr3;
    arr3 = arr1 + arr2;
    if (arr3.getSize() == 0) {
        cout << "Cannot add arrays. Sizes are different." << endl;
    } else {
        cout << "The new Array Arr3: " << arr3 << endl;
    }
    cout <<"----------------------Compare -------------------\n";
    if (arr1 == arr2) {
        cout << "Arr1 and Arr2 are equal" << endl;
    } else {
        cout << "Arr1 and Arr2 are not equal" << endl;
    }
    if (arr1 == arr3) {
        cout << "Arr1 and Arr3 are equal" << endl;
    } else {
        cout << "Arr1 and Arr3 are not equal" << endl;
    }
	cout <<"-------------------The Arrays 4-------------------\n" ;
    IntArr arr4(5);
    cin >> arr4;
	cout <<"The Arrays 4 : " << arr4 ;
	cout <<"\nArrays at index 3 is " << arr4[3] << endl;

    return 0;
}
