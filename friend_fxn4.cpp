// ek class k andr ka function dusri class ka friend bhi ho skta hai
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void fun1(){

    }
    void fun2(){

    }
    
};
class B{ 
    friend A;          // to make complete class a friend


    friend void A:: fun1();             // to make some function of a class, frnd
    friend void A:: fun2();
    

};

int main(){
    
}