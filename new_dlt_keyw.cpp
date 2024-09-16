#include<bits/stdc++.h>
using namespace std;

int main(){
    int *k;
    k= new int;
    *k = 35;
    cout << *k;

    int *p;
    p= new int[5];
    *(p+4)=9;
    *(p+3)=4;
    *(p+2)=1;
    cout << *(p+2);

    delete k;
    delete []p;           // we delete an array before writing brackets of variable
    return 0;
}