#include<bits/stdc++.h>
using namespace std;


int main(){
    double salary = 5000;
    double &newSalary = salary;
    salary*= 1.10;
    cout<< "Salary: "<<salary<<endl;
    cout<<"New Salary: "<<newSalary<<endl;
return 0;
}