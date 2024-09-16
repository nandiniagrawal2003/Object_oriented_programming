#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void f1(int x){
        cout << "F1 executed";

    }

};
class B: public A{
    public:
    void f1(int x){
        cout<< " F2 executed";

    }

};
int main(){
    B a1;
    a1.f1(2);

}