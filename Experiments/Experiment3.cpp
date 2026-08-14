#include <iostream>
using namespace std;

inline int square(int n) {
    return n * n;
}

int add(int a, int b = 10) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}

int main() {
    cout << "Square = " << square(5) << endl;
    cout << "Addition = " << add(10) << endl;
    cout << "Addition = " << add(10, 20) << endl;

    cout << "Integer Multiplication = " << multiply(4, 5) << endl;
    cout << "Float Multiplication = " << multiply(2.5f, 3.0f) << endl;

    return 0;
}