#include<bits/stdc++.h>
using namespace std;
class demo {
    public:
    int x;
    private:
    static int y;    // we can't initialize static member during class definition
    public:
    static void f1(){
        y=10;   // it is referencing to class lebel private y
    }
    static void display(){
        cout<<y;
    }

};
int demo::y;
int main(){
    demo::f1();
    demo::display();
    return 0;
}