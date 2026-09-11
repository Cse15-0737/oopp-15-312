#include<bits/stdc++.h>

using namespace std;
class  student{
    string name;
    int roll;
    string branch;
    public:
    void input(){
        cout<<"Enter the name: "<<endl;
    cin>>name;
    cout<<"Enter the roll: "<<endl;
    cin>>roll;
    cout<<"Enter the branch: "<<endl;
    cin>>branch;
    }
    void show(){
        cout<<name<<" ";
        cout<<roll<<" ";
        cout<<branch<<endl;
    }
};
int main(){
    student s1, s2;
    s1.input();
    s2.input();
    cout<<"Student Details: "<<endl;
    s1.show();
    s2.show();
return 0;
}