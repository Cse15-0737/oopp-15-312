#include <iostream>
using namespace std;
class Area {
public:
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
    double area(double length, double width) {
        return length * width;
    }
    double area(int side) {
        return side * side;
    }
    double area(double base, double height, bool triangle) {
        if (triangle == true) {
            return 0.5 * base * height;
        }
        return 0;
    }
};
int main() {
    Area obj;
    double radius;
    double length, width;
    int side;
    double base, height;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = "
         << obj.area(radius) << endl;
    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = "
         << obj.area(length, width) << endl;
    cout << "\nEnter side of square: ";
    cin >> side;
    cout << "Area of Square = "
         << obj.area(side) << endl;
    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = "
         << obj.area(base, height, true) << endl;
    return 0;
}