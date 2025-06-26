#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float marks[3];
    float total, average;
    char grade;

public:
    void input() {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll;
         
        cout << "Enter marks for 3 subjects:\n";
        for (int i = 0; i < 3; i++){
            cout << "Subject"<< i+1 <<":";
            cin >> marks[i];
        }

        calculate();
    }

    void calculate() {
        total = marks[0] + marks[1] + marks[2];
        average = total / 3;

        if (average >= 90)
            grade = 'A';
        else if (average >= 80)
            grade = 'B';
        else if (average >= 70)
            grade = 'C';
        else if (average >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\n--- Student Report Card ---\n";
        cout << "Name       : " << name << endl;
        cout << "Roll No.   : " << roll << endl;
        cout << "Marks      : " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Total      : " << total << endl;
        cout << "Average    : " << average << endl;
        cout << "Grade      : " << grade << endl;
        cout << "Result     : " << (grade == 'F' ? "Fail" : "Pass") << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}