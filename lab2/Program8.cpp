// Develop a program to demonstrate parameter techniques(call by value, refrence and value)
// and analyze their effects on variable modifications.
#include<bits/stdc++.h>
using namespace std;


int main(){
    int marks = 80;
    int &newMarks = marks; // Reference variable
    newMarks = 90; // Modifying the reference variable
    cout<<"Original marks: "<<marks<<endl; // Should print 90
    cout<<"New marks: "<<newMarks<<endl; // Should print 90


return 0;
}