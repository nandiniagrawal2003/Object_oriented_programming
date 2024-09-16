#include<bits/stdc++.h>
using namespace std;
class Example{
    int x,y;
    public:
    void fun(){
        
    } 
    friend void fun1();            // we have made function fun1 friend of example class

};
void fun1(){ 
     Example e1;                  // even after being friend... u have to made an object to access the members of a class
     e1.x=5;
     e1.y=9;
cout<<e1.x<<" "<<e1.y;
}
int main(){
fun1();
}