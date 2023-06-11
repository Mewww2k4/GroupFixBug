#include <iostream>
using namespace std;

class Shape {
protected:
    double height;
    double width;

public:
	Shape(double h = 0, double w = 0)
	{
          height = h;
          width = w;
	}
        void Get_Data() {
        cout << "Enter the height: ";
        cin >> height;
        cout << "Enter the width: ";
        cin >> width;
    }

    virtual double Area() = 0;

    virtual void DisplayArea() {}
};

class Rectangle : public Shape {
public:
    double Area() {
        return (height * width);
    }

    void DisplayArea() {
        cout << "The area of the rectangle is " << Area() << endl;
    }
};

class Triangle : public Shape {
public:
    double Area() {
        return (height * width) / 2.0;
    }

    void DisplayArea() {
        cout << "The area of the triangle is " << Area() << endl;
    }
};

int main() {
	Shape* shape;
    Rectangle rectangle;
    Triangle triangle;

    shape = &rectangle;
    shape->Get_Data();
    shape->DisplayArea();

    shape = &triangle;
    shape->Get_Data();
    shape->DisplayArea();

    return 0;
}

