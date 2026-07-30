//Write a program to take input for information of any student like name branch roll number and marks for 5 subject.
//find out total and percentage with modular programming.
#include <iostream>
using namespace std;

void input(string &name, string &branch, int &rollnumber, int Marks[5]) {
    cout << "Name of the student: ";
    getline(cin, name);
    cout << "Enter Branch: ";
    getline(cin, branch);
    cout << "Enter the Roll number: ";
    cin >> rollnumber;
    cout << "Enter the marks for 5 subjects:";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> Marks[i];
    }
}
void findsum(const int Marks[5], int &sum, float &percent) {
    sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += Marks[i];
    }
    percent=(sum/5);
}
void show(const string &name, const string &branch, int rollnumber, const int Marks[5], int sum, float percent) {
    cout << "Name: " << name<<" ";
    cout << "Branch: " << branch<<" ";
    cout << "Roll Number: " << rollnumber<<endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << Marks[i];
        if (i < 4) cout << ", ";
    }
    cout << " Total Marks: " << sum << " ";
    cout << "Percentage: " << percent << "%";
}
int main() {
    string name, branch;
    int rollnumber;
    int Marks[5];
    int sum;
    float percent;
    input(name, branch, rollnumber, Marks);
    findsum(Marks, sum, percent);
    show(name, branch, rollnumber, Marks, sum, percent);
    return 0;
}
