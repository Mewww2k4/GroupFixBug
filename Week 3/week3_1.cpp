/*1a. Define a class to represent a complex number called Complex. Provide the following 
member functions:-
1. To assign initial values to the Complex object.
2. To display a complex number in a+ib format.
3. To add 2 complex numbers. (the return value should be complex)
4. To subtract 2 complex numbers
Write a main function to test the class.
*/
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0);
    void display();
    Complex add(Complex c);
    Complex sub(Complex c); 
};

Complex::Complex(int r, int i) {
    real = r;
    imag = i;
}

void Complex::display() {
    if (imag == 1) {
        cout << real << " + " << "i" << endl;
    }
    else if (imag == -1) {
        cout << real << " - " << "i" << endl;
    }
    else if (imag < 0) {
        cout << real << " - " << -imag << "i" << endl;
    }
    else {
        cout << real << " + " << imag << "i" << endl;
    }
}

Complex Complex::add(Complex c) {
    Complex res;
    res.real = real + c.real;
    res.imag = imag + c.imag;
    return res;
}
Complex Complex::sub(Complex c){
	Complex sub;
	sub.real = real - c.real;
	sub.imag = imag - c.imag;
	return sub;
}
int main() {
    Complex a(3, 4);
    Complex b(2, -5);

    cout << "c1 = ";
    a.display();
    cout << "c2 = ";
    b.display();

    Complex res = a.add(b);
    cout << "res = ";
    res.display();
    
    Complex sub = a.sub(b);
    cout<<"sub = ";
    sub.display();
    return 0;
}