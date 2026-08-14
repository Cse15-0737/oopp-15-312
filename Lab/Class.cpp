# include <bits/stdc++.h>
using namespace std;
class point{
    private:
    int x,y;
    public:
    // point(int a, int b){
    //   x = a;
    //   y = b;
    // }                lazy intialization (garbage value at begining).
    point(): x{0}, y{0}{
        cout<<"Default Constructor: "<<endl;
    }

    point(int p, int q): x{p}, y{q} {
        cout<<"Parametrized Constructor: ";
    } // Paramaterized constructor. (faster execution)

    point add(point q){
        point r;
        r.x = x+q.x;
        r.y = y+q.y;
        return r;
    }
    // point add(point q){
    //     return point(x+q.x, y+q.y); Without any local variable addition.
    // }
    void add (point q, point p){
        x = q.x + p.x;
        y = p.y + q.y;
    }

    void show(){
        cout<<x<<" "<<y<<endl;
    }
};
int main() {
    point p(10,30), q(20,50);
    p.show();
    q.show();
    // point r = p.add(q);
    // r.show();
    return 0;
}