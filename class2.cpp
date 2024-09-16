#include<bits/stdc++.h>
using namespace std;
class Example{
    int x;    // instance member variable
    int y;        // instance member variable
    public:
    void setData(int p,int q){
        x=p;                 // local variable
        y=q;
    }
    void Display(){
        cout<<x<<" "<<y<<endl;

    }

};
int main(){
    Example e1;
    e1.setData(2,3);
    e1.Display();
    Example e2;
    e2.setData(4,5);
    e2.Display();
    return 0;
}