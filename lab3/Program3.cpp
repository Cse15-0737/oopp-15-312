// Implement a program to demonstrate Inline function
// default arguments and function overloading for performing simple arithmetic operations
#include <iostream>
using namespace std;

inline int add(int a, int b = 0) {
    return a + b;
}
inline int add(int a, int b, int c) {
    return a + b + c;
}
int add(int a, float b, int c, int d=0) {
    return a + b + c + d;
}
inline int subtract(int a, int b = 0) {
    return a - b;
}
inline int multiply(int a, int b = 1) {
    return a * b;
}

inline int divide(int a, int b = 1) {
    return a / b;
}
int main() {
    cout << "Addition: " << add(5, 3) << endl;
    cout << "Addition with three parameters: " << add(5, 3, 2) << endl;
    cout << "Addition with default argument: " << add(5) << endl;
    cout << "Subtraction: " << subtract(5, 3) << endl;
    cout << "Multiplication: " << multiply(5, 3) << endl;
    cout << "Division: " << divide(6, 3) << endl;
    return 0;
}
