#include<bits/stdc++.h>
using namespace std;
class Samsung1{
    public:
    int x,y;
    void f1(){
        x=3;

    }
    void f2(){
        y=2;

    }
};

class Samsung2: public Samsung1{          // samsung 1 ke members idhr aate hi private ho jayenge isiliye unko public bnaye rkhne k liye we have used public keyword here
    int z;
    public:
    void f3(){
        z=5;
        
    }
    void f4(){
        cout<<x<<" "<<y<<" "<<z;
    }
};
class Samsung3: public Samsung2{             // Multilevel inheritance
    public:
    int a,b;
    void fun5(){
    }
};
int main(){
    Samsung2 s1;
    s1.f1();
    s1.f2();
    s1.f3();
    s1.f4();

}