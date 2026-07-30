#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real, img;
        public:
        void input(){
            cout<<"Enter the numbers: "<<endl;
            cin>>real>>img;
        }
        void show(){
            cout<<real;
            if(img>=0){
                cout<<"+"<<img<<"i"<<endl;
            } else {
                cout<<img<<"i"<<endl;;
            }
        }
};
int main() {
    Complex c1,c2;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    return 0;
}