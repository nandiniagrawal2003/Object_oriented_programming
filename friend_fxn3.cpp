// one function can be frien of one than one classes

#include<bits/stdc++.h>
using namespace std;
class Example2;           // class declaration //bcz here example1 doesn't know about example2 class but we have written it in it so we wil tell it that it is going to make in future
class Example1{
    int x;
    public:
    void fun1(){
        
    } 
    friend void fun1(Example1 , Example2 );            

};

class Example2{
    int y;
    public:
    void fun3(){
        
    } 
    friend void fun1(Example1 , Example2 );            

};

void fun1(Example1 e1, Example2 e2){ 
    e1.x=5;
    e2.y=6;
    cout<<e1.x+e2.y;
  
}

int main(){
    Example1 e1;
    Example2 e2;
    fun1(e1,e2);
    
}