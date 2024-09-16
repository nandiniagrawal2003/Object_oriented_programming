#include<bits/stdc++.h>
using namespace std;
class A{
    int s;
    public:
    A(int g){
        s=g;
        cout<<"Parent Constructor"<<endl;
    }
    ~A(){
        cout<< "Parent Destructor";    // constructor goes from parent to child(in execution) and child to parent (in calling) while destructor goes from child to parent(in both scenarios)

    }

};
class B: public A{
    public:
    B(int p): A(p){
        cout<<"Child Constructor"<<endl;        // it will have both constructor of class A and B bcz it is using inherit class A so above would be used.
    }
    ~B(){
        cout << "Child Destructor";
    }

};
int main(){
    B b1(7);

    return 0;
}