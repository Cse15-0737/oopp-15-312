#include<bits/stdc++.h>
using namespace std;
class comp{
    int real;
    int img;
    public:
    comp(int r=0, int i=0): real{r}, img{i} {};

     //comp operator + (comp c){
        //return comp(this->real+c.real, this->img+c.img); // Operator Overloading.

        // or we can write this as
        // return comp(real+c.real, img+c.img);
        
        // Another method
        // int r = this->real + c.real;
        // int i = this->img + c.img;
        // comp t(r, i);
        // return t;
    //}

    // Overloading Using Friend class.
    //friend comp operator + (comp c, comp d);
    friend comp operator + (comp c, int x);

    void show(){
        cout<<real<<" "<<img<<"i"<<endl;
    }
};

// comp operator + (comp c, comp d){
//     return comp(c.real+d.real, c.img+d.img);        //Operator Overloading using Friend function.
// };
comp operator + (comp c, int x){
    return comp(c.real+x, c.img+x);
}
int main(){
    comp c2(2, 2);
    comp c1(4, 3);
    comp c3 = c1 + 5;
    c1.show();
    c3.show();
return 0;
}