#include <iostream>
using namespace std;

class Student {
    int rollNo;

public:
    // Default Constructor
    Student() {
        rollNo = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(int r) {
        rollNo = r;
        cout << "Parameterized Constructor Called" << endl;
        cout << "Roll No: " << rollNo << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Student s1;
    Student s2(101);

    return 0;
}