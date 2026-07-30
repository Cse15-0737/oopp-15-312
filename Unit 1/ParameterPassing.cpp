// Develop a program to demonstrate parameter passing techniques (call by value, call by refrence and call by address)
// Analyze their effects on variable modification. Swapping of two numbers.
#include<bits/stdc++.h>
using namespace std;
//call by value
void swapbyvalue(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
// Call by refrence
void swapbyrefrence(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
//Call by address
void swapbyaddress(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"Before swapping: x="<<x<<" y="<<y<<endl;
    swapbyvalue(x,y);
    cout<<"After swapping by value: x="<<x<<" y="<<y<<endl;
    swapbyrefrence(x,y);
    cout<<"After swapping by reference: x="<<x<<" y="<<y<<endl;
    swapbyaddress(&x,&y);
    cout<<"After swapping by address: x="<<x<<" y="<<y<<endl;
    return 0;
}