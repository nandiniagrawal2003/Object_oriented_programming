#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void f1(){
        cout << "F1 executed";

    }
    void f1(int x){
        cout<< " F2 executed";

    }

};
int main(){
    A a1;
    a1.f1();

}