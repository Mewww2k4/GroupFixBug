#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    int customerID;
    string name;
    double creditLimit;

public:
    void setCustomerID(int id) {
        customerID = id;
    }

    void setName(const string& n) {
        name = n;
    }

    void setCreditLimit(double limit) {
        creditLimit = limit;
    }

    void displayData() const {
        cout << "Customer ID: " << customerID << endl;
        cout << "Name: " << name << endl;
        cout << "Credit Limit: " << creditLimit << endl;
    }
};

int main() {
    Customer customers[5];

    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for Customer " << i + 1 << endl;

        int id;
        string name;
        double limit;

        cout << "Customer ID: ";
        cin >> id;
        customers[i].setCustomerID(id);

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        customers[i].setName(name);

        cout << "Credit Limit: ";
        cin >> limit;
        customers[i].setCreditLimit(limit);

        cout << endl;
    }

    cout << "Customer Data:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Customer " << i + 1 << ":" << endl;
        customers[i].displayData();
        cout << endl;
    }

    return 0;
}
