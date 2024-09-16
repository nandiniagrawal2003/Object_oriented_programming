#include<bits/stdc++.h>
using namespace std;
class Example{
    int x,y;
    public:
    void fun(){
        
    } 
    friend int fun1(Example , int , int );       // there is no need to write values like p, q, just tell the type      

};
int fun1(Example j1, int p, int q){ 
     j1.x=p;
     j1.y=q;
     int k= j1.x+j1.y;
     return k;


}

int main(){
    Example e1;
int h=fun1(e1,6,5);
cout<<h;
}