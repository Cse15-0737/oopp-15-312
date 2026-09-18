#include<bits/stdc++.h>
using namespace std;

void updateReference(double &salary) {
    salary *= 1.10;
}
void updatePointer(double *salary) {
    *salary *= 1.10;
}
int main(){
    double salary1 = 5000;
    double salary2 = 7000;
    updateReference(salary1);
    updatePointer(&salary2);
    cout<<"Salary (by reference): "<<salary1<<endl;
    cout<<"Salary (by pointer): "<<salary2<<endl;
return 0;
}