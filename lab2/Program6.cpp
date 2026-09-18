#include<bits/stdc++.h>
using namespace std;

int main(){
    double salary = 5000;
    double *newSalary = &salary;
    *newSalary *= 1.10;
    cout<< "Salary: "<<salary<<endl;
return 0;
}