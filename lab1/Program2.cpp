#include <bits/stdc++.h>
using namespace std;
class Student {
    int rollNo;
    string name;
    float marks;
public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void show() {
        cout << "Student Details: "<<endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s;
    s.input();
    s.show();
    return 0;
}