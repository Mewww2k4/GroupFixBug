#include <iostream>

using namespace std;

#define PI 3.1415
class Circle;

class Rectangle {
private:
    double length;
    double width;
    double area;

    void calculateArea() {
        area = length * width;
    }
    
public:
    void input() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;

        cout << "Enter the width of the rectangle: ";
        cin >> width;

        calculateArea();
    }

    void display() {
        cout << "Rectangle Dimensions: Length: " << length << ", Width: " << width << endl;
        cout << "Rectangle Area: " << area << endl;
    }

    friend class Circle;
};

class Circle {
private:
    double radius;
    double area;

    void calculateArea() {
        area = PI * radius * radius;
    }
    
public:
    void input() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        calculateArea();
    }

    void display() {
        cout << "Circle Dimensions: Radius: " << radius << endl;
        cout << "Circle Area: " << area << endl;
    }

    void larger(Rectangle rect);
};

void Circle::larger(Rectangle rect) {
    if (area > rect.area) {
        cout << "Circle has a larger area than the Rectangle." << endl;
    } else if (area < rect.area) {
        cout << "Rectangle has a larger area than the Circle." << endl;
    } else {
        cout << "Both the Circle and Rectangle have the same area." << endl;
    }
}

int main() {
    Rectangle rectangle;
    Circle circle;

    rectangle.input();
    cout << endl;
    circle.input();
    cout << endl;

    rectangle.display();
    cout << endl;
    circle.display();
    cout << endl;

    circle.larger(rectangle);

    return 0;
}
