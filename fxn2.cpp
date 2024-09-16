#include<bits/stdc++.h>
using namespace std;
float fun1(){
    cout<< "Hello";
    return 5.72;
}

int main(){
    float i = fun1();   // it means it is replaced by 5.72 now fun1() = 5.72, so that is why we have to store it in a variable.
    cout <<i;
    return 0;
}