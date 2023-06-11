#include <iostream>

using namespace std;

class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Number of Counter objects created: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1;
    Counter::showCount();

    Counter c2;
    Counter::showCount();

    Counter c3;
    Counter::showCount();

    return 0;
}
