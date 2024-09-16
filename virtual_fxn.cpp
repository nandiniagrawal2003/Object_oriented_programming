#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    virtual void f1(){            // if we remove this virtual fxn from here then parent class will be executed
        cout << "Parent executed";
    }

};                         // fxn overriding is being used here for virtual fxn
class B: public A{
    public:
    void f1(){
        cout << "Child executed";
    }

};
int main(){
    A *a1;
    B b1;
    a1=&b1;
    a1->f1();


}