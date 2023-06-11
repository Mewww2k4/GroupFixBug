#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int id;

public:
    Student(string n = "", int i = 0)
    {
    	name = n;
    	id = i;
	}

    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student ID: ";
        cin >> id;

    }

    void output() {
        cout << "\nStudent name: " << name;
        cout << "\nStudent ID: " << id;
    }
};

class Sports : virtual public Student {
protected:
    int s_grade;

public:
    Sports(int s = 0) {
	 s_grade = s;
	}

    void input() {
        Student::input();
        cout << "Enter sports grade: ";
        cin >> s_grade;

    }

    void output() {
        cout << "\nSports grade: " << s_grade;
    }
};

class Exam : virtual public Student {
protected:
    int e_grade;

public:
    Exam(int e = 0) {
	 e_grade = e;
	}

    void input() {
        //Student::input();
        cout << "Enter exam grade: ";
        cin >> e_grade;

    }

    void output() {
        cout << "\nExam grade: " << e_grade;
    }
};

class Results : public Sports, public Exam {
private:
    string finalResult;

public:
    Results(string n = "", int i = 0, int s = 0, int e = 0, string r = "")
        : Student(n, i), Sports(s), Exam(e){
			finalResult = r;
		}

    void input() {
        Sports::input();
        Exam::input();
    }

    void calculateResult() {
        if (s_grade >= 50 && e_grade >= 50) {
            finalResult = "Pass";
        } else {
            finalResult = "Fail";
        }
    }

    void display() {
        Student::output();
        Sports::output();
        Exam::output();
        cout << "\nFinal Result: " << finalResult << endl;
    }
};

int main() {
	
	Results result0("Me iuuuu", 123, 60 ,70,"Pass" );
	result0.display();
	
    Results result;
    result.input();
    result.calculateResult();
    result.display();


    return 0;
}

