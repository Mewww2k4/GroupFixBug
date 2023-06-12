#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string id;
    string name;
    float gpa;
};

void input(Student &student) {
    cout << "\nEnter Student Information:" << endl;
    cout << "Enter ID: ";
    fflush(stdin);
    getline(cin, student.id);
    cout << "Enter Name: ";
    getline(cin, student.name);
    cout << "Enter GPA: ";
    cin >> student.gpa;

}

void output(Student student) {
    cout << "\nStudent Information:" << endl;
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "GPA: " << student.gpa << endl;
}

void sortById(Student students[], int n) {
    sort(students, students + n, [](Student &a, Student &b) {
        return a.id < b.id;
    });
}

int searchById(Student students[], int n, string id) {
    for (int i = 0; i < n; i++) {
        if (students[i].id == id) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
	fflush(stdin);
    Student students[n];

    int choice;
    string searchId;
    int index = -1;
    bool shouldExit = false;

    do {
        cout << "----- MENU -----" << endl;
        cout << "1. Input student information" << endl;
        cout << "2. Display student information" << endl;
        cout << "3. Sort student information by ID" << endl;
        cout << "4. Search student information by ID" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 0:
                cout << "Exiting the program." << endl;
                shouldExit = true;
                break;
            case 1:
                for (int i = 0; i < n; i++) {
                    input(students[i]);
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    output(students[i]);
                }
                break;
            case 3:
                sortById(students, n);
                cout << "Student information sorted by ID:" << endl;
                for (int i = 0; i < n; i++) {
                    output(students[i]);
                }
                break;
            case 4:
                cout << "Enter the ID of the student to search: ";
                getline(cin, searchId);
               index = searchById(students, n, searchId);
                if (index != -1) {
                    cout << "Student found at index " << index + 1 << ":" << endl;
                    output(students[index]);
                } else {
                    cout << "Student with ID " << searchId << " not found." << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    } while (!shouldExit);


}

